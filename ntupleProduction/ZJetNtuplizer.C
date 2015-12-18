#include "HiForestAnalysis/hiForest.h"
#include <TLorentzVector.h>

class Particle
{
   public:
      int pdg;
      int charge;
      TLorentzVector p4;
      vector<Particle> daughter;
   void SetPtEtaPhiM(double ppt, double peta, double pphi, double pmass, int pcharge){
      p4.SetPtEtaPhiM(ppt,peta,pphi,pmass);
      charge=pcharge;
   }
   void SetP4(TLorentzVector p, int pcharge=-100)
   {
     p4=p;
     charge=pcharge;
     
   }
   
   void combination(Particle a,Particle b)
   {
      p4 = a.p4+b.p4;
      charge = a.charge+b.charge;
      daughter.clear();
      daughter.push_back(a);
      daughter.push_back(b);
      //cout <<"good good"<<endl;
   }
   
   void clear()
   {
      p4.Clear();
      daughter.clear();
   }
   
   private:
      
};

class ZJetTree
{
   public:
   // Gen level info
   float genZpt;
   float genZeta;
   float genZphi;
   float genZmass;
   float genZmu1pt;
   float genZmu2pt;
   
   
   // Reco level info
   float Zpt;
   float Zeta;
   float Zphi;
   float Zmass;
   float Zcharge;
   float hiBin;
   TTree *t;
   void init(){
      t = new TTree("t","");
      // Event Info
      t->Branch("hiBin",&hiBin);

      // Gen level info
      t->Branch("genZpt",&genZpt);
      t->Branch("genZeta",&genZeta);
      t->Branch("genZphi",&genZphi);
      t->Branch("genZmass",&genZmass);
      t->Branch("genZmu1pt",&genZmu1pt);
      t->Branch("genZmu2pt",&genZmu2pt);

      // Reco level info
      t->Branch("Zpt",&Zpt);
      t->Branch("Zeta",&Zeta);
      t->Branch("Zphi",&Zphi);
      t->Branch("Zmass",&Zmass);
      t->Branch("Zcharge",&Zcharge);
   }
   
   void clear(){
      // Gen level info
      genZpt=0;
      genZeta=0;
      genZphi=0;
      genZmass=0;
      genZmu1pt=0;
      genZmu2pt=0;
      // Reco level info
      Zpt=0;
      Zeta=0;
      Zphi=0;
      Zmass=0;
      Zcharge=0;
      hiBin=0;
      
   }
   
};

bool goodMuon(Photons gg, int imu)
{
   if(gg.muChi2NDF->at(imu)<10
      && gg.muMuonHits->at(imu)>0
      && gg.muStations->at(imu)>1
      && gg.muTrkLayers->at(imu)>5
      && gg.muPixelHits->at(imu)>0
      && fabs(gg.muInnerD0->at(imu))<0.2
      && fabs(gg.muInnerDz->at(imu))<0.5
      ) return true;
   else return false;
}

