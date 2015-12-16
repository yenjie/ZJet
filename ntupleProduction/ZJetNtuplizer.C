#include "HiForestAnalysis/hiForest.h"
#include <TLorentzVector.h>

class ZJetTree
{
   public:
   // Gen level info
   float Zpt;
   float Zeta;
   float Zphi;
   float Zmass;
   float hiBin;
   // Reco level info
   float Zpt;
   float Zeta;
   float Zphi;
   float Zmass;
   float hiBin;
   TTree *t;
   void init(){
      t = new TTree("t","");
      t->Branch("hiBin",&hiBin);
      t->Branch("Zpt",&Zpt);
      t->Branch("Zeta",&Zeta);
      t->Branch("Zphi",&Zphi);
      t->Branch("Zmass",&Zmass);
   }
   
   void clear(){
      
   }
   
};

void ZJetNtuplizer(char *infName)
{
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
   h.hasTrackTree=0;
   h.hasPFTree=0;
   h.InitTree();
   TFile *outf = new TFile("ZJetTree.root","recreate");
   
   ZJetTree ZJet;   
   ZJet.init();
   cout <<"Initialized"<<endl;
   TLorentzVector muplus;
   TLorentzVector muminus;
   TLorentzVector genZ;

   for (int i=0;i<h.GetEntries();i++)
   {
      h.GetEntry(i);
      if (i%1000==0) cout <<i<<" / "<<h.GetEntries()<<endl;
      ZJet.hiBin=h.evt.hiBin;
      
      for (int j=0;j<h.genparticle.pt->size();j++){
         if (h.genparticle.pdg->at(j)==13){ 
	 muplus.SetPtEtaPhiM( h.genparticle.pt->at(j),   
                              h.genparticle.eta->at(j),   
                              h.genparticle.phi->at(j),
			      0.000511);
 	 }
	 if (h.genparticle.pdg->at(j)==-13){ 
	 muminus.SetPtEtaPhiM( h.genparticle.pt->at(j),   
                              h.genparticle.eta->at(j),   
                              h.genparticle.phi->at(j),
			      0.000511);
 	 }		         
      }
      genZ=muplus+muminus;
      ZJet.Zpt=genZ.Pt();
      ZJet.Zeta=genZ.Eta();
      ZJet.Zphi=genZ.Phi();
      ZJet.Zmass=genZ.M();
      
      ZJet.t->Fill();
   }
   ZJet.t->Write();
   outf->Close();

}