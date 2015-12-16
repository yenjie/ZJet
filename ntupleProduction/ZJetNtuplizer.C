#include "HiForestAnalysis/hiForest.h"
#include <TLorentzVector.h>

class Particle
{
   public:
      int pdg;
      int charge;
      TLorentzVector p4;
   void SetPtEtaPhiM(double ppt, double peta, double pphi, double pmass, int pcharge){
      p4.SetPtEtaPhiM(ppt,peta,pphi,pmass);
      charge=pcharge;
   }
   void SetP4(TLorentzVector p, int pcharge=-100)
   {
     p4=p;
     charge=pcharge;
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
   TLorentzVector genmuplus;
   TLorentzVector genmuminus;
   TLorentzVector genZ;

   Particle mu1;
   Particle mu2;
   Particle Z;

   for (int i=0;i<h.GetEntries();i++)
   {
      h.GetEntry(i);
      if (i%1000==0) cout <<i<<" / "<<h.GetEntries()<<endl;
      ZJet.hiBin=h.evt.hiBin;
      
      // fill Gen info
      for (unsigned int j=0;j<h.genparticle.pt->size();j++){
         // here we assume there are only two muons in the tree
	 if (h.genparticle.pdg->at(j)==13){ 
	 genmuplus.SetPtEtaPhiM( h.genparticle.pt->at(j),   
                              h.genparticle.eta->at(j),   
                              h.genparticle.phi->at(j),
			      0.000511);
 	 }
	 if (h.genparticle.pdg->at(j)==-13){ 
	 genmuminus.SetPtEtaPhiM( h.genparticle.pt->at(j),   
                              h.genparticle.eta->at(j),   
                              h.genparticle.phi->at(j),
			      0.000511);
 	 }		         
      }
      genZ=genmuplus+genmuminus;
      ZJet.genZpt=genZ.Pt();
      ZJet.genZeta=genZ.Eta();
      ZJet.genZphi=genZ.Phi();
      ZJet.genZmass=genZ.M();
      
      // fill Reco info      
      for (unsigned int j=0;j<h.photon.muPt->size();j++) {
         if (!goodMuon(h.photon,j)||h.photon.muPt->at(j)<20) continue;
	 mu1.SetPtEtaPhiM(h.photon.muPt->at(j),h.photon.muEta->at(j),h.photon.muPhi->at(j),0.105658,h.photon.muCharge->at(j));
	 for (unsigned int k=j+1;k<h.photon.muPt->size();k++) {
            if (!goodMuon(h.photon,k)||h.photon.muPt->at(k)<20) continue;
            mu2.SetPtEtaPhiM(h.photon.muPt->at(k),h.photon.muEta->at(k),h.photon.muPhi->at(k),0.105658,h.photon.muCharge->at(k));
            Z.SetP4(mu1.p4+mu2.p4,mu1.charge+mu2.charge);
	    
	    if (Z.charge!=0) continue;
	    if (Z.p4.M()<60) continue;
	    ZJet.Zpt=Z.p4.Pt();
	    ZJet.Zeta=Z.p4.Eta();
	    ZJet.Zphi=Z.p4.Phi();
	    ZJet.Zmass=Z.p4.M();
	    ZJet.Zcharge=Z.charge;
         }
         
      }

      ZJet.t->Fill();
      tJet->Fill();
   }
   
   //Write output file
   ZJet.t->Write();
   tJet->AutoSave();
   outf->Close();

}
