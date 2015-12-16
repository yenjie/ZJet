#include "hiForest.h"

class photonTree
{
   public:
   int nPho;
   vector<bool> isGenMatched;
   vector<int> matchedMomPID;
   vector<float> matchedCalIsoDR04;
   vector<float> matchedTrkIsoDR04;
   vector<float> matchedEt;
   vector<float> phoEt;
   vector<float> phoEta;
   vector<float> phoEt;
   vector<float> phoSumIso;
   vector<float> phoSigmaIEtaIEta;
   float hiBin;
   TTree *t;
   void init(){
      t = new TTree("t","");
      t->Branch("isGenMatched",&isGenMatched);
      t->Branch("phoEt",&phoEt);
      t->Branch("phoEta",&phoEta);
      t->Branch("phoSigmaIEtaIEta",&phoSigmaIEtaIEta);
      t->Branch("phoSumIso",&phoSumIso);
      t->Branch("matchedEt",&matchedEt);
      t->Branch("matchedMomPID",&matchedMomPID);
      t->Branch("matchedCalIsoDR04",&matchedCalIsoDR04);
      t->Branch("matchedTrkIsoDR04",&matchedTrkIsoDR04);
      t->Branch("hiBin",&hiBin);
   }
   
   void clear(){
      isGenMatched.clear();
      matchedMomPID.clear();
      matchedCalIsoDR04.clear();
      matchedTrkIsoDR04.clear();
      matchedEt.clear();
      phoEt.clear();
      phoEta.clear();
      phoSumIso.clear();
      phoSigmaIEtaIEta.clear();
      
   }
   
};

void photonAna(char *infName)
{
   HiForest h(infName,"",cPbPb);
   h.verbose=0;
   h.InitTree();
   
   TFile *outf = new TFile("photonTree.root","recreate");
   
   photonTree photon;   
   photon.init();

   for (int i=0;i<h.GetEntries();i++)
   {
 //     cout <<i<<endl;
      h.GetEntry(i);
      if (i%1000==0) cout <<i<<" / "<<h.GetEntries()<<endl;
      photon.clear();
      photon.hiBin=h.evt.hiBin;
      for (int j=0;j<h.photon.nPho;j++){
//         cout <<j<<endl;	
         photon.isGenMatched.push_back(h.photon.isGenMatched->at(j));
	 photon.phoSumIso.push_back((h.photon.pho_ecalClusterIsoR4->at(j)+h.photon.pho_hcalRechitIsoR4->at(j)+h.photon.pho_trackIsoR4PtCut20->at(j))/0.9);
         photon.phoEt.push_back(h.photon.phoEt->at(j));
	 photon.phoEta.push_back(h.photon.phoEta->at(j));
	 photon.phoSigmaIEtaIEta.push_back(h.photon.phoSigmaIEtaIEta->at(j));
         if (h.photon.isGenMatched->at(j)!=0) {
 	    photon.matchedMomPID.push_back(h.photon.mcMomPID->at(h.photon.genMatchedIdx->at(j)));
            photon.matchedEt.push_back(h.photon.mcPt->at(h.photon.genMatchedIdx->at(j)));
            photon.matchedCalIsoDR04.push_back(h.photon.mcCalIsoDR04->at(h.photon.genMatchedIdx->at(j)));
            photon.matchedTrkIsoDR04.push_back(h.photon.mcTrkIsoDR04->at(h.photon.genMatchedIdx->at(j)));
         } else {
	    photon.matchedMomPID.push_back(0);
            photon.matchedEt.push_back(0);
            photon.matchedCalIsoDR04.push_back(0);
            photon.matchedTrkIsoDR04.push_back(0);
         }
      }
      photon.t->Fill();
   }
   photon.t->Write();
   outf->Close();

}