void ZJetNtuplizer(char *infName)
{
   // Load hiForest tree
   HiForest h(infName,"",cPbPb);
   h.verbose=0;
   h.hasAkVs2PFJetTree=0;
   h.hasAkVs3PFJetTree=0;
   h.hasAkVs4PFJetTree=0;
   h.hasAkVs5PFJetTree=0;
   h.hasAkVs6PFJetTree=0;
   h.hasAkVs2CaloJetTree=0;
   h.hasAkVs3CaloJetTree=0;
   h.hasAkVs4CaloJetTree=0;
   h.hasAkVs5CaloJetTree=0;
   h.hasAkVs6CaloJetTree=0;
   h.hasSkimTree=0;
   h.hasTrackTree=0;
   h.hasPFTree=0;
   h.InitTree();
   
   // output file
   TFile *outf = new TFile("ZJetTree.root","recreate");
   
   	// clone a jet tree
   TTree *tJet = h.akPu3PFJetTree->CloneTree(0);
   tJet->SetMaxTreeSize(4000000000);
   tJet->SetName("tJet");
   
    ZJetTree ZJet;   
   ZJet.init();
   cout <<"Initialized"<<endl;
   
   Particle genmu1;
   Particle genmu2;
   Particle genZ;

   Particle mu1;
   Particle mu2;
   Particle Z;
   
   TLorentzVector zero;

   for (int i=0;i<h.GetEntries();i++)
   {
      h.GetEntry(i);
      ZJet.clear();
      if (i%1000==0) cout <<i<<" / "<<h.GetEntries()<<endl;
      ZJet.hiBin=h.evt.hiBin;
      genZ.clear();
      
      // fill Gen info
      // Assuming there is only one Z in the event
      for (unsigned int j=0;j<h.genparticle.pt->size();j++){
	 if (fabs(h.genparticle.pdg->at(j))!=13) continue;
         if (h.genparticle.pt->at(j)<20) continue;
         if (fabs(h.genparticle.eta->at(j))>2.4) continue;
         genmu1.SetPtEtaPhiM( 	h.genparticle.pt->at(j),   
                              	h.genparticle.eta->at(j),   
                              	h.genparticle.phi->at(j),
			      	0.105658,
			      	h.genparticle.chg->at(j));
 	 
	 for (unsigned int k=j+1;k<h.genparticle.pt->size();k++){
            if (fabs(h.genparticle.pdg->at(k))!=13) continue;
            if (h.genparticle.pt->at(k)<20) continue;
            if (fabs(h.genparticle.eta->at(k))>2.4) continue;
	    genmu2.SetPtEtaPhiM( 	h.genparticle.pt->at(k),   
                              		h.genparticle.eta->at(k),   
                              		h.genparticle.phi->at(k),
			      		0.105658,
					h.genparticle.chg->at(k));
	    
	    if (genmu1.charge+genmu2.charge!=0) continue;
	    genZ.combination(genmu1,genmu2);	
	    //if (genZ.p4.M()<60) continue;
 	 }		         
      }
      if (genZ.daughter.size()==2) {
         ZJet.genZpt=genZ.p4.Pt();
         ZJet.genZeta=genZ.p4.Eta();
         ZJet.genZphi=genZ.p4.Phi();
         ZJet.genZmass=genZ.p4.M();
         ZJet.genZmu1pt=genZ.daughter.at(0).p4.Pt();
         ZJet.genZmu2pt=genZ.daughter.at(1).p4.Pt();
      }
      Z.p4=zero;
      // fill Reco info      
      for (unsigned int j=0;j<h.photon.muPt->size();j++) {
         if (!goodMuon(h.photon,j)||h.photon.muPt->at(j)<20||fabs(h.photon.muEta->at(j))>2.4) continue;
	 mu1.SetPtEtaPhiM(h.photon.muPt->at(j),h.photon.muEta->at(j),h.photon.muPhi->at(j),0.105658,h.photon.muCharge->at(j));
	 for (unsigned int k=j+1;k<h.photon.muPt->size();k++) {
            if (!goodMuon(h.photon,k)||h.photon.muPt->at(k)<20||fabs(h.photon.muEta->at(k))>2.4) continue;
            mu2.SetPtEtaPhiM(h.photon.muPt->at(k),h.photon.muEta->at(k),h.photon.muPhi->at(k),0.105658,h.photon.muCharge->at(k));
            
	    if (mu1.charge+mu2.charge!=0) continue;
	    Z.SetP4(mu1.p4+mu2.p4,mu1.charge+mu2.charge);
	    
         }
         
      }
      ZJet.Zpt=Z.p4.Pt();
      ZJet.Zeta=Z.p4.Eta();
      
      ZJet.Zphi=Z.p4.Phi();
      ZJet.Zmass=Z.p4.M();
      ZJet.Zcharge=Z.charge;

      ZJet.t->Fill();
      tJet->Fill();
   }
   
   //Write output file
   ZJet.t->Write();
   tJet->AutoSave();
   outf->Close();

}
