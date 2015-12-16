//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Dec 16 13:48:35 2015 by ROOT version 6.02/10
// from TTree HltTree/
// found on file: ../../../HiForestAOD_withTupel_PbPb_MC_Z30mumuJet_v1.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Hlts {
public :
   Hlts(){};
   ~Hlts(){};

   // Declaration of leaf types
   Int_t           NL1IsolEm;
   Float_t         L1IsolEmEt[8];   //[NL1IsolEm]
   Float_t         L1IsolEmE[8];   //[NL1IsolEm]
   Float_t         L1IsolEmEta[8];   //[NL1IsolEm]
   Float_t         L1IsolEmPhi[8];   //[NL1IsolEm]
   Int_t           NL1NIsolEm;
   Float_t         L1NIsolEmEt[8];   //[NL1NIsolEm]
   Float_t         L1NIsolEmE[8];   //[NL1NIsolEm]
   Float_t         L1NIsolEmEta[8];   //[NL1NIsolEm]
   Float_t         L1NIsolEmPhi[8];   //[NL1NIsolEm]
   Int_t           NL1Mu;
   Float_t         L1MuPt[8];   //[NL1Mu]
   Float_t         L1MuE[8];   //[NL1Mu]
   Float_t         L1MuEta[8];   //[NL1Mu]
   Float_t         L1MuPhi[8];   //[NL1Mu]
   Int_t           L1MuIsol[8];   //[NL1Mu]
   Int_t           L1MuMip[8];   //[NL1Mu]
   Int_t           L1MuFor[8];   //[NL1Mu]
   Int_t           L1MuRPC[8];   //[NL1Mu]
   Int_t           L1MuQal[8];   //[NL1Mu]
   Int_t           L1MuChg[8];   //[NL1Mu]
   Int_t           NL1CenJet;
   Float_t         L1CenJetEt[8];   //[NL1CenJet]
   Float_t         L1CenJetE[8];   //[NL1CenJet]
   Float_t         L1CenJetEta[8];   //[NL1CenJet]
   Float_t         L1CenJetPhi[8];   //[NL1CenJet]
   Int_t           NL1ForJet;
   Float_t         L1ForJetEt[8];   //[NL1ForJet]
   Float_t         L1ForJetE[8];   //[NL1ForJet]
   Float_t         L1ForJetEta[8];   //[NL1ForJet]
   Float_t         L1ForJetPhi[8];   //[NL1ForJet]
   Int_t           NL1Tau;
   Float_t         L1TauEt[8];   //[NL1Tau]
   Float_t         L1TauE[8];   //[NL1Tau]
   Float_t         L1TauEta[8];   //[NL1Tau]
   Float_t         L1TauPhi[8];   //[NL1Tau]
   Float_t         L1Met;
   Float_t         L1MetPhi;
   Float_t         L1EtTot;
   Float_t         L1Mht;
   Float_t         L1MhtPhi;
   Float_t         L1EtHad;
   Int_t           L1HfRing1EtSumPositiveEta;
   Int_t           L1HfRing2EtSumPositiveEta;
   Int_t           L1HfRing1EtSumNegativeEta;
   Int_t           L1HfRing2EtSumNegativeEta;
   Int_t           L1HfTowerCountPositiveEtaRing1;
   Int_t           L1HfTowerCountNegativeEtaRing1;
   Int_t           L1HfTowerCountPositiveEtaRing2;
   Int_t           L1HfTowerCountNegativeEtaRing2;
   ULong64_t       Event;
   Int_t           LumiBlock;
   Int_t           Run;
   Int_t           Bx;
   Int_t           Orbit;
   Double_t        AvgInstDelLumi;
   Int_t           digitisation_step;
   Int_t           digitisation_step_Prescl;
   Int_t           L1simulation_step;
   Int_t           L1simulation_step_Prescl;
   Int_t           digi2raw_step;
   Int_t           digi2raw_step_Prescl;
   Int_t           HLTriggerFirstPath;
   Int_t           HLTriggerFirstPath_Prescl;
   Int_t           DST_Physics_v1;
   Int_t           DST_Physics_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet40_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet60_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet80_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet100_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet110_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet110_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet120_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet120_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet150_Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet150_Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1;
   Int_t           HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1;
   Int_t           HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1;
   Int_t           HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1;
   Int_t           HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloDJet60_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloDJet60_Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloDJet80_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloDJet80_Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt50_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt50_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt60_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt60_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt70_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt70_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1_Prescl;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1;
   Int_t           HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1_Prescl;
   Int_t           HLT_HISinglePhoton10_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton10_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton15_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton15_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton20_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton20_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton30_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton30_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton40_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton50_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton50_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton60_Eta1p5_v1;
   Int_t           HLT_HISinglePhoton60_Eta1p5_v1_Prescl;
   Int_t           HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta2p1_v1;
   Int_t           HLT_HISinglePhoton40_Eta2p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton10_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton10_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton15_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton15_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton20_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton20_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton30_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton30_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton40_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton50_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton50_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton60_Eta3p1_v1;
   Int_t           HLT_HISinglePhoton60_Eta3p1_v1_Prescl;
   Int_t           HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1;
   Int_t           HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1;
   Int_t           HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1_Prescl;
   Int_t           HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1;
   Int_t           HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1_Prescl;
   Int_t           HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1;
   Int_t           HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1_Prescl;
   Int_t           HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1;
   Int_t           HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1_Prescl;
   Int_t           HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1;
   Int_t           HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1_Prescl;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1;
   Int_t           HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1_Prescl;
   Int_t           HLT_HIUCC100_v1;
   Int_t           HLT_HIUCC100_v1_Prescl;
   Int_t           HLT_HIUCC020_v1;
   Int_t           HLT_HIUCC020_v1_Prescl;
   Int_t           HLT_HIQ2Bottom005_Centrality1030_v1;
   Int_t           HLT_HIQ2Bottom005_Centrality1030_v1_Prescl;
   Int_t           HLT_HIQ2Top005_Centrality1030_v1;
   Int_t           HLT_HIQ2Top005_Centrality1030_v1_Prescl;
   Int_t           HLT_HIQ2Bottom005_Centrality3050_v1;
   Int_t           HLT_HIQ2Bottom005_Centrality3050_v1_Prescl;
   Int_t           HLT_HIQ2Top005_Centrality3050_v1;
   Int_t           HLT_HIQ2Top005_Centrality3050_v1_Prescl;
   Int_t           HLT_HIQ2Bottom005_Centrality5070_v1;
   Int_t           HLT_HIQ2Bottom005_Centrality5070_v1_Prescl;
   Int_t           HLT_HIQ2Top005_Centrality5070_v1;
   Int_t           HLT_HIQ2Top005_Centrality5070_v1_Prescl;
   Int_t           HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1;
   Int_t           HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1_Prescl;
   Int_t           HLT_HIFullTrack12_L1Centrality010_v1;
   Int_t           HLT_HIFullTrack12_L1Centrality010_v1_Prescl;
   Int_t           HLT_HIFullTrack12_L1Centrality30100_v1;
   Int_t           HLT_HIFullTrack12_L1Centrality30100_v1_Prescl;
   Int_t           HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1;
   Int_t           HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1_Prescl;
   Int_t           HLT_HIFullTrack18_L1Centrality010_v1;
   Int_t           HLT_HIFullTrack18_L1Centrality010_v1_Prescl;
   Int_t           HLT_HIFullTrack18_L1Centrality30100_v1;
   Int_t           HLT_HIFullTrack18_L1Centrality30100_v1_Prescl;
   Int_t           HLT_HIFullTrack24_v1;
   Int_t           HLT_HIFullTrack24_v1_Prescl;
   Int_t           HLT_HIFullTrack24_L1Centrality30100_v1;
   Int_t           HLT_HIFullTrack24_L1Centrality30100_v1_Prescl;
   Int_t           HLT_HIFullTrack34_v1;
   Int_t           HLT_HIFullTrack34_v1_Prescl;
   Int_t           HLT_HIFullTrack34_L1Centrality30100_v1;
   Int_t           HLT_HIFullTrack34_L1Centrality30100_v1_Prescl;
   Int_t           HLT_HIFullTrack45_v1;
   Int_t           HLT_HIFullTrack45_v1_Prescl;
   Int_t           HLT_HIFullTrack45_L1Centrality30100_v1;
   Int_t           HLT_HIFullTrack45_L1Centrality30100_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_v1;
   Int_t           HLT_HIL1DoubleMu0_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_2HF_v1;
   Int_t           HLT_HIL1DoubleMu0_2HF_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_2HF0_v1;
   Int_t           HLT_HIL1DoubleMu0_2HF0_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu10_v1;
   Int_t           HLT_HIL1DoubleMu10_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_NHitQ_v2;
   Int_t           HLT_HIL2DoubleMu0_NHitQ_v2_Prescl;
   Int_t           HLT_HIL2DoubleMu0_NHitQ_2HF_v1;
   Int_t           HLT_HIL2DoubleMu0_NHitQ_2HF_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_NHitQ_2HF0_v1;
   Int_t           HLT_HIL2DoubleMu0_NHitQ_2HF0_v1_Prescl;
   Int_t           HLT_HIL2Mu3_NHitQ10_2HF_v1;
   Int_t           HLT_HIL2Mu3_NHitQ10_2HF_v1_Prescl;
   Int_t           HLT_HIL2Mu3_NHitQ10_2HF0_v1;
   Int_t           HLT_HIL2Mu3_NHitQ10_2HF0_v1_Prescl;
   Int_t           HLT_HIL3Mu3_NHitQ15_2HF_v1;
   Int_t           HLT_HIL3Mu3_NHitQ15_2HF_v1_Prescl;
   Int_t           HLT_HIL3Mu3_NHitQ15_2HF0_v1;
   Int_t           HLT_HIL3Mu3_NHitQ15_2HF0_v1_Prescl;
   Int_t           HLT_HIL2Mu5_NHitQ10_2HF_v1;
   Int_t           HLT_HIL2Mu5_NHitQ10_2HF_v1_Prescl;
   Int_t           HLT_HIL2Mu5_NHitQ10_2HF0_v1;
   Int_t           HLT_HIL2Mu5_NHitQ10_2HF0_v1_Prescl;
   Int_t           HLT_HIL3Mu5_NHitQ15_2HF_v1;
   Int_t           HLT_HIL3Mu5_NHitQ15_2HF_v1_Prescl;
   Int_t           HLT_HIL3Mu5_NHitQ15_2HF0_v1;
   Int_t           HLT_HIL3Mu5_NHitQ15_2HF0_v1_Prescl;
   Int_t           HLT_HIL2Mu7_NHitQ10_2HF_v1;
   Int_t           HLT_HIL2Mu7_NHitQ10_2HF_v1_Prescl;
   Int_t           HLT_HIL2Mu7_NHitQ10_2HF0_v1;
   Int_t           HLT_HIL2Mu7_NHitQ10_2HF0_v1_Prescl;
   Int_t           HLT_HIL3Mu7_NHitQ15_2HF_v1;
   Int_t           HLT_HIL3Mu7_NHitQ15_2HF_v1_Prescl;
   Int_t           HLT_HIL3Mu7_NHitQ15_2HF0_v1;
   Int_t           HLT_HIL3Mu7_NHitQ15_2HF0_v1_Prescl;
   Int_t           HLT_HIL2Mu15_v2;
   Int_t           HLT_HIL2Mu15_v2_Prescl;
   Int_t           HLT_HIL2Mu15_2HF_v1;
   Int_t           HLT_HIL2Mu15_2HF_v1_Prescl;
   Int_t           HLT_HIL2Mu15_2HF0_v1;
   Int_t           HLT_HIL2Mu15_2HF0_v1_Prescl;
   Int_t           HLT_HIL3Mu15_v1;
   Int_t           HLT_HIL3Mu15_v1_Prescl;
   Int_t           HLT_HIL3Mu15_2HF_v1;
   Int_t           HLT_HIL3Mu15_2HF_v1_Prescl;
   Int_t           HLT_HIL3Mu15_2HF0_v1;
   Int_t           HLT_HIL3Mu15_2HF0_v1_Prescl;
   Int_t           HLT_HIL2Mu20_v1;
   Int_t           HLT_HIL2Mu20_v1_Prescl;
   Int_t           HLT_HIL2Mu20_2HF_v1;
   Int_t           HLT_HIL2Mu20_2HF_v1_Prescl;
   Int_t           HLT_HIL2Mu20_2HF0_v1;
   Int_t           HLT_HIL2Mu20_2HF0_v1_Prescl;
   Int_t           HLT_HIL3Mu20_v1;
   Int_t           HLT_HIL3Mu20_v1_Prescl;
   Int_t           HLT_HIL3Mu20_2HF_v1;
   Int_t           HLT_HIL3Mu20_2HF_v1_Prescl;
   Int_t           HLT_HIL3Mu20_2HF0_v1;
   Int_t           HLT_HIL3Mu20_2HF0_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_2HF_Cent30100_v1;
   Int_t           HLT_HIL1DoubleMu0_2HF_Cent30100_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_2HF0_Cent30100_v1;
   Int_t           HLT_HIL1DoubleMu0_2HF0_Cent30100_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1;
   Int_t           HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_Cent30_v1;
   Int_t           HLT_HIL1DoubleMu0_Cent30_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1;
   Int_t           HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1;
   Int_t           HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_Cent30_NHitQ_v1;
   Int_t           HLT_HIL2DoubleMu0_Cent30_NHitQ_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu0_Cent30_v1;
   Int_t           HLT_HIL3DoubleMu0_Cent30_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1;
   Int_t           HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1;
   Int_t           HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1;
   Int_t           HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu0_OS_m7to14_v1;
   Int_t           HLT_HIL3DoubleMu0_OS_m7to14_v1_Prescl;
   Int_t           HLT_HIUPCL1SingleMuOpenNotHF2_v1;
   Int_t           HLT_HIUPCL1SingleMuOpenNotHF2_v1_Prescl;
   Int_t           HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHF2_v1;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHF2_v1_Prescl;
   Int_t           HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1SingleEG2NotHF2_v1;
   Int_t           HLT_HIUPCL1SingleEG2NotHF2_v1_Prescl;
   Int_t           HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleEG2NotHF2_v1;
   Int_t           HLT_HIUPCL1DoubleEG2NotHF2_v1_Prescl;
   Int_t           HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1SingleEG5NotHF2_v1;
   Int_t           HLT_HIUPCL1SingleEG5NotHF2_v1_Prescl;
   Int_t           HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHF1_v1;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHF1_v1_Prescl;
   Int_t           HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleEG2NotZDCAND_v1;
   Int_t           HLT_HIUPCL1DoubleEG2NotZDCAND_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1EG2NotZDCAND_v1;
   Int_t           HLT_HIUPCL1EG2NotZDCAND_v1_Prescl;
   Int_t           HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1MuOpenNotZDCAND_v1;
   Int_t           HLT_HIUPCL1MuOpenNotZDCAND_v1_Prescl;
   Int_t           HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1;
   Int_t           HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1_Prescl;
   Int_t           HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1;
   Int_t           HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1_Prescl;
   Int_t           HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1_Prescl;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIL1CastorMediumJet_v1;
   Int_t           HLT_HIL1CastorMediumJet_v1_Prescl;
   Int_t           HLT_HIL1CastorMediumJetAK4CaloJet20_v1;
   Int_t           HLT_HIL1CastorMediumJetAK4CaloJet20_v1_Prescl;
   Int_t           HLT_HICastorMediumJetPixel_SingleTrack_v1;
   Int_t           HLT_HICastorMediumJetPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1NotMinimumBiasHF2_AND_v1;
   Int_t           HLT_HIUPCL1NotMinimumBiasHF2_AND_v1_Prescl;
   Int_t           HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1ZdcOR_BptxAND_v1;
   Int_t           HLT_HIUPCL1ZdcOR_BptxAND_v1_Prescl;
   Int_t           HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1ZdcXOR_BptxAND_v1;
   Int_t           HLT_HIUPCL1ZdcXOR_BptxAND_v1_Prescl;
   Int_t           HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIUPCL1NotZdcOR_BptxAND_v1;
   Int_t           HLT_HIUPCL1NotZdcOR_BptxAND_v1_Prescl;
   Int_t           HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1;
   Int_t           HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIZeroBias_v1;
   Int_t           HLT_HIZeroBias_v1_Prescl;
   Int_t           HLT_HICentralityVeto_v1;
   Int_t           HLT_HICentralityVeto_v1_Prescl;
   Int_t           HLT_HIL1Tech5_BPTX_PlusOnly_v1;
   Int_t           HLT_HIL1Tech5_BPTX_PlusOnly_v1_Prescl;
   Int_t           HLT_HIL1Tech6_BPTX_MinusOnly_v1;
   Int_t           HLT_HIL1Tech6_BPTX_MinusOnly_v1_Prescl;
   Int_t           HLT_HIL1Tech7_NoBPTX_v1;
   Int_t           HLT_HIL1Tech7_NoBPTX_v1_Prescl;
   Int_t           HLT_HIL1MinimumBiasHF1OR_v1;
   Int_t           HLT_HIL1MinimumBiasHF1OR_v1_Prescl;
   Int_t           HLT_HIL1MinimumBiasHF2OR_v1;
   Int_t           HLT_HIL1MinimumBiasHF2OR_v1_Prescl;
   Int_t           HLT_HIL1MinimumBiasHF1AND_v1;
   Int_t           HLT_HIL1MinimumBiasHF1AND_v1_Prescl;
   Int_t           HLT_HIL1MinimumBiasHF2AND_v1;
   Int_t           HLT_HIL1MinimumBiasHF2AND_v1_Prescl;
   Int_t           HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1;
   Int_t           HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIZeroBiasPixel_SingleTrack_v1;
   Int_t           HLT_HIZeroBiasPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1;
   Int_t           HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1_Prescl;
   Int_t           HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1;
   Int_t           HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1;
   Int_t           HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1_Prescl;
   Int_t           HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1;
   Int_t           HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1;
   Int_t           HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1_Prescl;
   Int_t           HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1;
   Int_t           HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_HIPhysics_v1;
   Int_t           HLT_HIPhysics_v1_Prescl;
   Int_t           HLT_HIRandom_v1;
   Int_t           HLT_HIRandom_v1_Prescl;
   Int_t           HLT_EcalCalibration_v1;
   Int_t           HLT_EcalCalibration_v1_Prescl;
   Int_t           HLT_HcalCalibration_v1;
   Int_t           HLT_HcalCalibration_v1_Prescl;
   Int_t           AlCa_EcalPhiSymForHI_v1;
   Int_t           AlCa_EcalPhiSymForHI_v1_Prescl;
   Int_t           AlCa_RPCMuonNoTriggersForHI_v1;
   Int_t           AlCa_RPCMuonNoTriggersForHI_v1_Prescl;
   Int_t           AlCa_RPCMuonNoHitsForHI_v1;
   Int_t           AlCa_RPCMuonNoHitsForHI_v1_Prescl;
   Int_t           AlCa_RPCMuonNormalisationForHI_v1;
   Int_t           AlCa_RPCMuonNormalisationForHI_v1_Prescl;
   Int_t           AlCa_LumiPixels_Random_v1;
   Int_t           AlCa_LumiPixels_Random_v1_Prescl;
   Int_t           AlCa_LumiPixels_ZeroBias_v2;
   Int_t           AlCa_LumiPixels_ZeroBias_v2_Prescl;
   Int_t           HLTriggerFinalPath;
   Int_t           HLTriggerFinalPath_Prescl;
   Int_t           raw2digi_step;
   Int_t           raw2digi_step_Prescl;
   Int_t           L1Reco_step;
   Int_t           L1Reco_step_Prescl;
   Int_t           L1_BptxMinus_NotBptxPlus;
   Int_t           L1_BptxMinus_NotBptxPlus_Prescl;
   Int_t           L1_BptxPlusORMinus;
   Int_t           L1_BptxPlusORMinus_Prescl;
   Int_t           L1_BptxPlus_NotBptxMinus;
   Int_t           L1_BptxPlus_NotBptxMinus_Prescl;
   Int_t           L1_CastorHighJet_BptxAND;
   Int_t           L1_CastorHighJet_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet_BptxAND;
   Int_t           L1_CastorMediumJet_BptxAND_Prescl;
   Int_t           L1_CastorMuon_BptxAND;
   Int_t           L1_CastorMuon_BptxAND_Prescl;
   Int_t           L1_Centrality_ext0_100_HFplusORminusTH0;
   Int_t           L1_Centrality_ext0_100_HFplusORminusTH0_Prescl;
   Int_t           L1_Centrality_ext0_100_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext0_100_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_Centrality_ext0_10_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext0_10_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_Centrality_ext0_5_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext0_5_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_Centrality_ext30_100_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext30_100_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_Centrality_ext30_50_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext30_50_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_Centrality_ext50_100_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext50_100_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_Centrality_ext70_100_MinimumumBiasHF1_AND;
   Int_t           L1_Centrality_ext70_100_MinimumumBiasHF1_AND_Prescl;
   Int_t           L1_DoubleEG10;
   Int_t           L1_DoubleEG10_Prescl;
   Int_t           L1_DoubleEG2_BptxAND;
   Int_t           L1_DoubleEG2_BptxAND_Prescl;
   Int_t           L1_DoubleEG2_NotMinimumBiasHF2_AND;
   Int_t           L1_DoubleEG2_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_DoubleEG2_NotZdc_AND_BptxAND;
   Int_t           L1_DoubleEG2_NotZdc_AND_BptxAND_Prescl;
   Int_t           L1_DoubleEG5_BptxAND;
   Int_t           L1_DoubleEG5_BptxAND_Prescl;
   Int_t           L1_DoubleEG8_BptxAND;
   Int_t           L1_DoubleEG8_BptxAND_Prescl;
   Int_t           L1_DoubleEG_13_7;
   Int_t           L1_DoubleEG_13_7_Prescl;
   Int_t           L1_DoubleMu0_BptxAND;
   Int_t           L1_DoubleMu0_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_HFplusANDminusTH0_BptxAND;
   Int_t           L1_DoubleMu0_HFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND;
   Int_t           L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_Prescl;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_DoubleMu10_BptxAND;
   Int_t           L1_DoubleMu10_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND;
   Int_t           L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_BptxAND;
   Int_t           L1_DoubleMuOpen_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF1_AND;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF1_AND_Prescl;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF2_AND;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_DoubleMuOpen_NotZdc_AND_BptxAND;
   Int_t           L1_DoubleMuOpen_NotZdc_AND_BptxAND_Prescl;
   Int_t           L1_EG2_NotMinimumBiasHF2_AND;
   Int_t           L1_EG2_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_EG5_NotMinimumBiasHF2_AND;
   Int_t           L1_EG5_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_HF_2reg_plusANDminusTH0;
   Int_t           L1_HF_2reg_plusANDminusTH0_Prescl;
   Int_t           L1_HF_2reg_plusANDminusTH1;
   Int_t           L1_HF_2reg_plusANDminusTH1_Prescl;
   Int_t           L1_HFplusANDminusTH0;
   Int_t           L1_HFplusANDminusTH0_Prescl;
   Int_t           L1_HFplusANDminusTH1;
   Int_t           L1_HFplusANDminusTH1_Prescl;
   Int_t           L1_HFplusORminusTH0;
   Int_t           L1_HFplusORminusTH0_Prescl;
   Int_t           L1_HFplusORminusTH1;
   Int_t           L1_HFplusORminusTH1_Prescl;
   Int_t           L1_MinimumBiasHF1_AND;
   Int_t           L1_MinimumBiasHF1_AND_Prescl;
   Int_t           L1_MinimumBiasHF1_OR;
   Int_t           L1_MinimumBiasHF1_OR_Prescl;
   Int_t           L1_MinimumBiasHF1_OR_NotInUse;
   Int_t           L1_MinimumBiasHF1_OR_NotInUse_Prescl;
   Int_t           L1_MinimumBiasHF1_XOR;
   Int_t           L1_MinimumBiasHF1_XOR_Prescl;
   Int_t           L1_MinimumBiasHF2_AND;
   Int_t           L1_MinimumBiasHF2_AND_Prescl;
   Int_t           L1_MinimumBiasHF2_OR;
   Int_t           L1_MinimumBiasHF2_OR_Prescl;
   Int_t           L1_MuOpen_NotMinimumBiasHF1_AND;
   Int_t           L1_MuOpen_NotMinimumBiasHF1_AND_Prescl;
   Int_t           L1_MuOpen_NotMinimumBiasHF2_AND;
   Int_t           L1_MuOpen_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_MuOpen_NotZdc_AND_BptxAND;
   Int_t           L1_MuOpen_NotZdc_AND_BptxAND_Prescl;
   Int_t           L1_NotHFplusANDminusTH0_BptxAND;
   Int_t           L1_NotHFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_NotMinimumBiasHF1_OR;
   Int_t           L1_NotMinimumBiasHF1_OR_Prescl;
   Int_t           L1_NotMinimumBiasHF2_AND;
   Int_t           L1_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_NotZdcOR_BptxAND;
   Int_t           L1_NotZdcOR_BptxAND_Prescl;
   Int_t           L1_SingleEG12_BptxAND;
   Int_t           L1_SingleEG12_BptxAND_Prescl;
   Int_t           L1_SingleEG15_BptxAND;
   Int_t           L1_SingleEG15_BptxAND_Prescl;
   Int_t           L1_SingleEG21_BptxAND;
   Int_t           L1_SingleEG21_BptxAND_Prescl;
   Int_t           L1_SingleEG21_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleEG21_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleEG21_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleEG21_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleEG2_NotZDC_AND_BptxAND;
   Int_t           L1_SingleEG2_NotZDC_AND_BptxAND_Prescl;
   Int_t           L1_SingleEG30_BptxAND;
   Int_t           L1_SingleEG30_BptxAND_Prescl;
   Int_t           L1_SingleEG3_BptxAND;
   Int_t           L1_SingleEG3_BptxAND_Prescl;
   Int_t           L1_SingleEG3_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleEG3_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleEG3_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleEG3_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleEG5;
   Int_t           L1_SingleEG5_Prescl;
   Int_t           L1_SingleEG5_BptxAND;
   Int_t           L1_SingleEG5_BptxAND_Prescl;
   Int_t           L1_SingleEG5_NotZdc_AND_BptxAND;
   Int_t           L1_SingleEG5_NotZdc_AND_BptxAND_Prescl;
   Int_t           L1_SingleEG7_BptxAND;
   Int_t           L1_SingleEG7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleEG7_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleEG7_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleEG7_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleIsoEG3_BptxAND;
   Int_t           L1_SingleIsoEG3_BptxAND_Prescl;
   Int_t           L1_SingleIsoEG7_BptxAND;
   Int_t           L1_SingleIsoEG7_BptxAND_Prescl;
   Int_t           L1_SingleMu12_BptxAND;
   Int_t           L1_SingleMu12_BptxAND_Prescl;
   Int_t           L1_SingleMu12_HFplusANDminusTH0_BptxAND;
   Int_t           L1_SingleMu12_HFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_SingleMu12_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu12_SingleEG7;
   Int_t           L1_SingleMu12_SingleEG7_Prescl;
   Int_t           L1_SingleMu16_BptxAND;
   Int_t           L1_SingleMu16_BptxAND_Prescl;
   Int_t           L1_SingleMu16_HFplusANDminusTH0_BptxAND;
   Int_t           L1_SingleMu16_HFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_SingleMu16_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu3_HFplusANDminusTH0_BptxAND;
   Int_t           L1_SingleMu3_HFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_SingleMu3_MinimumBiasHF1_AND;
   Int_t           L1_SingleMu3_MinimumBiasHF1_AND_Prescl;
   Int_t           L1_SingleMu3_SingleCenJet28;
   Int_t           L1_SingleMu3_SingleCenJet28_Prescl;
   Int_t           L1_SingleMu3_SingleCenJet32;
   Int_t           L1_SingleMu3_SingleCenJet32_Prescl;
   Int_t           L1_SingleMu3_SingleCenJet40;
   Int_t           L1_SingleMu3_SingleCenJet40_Prescl;
   Int_t           L1_SingleMu3_SingleEG12;
   Int_t           L1_SingleMu3_SingleEG12_Prescl;
   Int_t           L1_SingleMu3_SingleEG20;
   Int_t           L1_SingleMu3_SingleEG20_Prescl;
   Int_t           L1_SingleMu5_HFplusANDminusTH0_BptxAND;
   Int_t           L1_SingleMu5_HFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_SingleMu5_MinimumBiasHF1_AND;
   Int_t           L1_SingleMu5_MinimumBiasHF1_AND_Prescl;
   Int_t           L1_SingleMu5_SingleEG20;
   Int_t           L1_SingleMu5_SingleEG20_Prescl;
   Int_t           L1_SingleMu7_HFplusANDminusTH0_BptxAND;
   Int_t           L1_SingleMu7_HFplusANDminusTH0_BptxAND_Prescl;
   Int_t           L1_SingleMu7_MinimumBiasHF1_AND;
   Int_t           L1_SingleMu7_MinimumBiasHF1_AND_Prescl;
   Int_t           L1_SingleMu7_SingleEG12;
   Int_t           L1_SingleMu7_SingleEG12_Prescl;
   Int_t           L1_SingleMuOpen;
   Int_t           L1_SingleMuOpen_Prescl;
   Int_t           L1_SingleMuOpen_BptxAND;
   Int_t           L1_SingleMuOpen_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet16_BptxAND;
   Int_t           L1_SingleS1Jet16_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet16_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleS1Jet16_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet16_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleS1Jet16_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet28_BptxAND;
   Int_t           L1_SingleS1Jet28_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet28_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleS1Jet28_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet28_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleS1Jet28_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet32_BptxAND;
   Int_t           L1_SingleS1Jet32_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet32_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleS1Jet32_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet32_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleS1Jet32_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet36_BptxAND;
   Int_t           L1_SingleS1Jet36_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet40_BptxAND;
   Int_t           L1_SingleS1Jet40_BptxAND_Prescl;
   Int_t           L1_SingleJet44_BptxAND;
   Int_t           L1_SingleJet44_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet44_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleS1Jet44_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet44_Centrality_ext50_100_BptxAND;
   Int_t           L1_SingleS1Jet44_Centrality_ext50_100_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet48_BptxAND;
   Int_t           L1_SingleS1Jet48_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet52_BptxAND;
   Int_t           L1_SingleS1Jet52_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet56_BptxAND;
   Int_t           L1_SingleS1Jet56_BptxAND_Prescl;
   Int_t           L1_SingleS1Jet64_BptxAND;
   Int_t           L1_SingleS1Jet64_BptxAND_Prescl;
   Int_t           L1_SingleS1JetC20_NotBptxOR;
   Int_t           L1_SingleS1JetC20_NotBptxOR_Prescl;
   Int_t           L1_SingleS1JetC32_NotBptxOR;
   Int_t           L1_SingleS1JetC32_NotBptxOR_Prescl;
   Int_t           L1_SingleTrack12_BptxAND;
   Int_t           L1_SingleTrack12_BptxAND_Prescl;
   Int_t           L1_SingleTrack12_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleTrack12_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleTrack16_BptxAND;
   Int_t           L1_SingleTrack16_BptxAND_Prescl;
   Int_t           L1_SingleTrack16_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleTrack16_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleTrack20_BptxAND;
   Int_t           L1_SingleTrack20_BptxAND_Prescl;
   Int_t           L1_SingleTrack20_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleTrack20_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleTrack24_BptxAND;
   Int_t           L1_SingleTrack24_BptxAND_Prescl;
   Int_t           L1_SingleTrack24_Centrality_ext30_100_BptxAND;
   Int_t           L1_SingleTrack24_Centrality_ext30_100_BptxAND_Prescl;
   Int_t           L1_SingleTrack28_BptxAND;
   Int_t           L1_SingleTrack28_BptxAND_Prescl;
   Int_t           L1_TOTEM_1;
   Int_t           L1_TOTEM_1_Prescl;
   Int_t           L1_TOTEM_2;
   Int_t           L1_TOTEM_2_Prescl;
   Int_t           L1_ZdcOR_BptxAND;
   Int_t           L1_ZdcOR_BptxAND_Prescl;
   Int_t           L1_ZdcXOR_BptxAND;
   Int_t           L1_ZdcXOR_BptxAND_Prescl;
   Int_t           L1_ZeroBias;
   Int_t           L1_ZeroBias_Prescl;
   Int_t           L1Tech_BPTX_PreBPTX_v0;
   Int_t           L1Tech_BPTX_PreBPTX_v0_Prescl;
   Int_t           L1Tech_BPTX_minus_v0;
   Int_t           L1Tech_BPTX_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_minus_AND_not_plus_v0;
   Int_t           L1Tech_BPTX_minus_AND_not_plus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_v0;
   Int_t           L1Tech_BPTX_plus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_AND_NOT_minus_v0;
   Int_t           L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_AND_minus_v0;
   Int_t           L1Tech_BPTX_plus_AND_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_AND_minus_instance1_v0;
   Int_t           L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_OR_minus_v0;
   Int_t           L1Tech_BPTX_plus_OR_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_quiet_v0;
   Int_t           L1Tech_BPTX_quiet_v0_Prescl;
   Int_t           L1Tech_BRIL_bit28;
   Int_t           L1Tech_BRIL_bit28_Prescl;
   Int_t           L1Tech_BRIL_bit29;
   Int_t           L1Tech_BRIL_bit29_Prescl;
   Int_t           L1Tech_BRIL_bit30;
   Int_t           L1Tech_BRIL_bit30_Prescl;
   Int_t           L1Tech_BRIL_bit31;
   Int_t           L1Tech_BRIL_bit31_Prescl;
   Int_t           L1Tech_BRIL_bit32;
   Int_t           L1Tech_BRIL_bit32_Prescl;
   Int_t           L1Tech_BRIL_bit33;
   Int_t           L1Tech_BRIL_bit33_Prescl;
   Int_t           L1Tech_BRIL_bit34;
   Int_t           L1Tech_BRIL_bit34_Prescl;
   Int_t           L1Tech_BRIL_bit35;
   Int_t           L1Tech_BRIL_bit35_Prescl;
   Int_t           L1Tech_BRIL_bit36;
   Int_t           L1Tech_BRIL_bit36_Prescl;
   Int_t           L1Tech_BRIL_bit37;
   Int_t           L1Tech_BRIL_bit37_Prescl;
   Int_t           L1Tech_BRIL_bit38;
   Int_t           L1Tech_BRIL_bit38_Prescl;
   Int_t           L1Tech_BRIL_bit39;
   Int_t           L1Tech_BRIL_bit39_Prescl;
   Int_t           L1Tech_BRIL_bit40;
   Int_t           L1Tech_BRIL_bit40_Prescl;
   Int_t           L1Tech_BRIL_bit41;
   Int_t           L1Tech_BRIL_bit41_Prescl;
   Int_t           L1Tech_BRIL_bit42;
   Int_t           L1Tech_BRIL_bit42_Prescl;
   Int_t           L1Tech_BRIL_bit43;
   Int_t           L1Tech_BRIL_bit43_Prescl;
   Int_t           L1Tech_CASTOR_Gap_v0;
   Int_t           L1Tech_CASTOR_Gap_v0_Prescl;
   Int_t           L1Tech_CASTOR_HaloMuon_v0;
   Int_t           L1Tech_CASTOR_HaloMuon_v0_Prescl;
   Int_t           L1Tech_CASTOR_HighJet_v0;
   Int_t           L1Tech_CASTOR_HighJet_v0_Prescl;
   Int_t           L1Tech_CASTOR_MediumJet_v0;
   Int_t           L1Tech_CASTOR_MediumJet_v0_Prescl;
   Int_t           L1Tech_DT_GlobalOR_v0;
   Int_t           L1Tech_DT_GlobalOR_v0_Prescl;
   Int_t           L1Tech_HCAL_HBHE_totalOR_v0;
   Int_t           L1Tech_HCAL_HBHE_totalOR_v0_Prescl;
   Int_t           L1Tech_HCAL_HF_MMP_or_MPP_v1;
   Int_t           L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl;
   Int_t           L1Tech_HCAL_HF_coincidence_PM_v2;
   Int_t           L1Tech_HCAL_HF_coincidence_PM_v2_Prescl;
   Int_t           L1Tech_HCAL_HF_single_channel_v0;
   Int_t           L1Tech_HCAL_HF_single_channel_v0_Prescl;
   Int_t           L1Tech_HCAL_HO_totalOR_v0;
   Int_t           L1Tech_HCAL_HO_totalOR_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBplus1_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBplus2_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_barrel_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_pointing_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl;
   Int_t           L1Tech_TOTEM_0;
   Int_t           L1Tech_TOTEM_0_Prescl;
   Int_t           L1Tech_TOTEM_1;
   Int_t           L1Tech_TOTEM_1_Prescl;
   Int_t           L1Tech_TOTEM_2;
   Int_t           L1Tech_TOTEM_2_Prescl;
   Int_t           L1Tech_TOTEM_3;
   Int_t           L1Tech_TOTEM_3_Prescl;
   Int_t           L1Tech_ZDC_minus;
   Int_t           L1Tech_ZDC_minus_Prescl;
   Int_t           L1Tech_ZDC_plus;
   Int_t           L1Tech_ZDC_plus_Prescl;

   // List of branches
   TBranch        *b_NL1IsolEm;   //!
   TBranch        *b_L1IsolEmEt;   //!
   TBranch        *b_L1IsolEmE;   //!
   TBranch        *b_L1IsolEmEta;   //!
   TBranch        *b_L1IsolEmPhi;   //!
   TBranch        *b_NL1NIsolEm;   //!
   TBranch        *b_L1NIsolEmEt;   //!
   TBranch        *b_L1NIsolEmE;   //!
   TBranch        *b_L1NIsolEmEta;   //!
   TBranch        *b_L1NIsolEmPhi;   //!
   TBranch        *b_NL1Mu;   //!
   TBranch        *b_L1MuPt;   //!
   TBranch        *b_L1MuE;   //!
   TBranch        *b_L1MuEta;   //!
   TBranch        *b_L1MuPhi;   //!
   TBranch        *b_L1MuIsol;   //!
   TBranch        *b_L1MuMip;   //!
   TBranch        *b_L1MuFor;   //!
   TBranch        *b_L1MuRPC;   //!
   TBranch        *b_L1MuQal;   //!
   TBranch        *b_L1MuChg;   //!
   TBranch        *b_NL1CenJet;   //!
   TBranch        *b_L1CenJetEt;   //!
   TBranch        *b_L1CenJetE;   //!
   TBranch        *b_L1CenJetEta;   //!
   TBranch        *b_L1CenJetPhi;   //!
   TBranch        *b_NL1ForJet;   //!
   TBranch        *b_L1ForJetEt;   //!
   TBranch        *b_L1ForJetE;   //!
   TBranch        *b_L1ForJetEta;   //!
   TBranch        *b_L1ForJetPhi;   //!
   TBranch        *b_NL1Tau;   //!
   TBranch        *b_L1TauEt;   //!
   TBranch        *b_L1TauE;   //!
   TBranch        *b_L1TauEta;   //!
   TBranch        *b_L1TauPhi;   //!
   TBranch        *b_L1Met;   //!
   TBranch        *b_L1MetPhi;   //!
   TBranch        *b_L1EtTot;   //!
   TBranch        *b_L1Mht;   //!
   TBranch        *b_L1MhtPhi;   //!
   TBranch        *b_L1EtHad;   //!
   TBranch        *b_L1HfRing1EtSumPositiveEta;   //!
   TBranch        *b_L1HfRing2EtSumPositiveEta;   //!
   TBranch        *b_L1HfRing1EtSumNegativeEta;   //!
   TBranch        *b_L1HfRing2EtSumNegativeEta;   //!
   TBranch        *b_L1HfTowerCountPositiveEtaRing1;   //!
   TBranch        *b_L1HfTowerCountNegativeEtaRing1;   //!
   TBranch        *b_L1HfTowerCountPositiveEtaRing2;   //!
   TBranch        *b_L1HfTowerCountNegativeEtaRing2;   //!
   TBranch        *b_Event;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_Orbit;   //!
   TBranch        *b_AvgInstDelLumi;   //!
   TBranch        *b_digitisation_step;   //!
   TBranch        *b_digitisation_step_Prescl;   //!
   TBranch        *b_L1simulation_step;   //!
   TBranch        *b_L1simulation_step_Prescl;   //!
   TBranch        *b_digi2raw_step;   //!
   TBranch        *b_digi2raw_step_Prescl;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLTriggerFirstPath_Prescl;   //!
   TBranch        *b_DST_Physics_v1;   //!
   TBranch        *b_DST_Physics_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet110_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet110_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet120_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet120_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet150_Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet150_Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloDJet60_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloDJet60_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloDJet80_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloDJet80_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt50_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt50_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt60_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt60_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt70_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt70_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1_Prescl;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1;   //!
   TBranch        *b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton50_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton50_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton60_Eta1p5_v1;   //!
   TBranch        *b_HLT_HISinglePhoton60_Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta2p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton50_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton50_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton60_Eta3p1_v1;   //!
   TBranch        *b_HLT_HISinglePhoton60_Eta3p1_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1;   //!
   TBranch        *b_HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1_Prescl;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1_Prescl;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1_Prescl;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1;   //!
   TBranch        *b_HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1;   //!
   TBranch        *b_HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIUCC100_v1;   //!
   TBranch        *b_HLT_HIUCC100_v1_Prescl;   //!
   TBranch        *b_HLT_HIUCC020_v1;   //!
   TBranch        *b_HLT_HIUCC020_v1_Prescl;   //!
   TBranch        *b_HLT_HIQ2Bottom005_Centrality1030_v1;   //!
   TBranch        *b_HLT_HIQ2Bottom005_Centrality1030_v1_Prescl;   //!
   TBranch        *b_HLT_HIQ2Top005_Centrality1030_v1;   //!
   TBranch        *b_HLT_HIQ2Top005_Centrality1030_v1_Prescl;   //!
   TBranch        *b_HLT_HIQ2Bottom005_Centrality3050_v1;   //!
   TBranch        *b_HLT_HIQ2Bottom005_Centrality3050_v1_Prescl;   //!
   TBranch        *b_HLT_HIQ2Top005_Centrality3050_v1;   //!
   TBranch        *b_HLT_HIQ2Top005_Centrality3050_v1_Prescl;   //!
   TBranch        *b_HLT_HIQ2Bottom005_Centrality5070_v1;   //!
   TBranch        *b_HLT_HIQ2Bottom005_Centrality5070_v1_Prescl;   //!
   TBranch        *b_HLT_HIQ2Top005_Centrality5070_v1;   //!
   TBranch        *b_HLT_HIQ2Top005_Centrality5070_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1;   //!
   TBranch        *b_HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack12_L1Centrality010_v1;   //!
   TBranch        *b_HLT_HIFullTrack12_L1Centrality010_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack12_L1Centrality30100_v1;   //!
   TBranch        *b_HLT_HIFullTrack12_L1Centrality30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1;   //!
   TBranch        *b_HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack18_L1Centrality010_v1;   //!
   TBranch        *b_HLT_HIFullTrack18_L1Centrality010_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack18_L1Centrality30100_v1;   //!
   TBranch        *b_HLT_HIFullTrack18_L1Centrality30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack24_v1;   //!
   TBranch        *b_HLT_HIFullTrack24_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack24_L1Centrality30100_v1;   //!
   TBranch        *b_HLT_HIFullTrack24_L1Centrality30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack34_v1;   //!
   TBranch        *b_HLT_HIFullTrack34_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack34_L1Centrality30100_v1;   //!
   TBranch        *b_HLT_HIFullTrack34_L1Centrality30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack45_v1;   //!
   TBranch        *b_HLT_HIFullTrack45_v1_Prescl;   //!
   TBranch        *b_HLT_HIFullTrack45_L1Centrality30100_v1;   //!
   TBranch        *b_HLT_HIFullTrack45_L1Centrality30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF0_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu10_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu10_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_NHitQ_v2;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_NHitQ_v2_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_NHitQ_2HF_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_NHitQ_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_NHitQ_2HF0_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_NHitQ_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3_NHitQ10_2HF_v1;   //!
   TBranch        *b_HLT_HIL2Mu3_NHitQ10_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3_NHitQ10_2HF0_v1;   //!
   TBranch        *b_HLT_HIL2Mu3_NHitQ10_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3_NHitQ15_2HF_v1;   //!
   TBranch        *b_HLT_HIL3Mu3_NHitQ15_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3_NHitQ15_2HF0_v1;   //!
   TBranch        *b_HLT_HIL3Mu3_NHitQ15_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu5_NHitQ10_2HF_v1;   //!
   TBranch        *b_HLT_HIL2Mu5_NHitQ10_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu5_NHitQ10_2HF0_v1;   //!
   TBranch        *b_HLT_HIL2Mu5_NHitQ10_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5_NHitQ15_2HF_v1;   //!
   TBranch        *b_HLT_HIL3Mu5_NHitQ15_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5_NHitQ15_2HF0_v1;   //!
   TBranch        *b_HLT_HIL3Mu5_NHitQ15_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu7_NHitQ10_2HF_v1;   //!
   TBranch        *b_HLT_HIL2Mu7_NHitQ10_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu7_NHitQ10_2HF0_v1;   //!
   TBranch        *b_HLT_HIL2Mu7_NHitQ10_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu7_NHitQ15_2HF_v1;   //!
   TBranch        *b_HLT_HIL3Mu7_NHitQ15_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu7_NHitQ15_2HF0_v1;   //!
   TBranch        *b_HLT_HIL3Mu7_NHitQ15_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu15_v2;   //!
   TBranch        *b_HLT_HIL2Mu15_v2_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu15_2HF_v1;   //!
   TBranch        *b_HLT_HIL2Mu15_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu15_2HF0_v1;   //!
   TBranch        *b_HLT_HIL2Mu15_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu15_v1;   //!
   TBranch        *b_HLT_HIL3Mu15_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu15_2HF_v1;   //!
   TBranch        *b_HLT_HIL3Mu15_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu15_2HF0_v1;   //!
   TBranch        *b_HLT_HIL3Mu15_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu20_v1;   //!
   TBranch        *b_HLT_HIL2Mu20_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu20_2HF_v1;   //!
   TBranch        *b_HLT_HIL2Mu20_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu20_2HF0_v1;   //!
   TBranch        *b_HLT_HIL2Mu20_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu20_v1;   //!
   TBranch        *b_HLT_HIL3Mu20_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu20_2HF_v1;   //!
   TBranch        *b_HLT_HIL3Mu20_2HF_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu20_2HF0_v1;   //!
   TBranch        *b_HLT_HIL3Mu20_2HF0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF_Cent30100_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF_Cent30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF0_Cent30100_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_2HF0_Cent30100_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_Cent30_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_Cent30_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_Cent30_NHitQ_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_Cent30_NHitQ_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_Cent30_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_Cent30_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_OS_m7to14_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_OS_m7to14_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1SingleMuOpenNotHF2_v1;   //!
   TBranch        *b_HLT_HIUPCL1SingleMuOpenNotHF2_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHF2_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHF2_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1SingleEG2NotHF2_v1;   //!
   TBranch        *b_HLT_HIUPCL1SingleEG2NotHF2_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleEG2NotHF2_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleEG2NotHF2_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1SingleEG5NotHF2_v1;   //!
   TBranch        *b_HLT_HIUPCL1SingleEG5NotHF2_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHF1_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHF1_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleEG2NotZDCAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleEG2NotZDCAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1EG2NotZDCAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1EG2NotZDCAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1MuOpenNotZDCAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1MuOpenNotZDCAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1CastorMediumJet_v1;   //!
   TBranch        *b_HLT_HIL1CastorMediumJet_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1CastorMediumJetAK4CaloJet20_v1;   //!
   TBranch        *b_HLT_HIL1CastorMediumJetAK4CaloJet20_v1_Prescl;   //!
   TBranch        *b_HLT_HICastorMediumJetPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HICastorMediumJetPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotMinimumBiasHF2_AND_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotMinimumBiasHF2_AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1ZdcOR_BptxAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1ZdcOR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1ZdcXOR_BptxAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1ZdcXOR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotZdcOR_BptxAND_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotZdcOR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIZeroBias_v1;   //!
   TBranch        *b_HLT_HIZeroBias_v1_Prescl;   //!
   TBranch        *b_HLT_HICentralityVeto_v1;   //!
   TBranch        *b_HLT_HICentralityVeto_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Tech5_BPTX_PlusOnly_v1;   //!
   TBranch        *b_HLT_HIL1Tech5_BPTX_PlusOnly_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Tech6_BPTX_MinusOnly_v1;   //!
   TBranch        *b_HLT_HIL1Tech6_BPTX_MinusOnly_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Tech7_NoBPTX_v1;   //!
   TBranch        *b_HLT_HIL1Tech7_NoBPTX_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF1OR_v1;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF1OR_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF2OR_v1;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF2OR_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF1AND_v1;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF1AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF2AND_v1;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF2AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIZeroBiasPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIZeroBiasPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1;   //!
   TBranch        *b_HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1;   //!
   TBranch        *b_HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1;   //!
   TBranch        *b_HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_HIPhysics_v1;   //!
   TBranch        *b_HLT_HIPhysics_v1_Prescl;   //!
   TBranch        *b_HLT_HIRandom_v1;   //!
   TBranch        *b_HLT_HIRandom_v1_Prescl;   //!
   TBranch        *b_HLT_EcalCalibration_v1;   //!
   TBranch        *b_HLT_EcalCalibration_v1_Prescl;   //!
   TBranch        *b_HLT_HcalCalibration_v1;   //!
   TBranch        *b_HLT_HcalCalibration_v1_Prescl;   //!
   TBranch        *b_AlCa_EcalPhiSymForHI_v1;   //!
   TBranch        *b_AlCa_EcalPhiSymForHI_v1_Prescl;   //!
   TBranch        *b_AlCa_RPCMuonNoTriggersForHI_v1;   //!
   TBranch        *b_AlCa_RPCMuonNoTriggersForHI_v1_Prescl;   //!
   TBranch        *b_AlCa_RPCMuonNoHitsForHI_v1;   //!
   TBranch        *b_AlCa_RPCMuonNoHitsForHI_v1_Prescl;   //!
   TBranch        *b_AlCa_RPCMuonNormalisationForHI_v1;   //!
   TBranch        *b_AlCa_RPCMuonNormalisationForHI_v1_Prescl;   //!
   TBranch        *b_AlCa_LumiPixels_Random_v1;   //!
   TBranch        *b_AlCa_LumiPixels_Random_v1_Prescl;   //!
   TBranch        *b_AlCa_LumiPixels_ZeroBias_v2;   //!
   TBranch        *b_AlCa_LumiPixels_ZeroBias_v2_Prescl;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_HLTriggerFinalPath_Prescl;   //!
   TBranch        *b_raw2digi_step;   //!
   TBranch        *b_raw2digi_step_Prescl;   //!
   TBranch        *b_L1Reco_step;   //!
   TBranch        *b_L1Reco_step_Prescl;   //!
   TBranch        *b_L1_BptxMinus_NotBptxPlus;   //!
   TBranch        *b_L1_BptxMinus_NotBptxPlus_Prescl;   //!
   TBranch        *b_L1_BptxPlusORMinus;   //!
   TBranch        *b_L1_BptxPlusORMinus_Prescl;   //!
   TBranch        *b_L1_BptxPlus_NotBptxMinus;   //!
   TBranch        *b_L1_BptxPlus_NotBptxMinus_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMuon_BptxAND;   //!
   TBranch        *b_L1_CastorMuon_BptxAND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext0_100_HFplusORminusTH0;   //!
   TBranch        *b_L1_Centrality_ext0_100_HFplusORminusTH0_Prescl;   //!
   TBranch        *b_L1_Centrality_ext0_100_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext0_100_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext0_10_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext0_10_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext0_5_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext0_5_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext30_100_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext30_100_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext30_50_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext30_50_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext50_100_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext50_100_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_Centrality_ext70_100_MinimumumBiasHF1_AND;   //!
   TBranch        *b_L1_Centrality_ext70_100_MinimumumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_DoubleEG10;   //!
   TBranch        *b_L1_DoubleEG10_Prescl;   //!
   TBranch        *b_L1_DoubleEG2_BptxAND;   //!
   TBranch        *b_L1_DoubleEG2_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG2_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_DoubleEG2_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_DoubleEG2_NotZdc_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleEG2_NotZdc_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG5_BptxAND;   //!
   TBranch        *b_L1_DoubleEG5_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG8_BptxAND;   //!
   TBranch        *b_L1_DoubleEG8_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG_13_7;   //!
   TBranch        *b_L1_DoubleEG_13_7_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_HFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_HFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu10_BptxAND;   //!
   TBranch        *b_L1_DoubleMu10_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF1_AND;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_NotZdc_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpen_NotZdc_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_EG2_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_EG2_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_EG5_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_EG5_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_HF_2reg_plusANDminusTH0;   //!
   TBranch        *b_L1_HF_2reg_plusANDminusTH0_Prescl;   //!
   TBranch        *b_L1_HF_2reg_plusANDminusTH1;   //!
   TBranch        *b_L1_HF_2reg_plusANDminusTH1_Prescl;   //!
   TBranch        *b_L1_HFplusANDminusTH0;   //!
   TBranch        *b_L1_HFplusANDminusTH0_Prescl;   //!
   TBranch        *b_L1_HFplusANDminusTH1;   //!
   TBranch        *b_L1_HFplusANDminusTH1_Prescl;   //!
   TBranch        *b_L1_HFplusORminusTH0;   //!
   TBranch        *b_L1_HFplusORminusTH0_Prescl;   //!
   TBranch        *b_L1_HFplusORminusTH1;   //!
   TBranch        *b_L1_HFplusORminusTH1_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR_NotInUse;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR_NotInUse_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_XOR;   //!
   TBranch        *b_L1_MinimumBiasHF1_XOR_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF2_AND;   //!
   TBranch        *b_L1_MinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF2_OR;   //!
   TBranch        *b_L1_MinimumBiasHF2_OR_Prescl;   //!
   TBranch        *b_L1_MuOpen_NotMinimumBiasHF1_AND;   //!
   TBranch        *b_L1_MuOpen_NotMinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_MuOpen_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_MuOpen_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_MuOpen_NotZdc_AND_BptxAND;   //!
   TBranch        *b_L1_MuOpen_NotZdc_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotHFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_NotHFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_OR;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_OR_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_NotZdcOR_BptxAND;   //!
   TBranch        *b_L1_NotZdcOR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG21_BptxAND;   //!
   TBranch        *b_L1_SingleEG21_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG21_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleEG21_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG21_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleEG21_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG2_NotZDC_AND_BptxAND;   //!
   TBranch        *b_L1_SingleEG2_NotZDC_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG30_BptxAND;   //!
   TBranch        *b_L1_SingleEG30_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG3_BptxAND;   //!
   TBranch        *b_L1_SingleEG3_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG3_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleEG3_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG3_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleEG3_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5;   //!
   TBranch        *b_L1_SingleEG5_Prescl;   //!
   TBranch        *b_L1_SingleEG5_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5_NotZdc_AND_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_NotZdc_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG3_BptxAND;   //!
   TBranch        *b_L1_SingleIsoEG3_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG7_BptxAND;   //!
   TBranch        *b_L1_SingleIsoEG7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu12_BptxAND;   //!
   TBranch        *b_L1_SingleMu12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu12_HFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_SingleMu12_HFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu12_SingleEG7;   //!
   TBranch        *b_L1_SingleMu12_SingleEG7_Prescl;   //!
   TBranch        *b_L1_SingleMu16_BptxAND;   //!
   TBranch        *b_L1_SingleMu16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu16_HFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_SingleMu16_HFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_HFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_HFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_MinimumBiasHF1_AND;   //!
   TBranch        *b_L1_SingleMu3_MinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleCenJet28;   //!
   TBranch        *b_L1_SingleMu3_SingleCenJet28_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleCenJet32;   //!
   TBranch        *b_L1_SingleMu3_SingleCenJet32_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleCenJet40;   //!
   TBranch        *b_L1_SingleMu3_SingleCenJet40_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleEG12;   //!
   TBranch        *b_L1_SingleMu3_SingleEG12_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleEG20;   //!
   TBranch        *b_L1_SingleMu3_SingleEG20_Prescl;   //!
   TBranch        *b_L1_SingleMu5_HFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_SingleMu5_HFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu5_MinimumBiasHF1_AND;   //!
   TBranch        *b_L1_SingleMu5_MinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_SingleMu5_SingleEG20;   //!
   TBranch        *b_L1_SingleMu5_SingleEG20_Prescl;   //!
   TBranch        *b_L1_SingleMu7_HFplusANDminusTH0_BptxAND;   //!
   TBranch        *b_L1_SingleMu7_HFplusANDminusTH0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu7_MinimumBiasHF1_AND;   //!
   TBranch        *b_L1_SingleMu7_MinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_SingleMu7_SingleEG12;   //!
   TBranch        *b_L1_SingleMu7_SingleEG12_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen;   //!
   TBranch        *b_L1_SingleMuOpen_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet16_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet16_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet16_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet16_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet16_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet28_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet28_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet28_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet28_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet28_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet28_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet32_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet32_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet32_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet32_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet32_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet32_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet36_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet36_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet40_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet40_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet44_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet44_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet44_Centrality_ext50_100_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet44_Centrality_ext50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet48_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet48_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet52_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet52_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet56_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet56_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1Jet64_BptxAND;   //!
   TBranch        *b_L1_SingleS1Jet64_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleS1JetC20_NotBptxOR;   //!
   TBranch        *b_L1_SingleS1JetC20_NotBptxOR_Prescl;   //!
   TBranch        *b_L1_SingleS1JetC32_NotBptxOR;   //!
   TBranch        *b_L1_SingleS1JetC32_NotBptxOR_Prescl;   //!
   TBranch        *b_L1_SingleTrack12_BptxAND;   //!
   TBranch        *b_L1_SingleTrack12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack12_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleTrack12_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack16_BptxAND;   //!
   TBranch        *b_L1_SingleTrack16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack16_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleTrack16_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack20_BptxAND;   //!
   TBranch        *b_L1_SingleTrack20_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack20_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleTrack20_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack24_BptxAND;   //!
   TBranch        *b_L1_SingleTrack24_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack24_Centrality_ext30_100_BptxAND;   //!
   TBranch        *b_L1_SingleTrack24_Centrality_ext30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack28_BptxAND;   //!
   TBranch        *b_L1_SingleTrack28_BptxAND_Prescl;   //!
   TBranch        *b_L1_TOTEM_1;   //!
   TBranch        *b_L1_TOTEM_1_Prescl;   //!
   TBranch        *b_L1_TOTEM_2;   //!
   TBranch        *b_L1_TOTEM_2_Prescl;   //!
   TBranch        *b_L1_ZdcOR_BptxAND;   //!
   TBranch        *b_L1_ZdcOR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZdcXOR_BptxAND;   //!
   TBranch        *b_L1_ZdcXOR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZeroBias;   //!
   TBranch        *b_L1_ZeroBias_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_PreBPTX_v0;   //!
   TBranch        *b_L1Tech_BPTX_PreBPTX_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_minus_AND_not_plus_v0;   //!
   TBranch        *b_L1Tech_BPTX_minus_AND_not_plus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_NOT_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_instance1_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_OR_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_OR_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_quiet_v0;   //!
   TBranch        *b_L1Tech_BPTX_quiet_v0_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit28;   //!
   TBranch        *b_L1Tech_BRIL_bit28_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit29;   //!
   TBranch        *b_L1Tech_BRIL_bit29_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit30;   //!
   TBranch        *b_L1Tech_BRIL_bit30_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit31;   //!
   TBranch        *b_L1Tech_BRIL_bit31_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit32;   //!
   TBranch        *b_L1Tech_BRIL_bit32_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit33;   //!
   TBranch        *b_L1Tech_BRIL_bit33_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit34;   //!
   TBranch        *b_L1Tech_BRIL_bit34_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit35;   //!
   TBranch        *b_L1Tech_BRIL_bit35_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit36;   //!
   TBranch        *b_L1Tech_BRIL_bit36_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit37;   //!
   TBranch        *b_L1Tech_BRIL_bit37_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit38;   //!
   TBranch        *b_L1Tech_BRIL_bit38_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit39;   //!
   TBranch        *b_L1Tech_BRIL_bit39_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit40;   //!
   TBranch        *b_L1Tech_BRIL_bit40_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit41;   //!
   TBranch        *b_L1Tech_BRIL_bit41_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit42;   //!
   TBranch        *b_L1Tech_BRIL_bit42_Prescl;   //!
   TBranch        *b_L1Tech_BRIL_bit43;   //!
   TBranch        *b_L1Tech_BRIL_bit43_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_Gap_v0;   //!
   TBranch        *b_L1Tech_CASTOR_Gap_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_HaloMuon_v0;   //!
   TBranch        *b_L1Tech_CASTOR_HaloMuon_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_HighJet_v0;   //!
   TBranch        *b_L1Tech_CASTOR_HighJet_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_MediumJet_v0;   //!
   TBranch        *b_L1Tech_CASTOR_MediumJet_v0_Prescl;   //!
   TBranch        *b_L1Tech_DT_GlobalOR_v0;   //!
   TBranch        *b_L1Tech_DT_GlobalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HBHE_totalOR_v0;   //!
   TBranch        *b_L1Tech_HCAL_HBHE_totalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HF_MMP_or_MPP_v1;   //!
   TBranch        *b_L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HF_coincidence_PM_v2;   //!
   TBranch        *b_L1Tech_HCAL_HF_coincidence_PM_v2_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HF_single_channel_v0;   //!
   TBranch        *b_L1Tech_HCAL_HF_single_channel_v0_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HO_totalOR_v0;   //!
   TBranch        *b_L1Tech_HCAL_HO_totalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_barrel_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_pointing_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_0;   //!
   TBranch        *b_L1Tech_TOTEM_0_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_1;   //!
   TBranch        *b_L1Tech_TOTEM_1_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_2;   //!
   TBranch        *b_L1Tech_TOTEM_2_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_3;   //!
   TBranch        *b_L1Tech_TOTEM_3_Prescl;   //!
   TBranch        *b_L1Tech_ZDC_minus;   //!
   TBranch        *b_L1Tech_ZDC_minus_Prescl;   //!
   TBranch        *b_L1Tech_ZDC_plus;   //!
   TBranch        *b_L1Tech_ZDC_plus_Prescl;   //!

};


void setupHltTree(TTree *t,Hlts &tHlts,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("NL1IsolEm", &tHlts.NL1IsolEm, &tHlts.b_NL1IsolEm);
   t->SetBranchAddress("L1IsolEmEt", tHlts.L1IsolEmEt, &tHlts.b_L1IsolEmEt);
   t->SetBranchAddress("L1IsolEmE", tHlts.L1IsolEmE, &tHlts.b_L1IsolEmE);
   t->SetBranchAddress("L1IsolEmEta", tHlts.L1IsolEmEta, &tHlts.b_L1IsolEmEta);
   t->SetBranchAddress("L1IsolEmPhi", tHlts.L1IsolEmPhi, &tHlts.b_L1IsolEmPhi);
   t->SetBranchAddress("NL1NIsolEm", &tHlts.NL1NIsolEm, &tHlts.b_NL1NIsolEm);
   t->SetBranchAddress("L1NIsolEmEt", tHlts.L1NIsolEmEt, &tHlts.b_L1NIsolEmEt);
   t->SetBranchAddress("L1NIsolEmE", tHlts.L1NIsolEmE, &tHlts.b_L1NIsolEmE);
   t->SetBranchAddress("L1NIsolEmEta", tHlts.L1NIsolEmEta, &tHlts.b_L1NIsolEmEta);
   t->SetBranchAddress("L1NIsolEmPhi", tHlts.L1NIsolEmPhi, &tHlts.b_L1NIsolEmPhi);
   t->SetBranchAddress("NL1Mu", &tHlts.NL1Mu, &tHlts.b_NL1Mu);
   t->SetBranchAddress("L1MuPt", tHlts.L1MuPt, &tHlts.b_L1MuPt);
   t->SetBranchAddress("L1MuE", tHlts.L1MuE, &tHlts.b_L1MuE);
   t->SetBranchAddress("L1MuEta", tHlts.L1MuEta, &tHlts.b_L1MuEta);
   t->SetBranchAddress("L1MuPhi", tHlts.L1MuPhi, &tHlts.b_L1MuPhi);
   t->SetBranchAddress("L1MuIsol", tHlts.L1MuIsol, &tHlts.b_L1MuIsol);
   t->SetBranchAddress("L1MuMip", tHlts.L1MuMip, &tHlts.b_L1MuMip);
   t->SetBranchAddress("L1MuFor", tHlts.L1MuFor, &tHlts.b_L1MuFor);
   t->SetBranchAddress("L1MuRPC", tHlts.L1MuRPC, &tHlts.b_L1MuRPC);
   t->SetBranchAddress("L1MuQal", tHlts.L1MuQal, &tHlts.b_L1MuQal);
   t->SetBranchAddress("L1MuChg", tHlts.L1MuChg, &tHlts.b_L1MuChg);
   t->SetBranchAddress("NL1CenJet", &tHlts.NL1CenJet, &tHlts.b_NL1CenJet);
   t->SetBranchAddress("L1CenJetEt", tHlts.L1CenJetEt, &tHlts.b_L1CenJetEt);
   t->SetBranchAddress("L1CenJetE", tHlts.L1CenJetE, &tHlts.b_L1CenJetE);
   t->SetBranchAddress("L1CenJetEta", tHlts.L1CenJetEta, &tHlts.b_L1CenJetEta);
   t->SetBranchAddress("L1CenJetPhi", tHlts.L1CenJetPhi, &tHlts.b_L1CenJetPhi);
   t->SetBranchAddress("NL1ForJet", &tHlts.NL1ForJet, &tHlts.b_NL1ForJet);
   t->SetBranchAddress("L1ForJetEt", tHlts.L1ForJetEt, &tHlts.b_L1ForJetEt);
   t->SetBranchAddress("L1ForJetE", tHlts.L1ForJetE, &tHlts.b_L1ForJetE);
   t->SetBranchAddress("L1ForJetEta", tHlts.L1ForJetEta, &tHlts.b_L1ForJetEta);
   t->SetBranchAddress("L1ForJetPhi", tHlts.L1ForJetPhi, &tHlts.b_L1ForJetPhi);
   t->SetBranchAddress("NL1Tau", &tHlts.NL1Tau, &tHlts.b_NL1Tau);
   t->SetBranchAddress("L1TauEt", tHlts.L1TauEt, &tHlts.b_L1TauEt);
   t->SetBranchAddress("L1TauE", tHlts.L1TauE, &tHlts.b_L1TauE);
   t->SetBranchAddress("L1TauEta", tHlts.L1TauEta, &tHlts.b_L1TauEta);
   t->SetBranchAddress("L1TauPhi", tHlts.L1TauPhi, &tHlts.b_L1TauPhi);
   t->SetBranchAddress("L1Met", &tHlts.L1Met, &tHlts.b_L1Met);
   t->SetBranchAddress("L1MetPhi", &tHlts.L1MetPhi, &tHlts.b_L1MetPhi);
   t->SetBranchAddress("L1EtTot", &tHlts.L1EtTot, &tHlts.b_L1EtTot);
   t->SetBranchAddress("L1Mht", &tHlts.L1Mht, &tHlts.b_L1Mht);
   t->SetBranchAddress("L1MhtPhi", &tHlts.L1MhtPhi, &tHlts.b_L1MhtPhi);
   t->SetBranchAddress("L1EtHad", &tHlts.L1EtHad, &tHlts.b_L1EtHad);
   t->SetBranchAddress("L1HfRing1EtSumPositiveEta", &tHlts.L1HfRing1EtSumPositiveEta, &tHlts.b_L1HfRing1EtSumPositiveEta);
   t->SetBranchAddress("L1HfRing2EtSumPositiveEta", &tHlts.L1HfRing2EtSumPositiveEta, &tHlts.b_L1HfRing2EtSumPositiveEta);
   t->SetBranchAddress("L1HfRing1EtSumNegativeEta", &tHlts.L1HfRing1EtSumNegativeEta, &tHlts.b_L1HfRing1EtSumNegativeEta);
   t->SetBranchAddress("L1HfRing2EtSumNegativeEta", &tHlts.L1HfRing2EtSumNegativeEta, &tHlts.b_L1HfRing2EtSumNegativeEta);
   t->SetBranchAddress("L1HfTowerCountPositiveEtaRing1", &tHlts.L1HfTowerCountPositiveEtaRing1, &tHlts.b_L1HfTowerCountPositiveEtaRing1);
   t->SetBranchAddress("L1HfTowerCountNegativeEtaRing1", &tHlts.L1HfTowerCountNegativeEtaRing1, &tHlts.b_L1HfTowerCountNegativeEtaRing1);
   t->SetBranchAddress("L1HfTowerCountPositiveEtaRing2", &tHlts.L1HfTowerCountPositiveEtaRing2, &tHlts.b_L1HfTowerCountPositiveEtaRing2);
   t->SetBranchAddress("L1HfTowerCountNegativeEtaRing2", &tHlts.L1HfTowerCountNegativeEtaRing2, &tHlts.b_L1HfTowerCountNegativeEtaRing2);
   t->SetBranchAddress("Event", &tHlts.Event, &tHlts.b_Event);
   t->SetBranchAddress("LumiBlock", &tHlts.LumiBlock, &tHlts.b_LumiBlock);
   t->SetBranchAddress("Run", &tHlts.Run, &tHlts.b_Run);
   t->SetBranchAddress("Bx", &tHlts.Bx, &tHlts.b_Bx);
   t->SetBranchAddress("Orbit", &tHlts.Orbit, &tHlts.b_Orbit);
   t->SetBranchAddress("AvgInstDelLumi", &tHlts.AvgInstDelLumi, &tHlts.b_AvgInstDelLumi);
   t->SetBranchAddress("digitisation_step", &tHlts.digitisation_step, &tHlts.b_digitisation_step);
   t->SetBranchAddress("digitisation_step_Prescl", &tHlts.digitisation_step_Prescl, &tHlts.b_digitisation_step_Prescl);
   t->SetBranchAddress("L1simulation_step", &tHlts.L1simulation_step, &tHlts.b_L1simulation_step);
   t->SetBranchAddress("L1simulation_step_Prescl", &tHlts.L1simulation_step_Prescl, &tHlts.b_L1simulation_step_Prescl);
   t->SetBranchAddress("digi2raw_step", &tHlts.digi2raw_step, &tHlts.b_digi2raw_step);
   t->SetBranchAddress("digi2raw_step_Prescl", &tHlts.digi2raw_step_Prescl, &tHlts.b_digi2raw_step_Prescl);
   t->SetBranchAddress("HLTriggerFirstPath", &tHlts.HLTriggerFirstPath, &tHlts.b_HLTriggerFirstPath);
   t->SetBranchAddress("HLTriggerFirstPath_Prescl", &tHlts.HLTriggerFirstPath_Prescl, &tHlts.b_HLTriggerFirstPath_Prescl);
   t->SetBranchAddress("DST_Physics_v1", &tHlts.DST_Physics_v1, &tHlts.b_DST_Physics_v1);
   t->SetBranchAddress("DST_Physics_v1_Prescl", &tHlts.DST_Physics_v1_Prescl, &tHlts.b_DST_Physics_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet40_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet40_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet40_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet40_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet40_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet40_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet60_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet60_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet60_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet60_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet60_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet60_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet80_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet80_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet80_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet80_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet100_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet100_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet100_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet100_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet110_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet110_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet110_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet110_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet110_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet110_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet120_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet120_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet120_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet120_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet120_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet120_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet150_Eta5p1_v1", &tHlts.HLT_HIPuAK4CaloJet150_Eta5p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet150_Eta5p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet150_Eta5p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet150_Eta5p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet150_Eta5p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1", &tHlts.HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1", &tHlts.HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1", &tHlts.HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1", &tHlts.HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1", &tHlts.HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet40_Eta5p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1", &tHlts.HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet60_Eta5p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1", &tHlts.HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet80_Eta5p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1", &tHlts.HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1, &tHlts.b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet100_Eta5p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1", &tHlts.HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet80_Jet35_Eta1p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1", &tHlts.HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1, &tHlts.b_HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet80_Jet35_Eta0p7_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1", &tHlts.HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet100_Jet35_Eta1p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1", &tHlts.HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1, &tHlts.b_HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet100_Jet35_Eta0p7_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloDJet60_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloDJet60_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloDJet60_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloDJet60_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloDJet60_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloDJet60_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloDJet80_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloDJet80_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloDJet80_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloDJet80_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloDJet80_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloDJet80_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloBJetCSV60_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloBJetCSV80_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloBJetSSV60_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1", &tHlts.HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1, &tHlts.b_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1);
   t->SetBranchAddress("HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1_Prescl", &tHlts.HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1_Prescl, &tHlts.b_HLT_HIPuAK4CaloBJetSSV80_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt50_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt50_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt50_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt50_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt50_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt50_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt60_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt60_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt60_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt60_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt70_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt70_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt70_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt70_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt70_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt70_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt60_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt20_Cent0_10_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt30_Cent0_10_v1_Prescl);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1);
   t->SetBranchAddress("HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1_Prescl", &tHlts.HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1_Prescl, &tHlts.b_HLT_HIDmesonHITrackingGlobal_Dpt40_Cent0_10_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta1p5_v1", &tHlts.HLT_HISinglePhoton10_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton10_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton10_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton10_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta1p5_v1", &tHlts.HLT_HISinglePhoton15_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton15_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton15_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton15_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta1p5_v1", &tHlts.HLT_HISinglePhoton20_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton20_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton20_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton20_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta1p5_v1", &tHlts.HLT_HISinglePhoton30_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton30_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton30_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton30_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta1p5_v1", &tHlts.HLT_HISinglePhoton40_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton40_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton50_Eta1p5_v1", &tHlts.HLT_HISinglePhoton50_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton50_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton50_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton50_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton50_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton60_Eta1p5_v1", &tHlts.HLT_HISinglePhoton60_Eta1p5_v1, &tHlts.b_HLT_HISinglePhoton60_Eta1p5_v1);
   t->SetBranchAddress("HLT_HISinglePhoton60_Eta1p5_v1_Prescl", &tHlts.HLT_HISinglePhoton60_Eta1p5_v1_Prescl, &tHlts.b_HLT_HISinglePhoton60_Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1", &tHlts.HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton10_Eta1p5_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1", &tHlts.HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton15_Eta1p5_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1", &tHlts.HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton20_Eta1p5_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1", &tHlts.HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton30_Eta1p5_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1", &tHlts.HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta1p5_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1", &tHlts.HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton10_Eta1p5_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1", &tHlts.HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton15_Eta1p5_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1", &tHlts.HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton20_Eta1p5_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1", &tHlts.HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton30_Eta1p5_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1", &tHlts.HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta1p5_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta2p1_v1", &tHlts.HLT_HISinglePhoton40_Eta2p1_v1, &tHlts.b_HLT_HISinglePhoton40_Eta2p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta2p1_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta2p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta3p1_v1", &tHlts.HLT_HISinglePhoton10_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton10_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton10_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton10_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta3p1_v1", &tHlts.HLT_HISinglePhoton15_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton15_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton15_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton15_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta3p1_v1", &tHlts.HLT_HISinglePhoton20_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton20_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton20_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton20_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta3p1_v1", &tHlts.HLT_HISinglePhoton30_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton30_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton30_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton30_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta3p1_v1", &tHlts.HLT_HISinglePhoton40_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton40_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton50_Eta3p1_v1", &tHlts.HLT_HISinglePhoton50_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton50_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton50_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton50_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton50_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton60_Eta3p1_v1", &tHlts.HLT_HISinglePhoton60_Eta3p1_v1, &tHlts.b_HLT_HISinglePhoton60_Eta3p1_v1);
   t->SetBranchAddress("HLT_HISinglePhoton60_Eta3p1_v1_Prescl", &tHlts.HLT_HISinglePhoton60_Eta3p1_v1_Prescl, &tHlts.b_HLT_HISinglePhoton60_Eta3p1_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1", &tHlts.HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton10_Eta3p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1", &tHlts.HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton15_Eta3p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1", &tHlts.HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton20_Eta3p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1", &tHlts.HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton30_Eta3p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1", &tHlts.HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1, &tHlts.b_HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta3p1_Cent50_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1", &tHlts.HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton10_Eta3p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1", &tHlts.HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton15_Eta3p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1", &tHlts.HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton20_Eta3p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1", &tHlts.HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton30_Eta3p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1", &tHlts.HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1, &tHlts.b_HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1);
   t->SetBranchAddress("HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1_Prescl", &tHlts.HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1_Prescl, &tHlts.b_HLT_HISinglePhoton40_Eta3p1_Cent30_100_v1_Prescl);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1", &tHlts.HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1, &tHlts.b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1_Prescl", &tHlts.HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1_Prescl, &tHlts.b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_v1_Prescl);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1", &tHlts.HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1, &tHlts.b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1_Prescl", &tHlts.HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1_Prescl, &tHlts.b_HLT_HIDoublePhoton15_Eta1p5_Mass50_1000_R9HECut_v1_Prescl);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1", &tHlts.HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1, &tHlts.b_HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1_Prescl", &tHlts.HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1_Prescl, &tHlts.b_HLT_HIDoublePhoton15_Eta2p1_Mass50_1000_R9Cut_v1_Prescl);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1", &tHlts.HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1, &tHlts.b_HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1);
   t->SetBranchAddress("HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1_Prescl", &tHlts.HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1_Prescl, &tHlts.b_HLT_HIDoublePhoton15_Eta2p5_Mass50_1000_R9SigmaHECut_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton10Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton15Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton20Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton30Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1);
   t->SetBranchAddress("HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1_Prescl", &tHlts.HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1_Prescl, &tHlts.b_HLT_HIL2Mu3Eta2p5_HIPhoton40Eta1p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIUCC100_v1", &tHlts.HLT_HIUCC100_v1, &tHlts.b_HLT_HIUCC100_v1);
   t->SetBranchAddress("HLT_HIUCC100_v1_Prescl", &tHlts.HLT_HIUCC100_v1_Prescl, &tHlts.b_HLT_HIUCC100_v1_Prescl);
   t->SetBranchAddress("HLT_HIUCC020_v1", &tHlts.HLT_HIUCC020_v1, &tHlts.b_HLT_HIUCC020_v1);
   t->SetBranchAddress("HLT_HIUCC020_v1_Prescl", &tHlts.HLT_HIUCC020_v1_Prescl, &tHlts.b_HLT_HIUCC020_v1_Prescl);
   t->SetBranchAddress("HLT_HIQ2Bottom005_Centrality1030_v1", &tHlts.HLT_HIQ2Bottom005_Centrality1030_v1, &tHlts.b_HLT_HIQ2Bottom005_Centrality1030_v1);
   t->SetBranchAddress("HLT_HIQ2Bottom005_Centrality1030_v1_Prescl", &tHlts.HLT_HIQ2Bottom005_Centrality1030_v1_Prescl, &tHlts.b_HLT_HIQ2Bottom005_Centrality1030_v1_Prescl);
   t->SetBranchAddress("HLT_HIQ2Top005_Centrality1030_v1", &tHlts.HLT_HIQ2Top005_Centrality1030_v1, &tHlts.b_HLT_HIQ2Top005_Centrality1030_v1);
   t->SetBranchAddress("HLT_HIQ2Top005_Centrality1030_v1_Prescl", &tHlts.HLT_HIQ2Top005_Centrality1030_v1_Prescl, &tHlts.b_HLT_HIQ2Top005_Centrality1030_v1_Prescl);
   t->SetBranchAddress("HLT_HIQ2Bottom005_Centrality3050_v1", &tHlts.HLT_HIQ2Bottom005_Centrality3050_v1, &tHlts.b_HLT_HIQ2Bottom005_Centrality3050_v1);
   t->SetBranchAddress("HLT_HIQ2Bottom005_Centrality3050_v1_Prescl", &tHlts.HLT_HIQ2Bottom005_Centrality3050_v1_Prescl, &tHlts.b_HLT_HIQ2Bottom005_Centrality3050_v1_Prescl);
   t->SetBranchAddress("HLT_HIQ2Top005_Centrality3050_v1", &tHlts.HLT_HIQ2Top005_Centrality3050_v1, &tHlts.b_HLT_HIQ2Top005_Centrality3050_v1);
   t->SetBranchAddress("HLT_HIQ2Top005_Centrality3050_v1_Prescl", &tHlts.HLT_HIQ2Top005_Centrality3050_v1_Prescl, &tHlts.b_HLT_HIQ2Top005_Centrality3050_v1_Prescl);
   t->SetBranchAddress("HLT_HIQ2Bottom005_Centrality5070_v1", &tHlts.HLT_HIQ2Bottom005_Centrality5070_v1, &tHlts.b_HLT_HIQ2Bottom005_Centrality5070_v1);
   t->SetBranchAddress("HLT_HIQ2Bottom005_Centrality5070_v1_Prescl", &tHlts.HLT_HIQ2Bottom005_Centrality5070_v1_Prescl, &tHlts.b_HLT_HIQ2Bottom005_Centrality5070_v1_Prescl);
   t->SetBranchAddress("HLT_HIQ2Top005_Centrality5070_v1", &tHlts.HLT_HIQ2Top005_Centrality5070_v1, &tHlts.b_HLT_HIQ2Top005_Centrality5070_v1);
   t->SetBranchAddress("HLT_HIQ2Top005_Centrality5070_v1_Prescl", &tHlts.HLT_HIQ2Top005_Centrality5070_v1_Prescl, &tHlts.b_HLT_HIQ2Top005_Centrality5070_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1", &tHlts.HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1, &tHlts.b_HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1);
   t->SetBranchAddress("HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1_Prescl", &tHlts.HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1_Prescl, &tHlts.b_HLT_HIFullTrack12_L1MinimumBiasHF1_AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack12_L1Centrality010_v1", &tHlts.HLT_HIFullTrack12_L1Centrality010_v1, &tHlts.b_HLT_HIFullTrack12_L1Centrality010_v1);
   t->SetBranchAddress("HLT_HIFullTrack12_L1Centrality010_v1_Prescl", &tHlts.HLT_HIFullTrack12_L1Centrality010_v1_Prescl, &tHlts.b_HLT_HIFullTrack12_L1Centrality010_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack12_L1Centrality30100_v1", &tHlts.HLT_HIFullTrack12_L1Centrality30100_v1, &tHlts.b_HLT_HIFullTrack12_L1Centrality30100_v1);
   t->SetBranchAddress("HLT_HIFullTrack12_L1Centrality30100_v1_Prescl", &tHlts.HLT_HIFullTrack12_L1Centrality30100_v1_Prescl, &tHlts.b_HLT_HIFullTrack12_L1Centrality30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1", &tHlts.HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1, &tHlts.b_HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1);
   t->SetBranchAddress("HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1_Prescl", &tHlts.HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1_Prescl, &tHlts.b_HLT_HIFullTrack18_L1MinimumBiasHF1_AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack18_L1Centrality010_v1", &tHlts.HLT_HIFullTrack18_L1Centrality010_v1, &tHlts.b_HLT_HIFullTrack18_L1Centrality010_v1);
   t->SetBranchAddress("HLT_HIFullTrack18_L1Centrality010_v1_Prescl", &tHlts.HLT_HIFullTrack18_L1Centrality010_v1_Prescl, &tHlts.b_HLT_HIFullTrack18_L1Centrality010_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack18_L1Centrality30100_v1", &tHlts.HLT_HIFullTrack18_L1Centrality30100_v1, &tHlts.b_HLT_HIFullTrack18_L1Centrality30100_v1);
   t->SetBranchAddress("HLT_HIFullTrack18_L1Centrality30100_v1_Prescl", &tHlts.HLT_HIFullTrack18_L1Centrality30100_v1_Prescl, &tHlts.b_HLT_HIFullTrack18_L1Centrality30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack24_v1", &tHlts.HLT_HIFullTrack24_v1, &tHlts.b_HLT_HIFullTrack24_v1);
   t->SetBranchAddress("HLT_HIFullTrack24_v1_Prescl", &tHlts.HLT_HIFullTrack24_v1_Prescl, &tHlts.b_HLT_HIFullTrack24_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack24_L1Centrality30100_v1", &tHlts.HLT_HIFullTrack24_L1Centrality30100_v1, &tHlts.b_HLT_HIFullTrack24_L1Centrality30100_v1);
   t->SetBranchAddress("HLT_HIFullTrack24_L1Centrality30100_v1_Prescl", &tHlts.HLT_HIFullTrack24_L1Centrality30100_v1_Prescl, &tHlts.b_HLT_HIFullTrack24_L1Centrality30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack34_v1", &tHlts.HLT_HIFullTrack34_v1, &tHlts.b_HLT_HIFullTrack34_v1);
   t->SetBranchAddress("HLT_HIFullTrack34_v1_Prescl", &tHlts.HLT_HIFullTrack34_v1_Prescl, &tHlts.b_HLT_HIFullTrack34_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack34_L1Centrality30100_v1", &tHlts.HLT_HIFullTrack34_L1Centrality30100_v1, &tHlts.b_HLT_HIFullTrack34_L1Centrality30100_v1);
   t->SetBranchAddress("HLT_HIFullTrack34_L1Centrality30100_v1_Prescl", &tHlts.HLT_HIFullTrack34_L1Centrality30100_v1_Prescl, &tHlts.b_HLT_HIFullTrack34_L1Centrality30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack45_v1", &tHlts.HLT_HIFullTrack45_v1, &tHlts.b_HLT_HIFullTrack45_v1);
   t->SetBranchAddress("HLT_HIFullTrack45_v1_Prescl", &tHlts.HLT_HIFullTrack45_v1_Prescl, &tHlts.b_HLT_HIFullTrack45_v1_Prescl);
   t->SetBranchAddress("HLT_HIFullTrack45_L1Centrality30100_v1", &tHlts.HLT_HIFullTrack45_L1Centrality30100_v1, &tHlts.b_HLT_HIFullTrack45_L1Centrality30100_v1);
   t->SetBranchAddress("HLT_HIFullTrack45_L1Centrality30100_v1_Prescl", &tHlts.HLT_HIFullTrack45_L1Centrality30100_v1_Prescl, &tHlts.b_HLT_HIFullTrack45_L1Centrality30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_v1", &tHlts.HLT_HIL1DoubleMu0_v1, &tHlts.b_HLT_HIL1DoubleMu0_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_v1_Prescl", &tHlts.HLT_HIL1DoubleMu0_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF_v1", &tHlts.HLT_HIL1DoubleMu0_2HF_v1, &tHlts.b_HLT_HIL1DoubleMu0_2HF_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF_v1_Prescl", &tHlts.HLT_HIL1DoubleMu0_2HF_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu0_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF0_v1", &tHlts.HLT_HIL1DoubleMu0_2HF0_v1, &tHlts.b_HLT_HIL1DoubleMu0_2HF0_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF0_v1_Prescl", &tHlts.HLT_HIL1DoubleMu0_2HF0_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu0_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu10_v1", &tHlts.HLT_HIL1DoubleMu10_v1, &tHlts.b_HLT_HIL1DoubleMu10_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu10_v1_Prescl", &tHlts.HLT_HIL1DoubleMu10_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu10_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_NHitQ_v2", &tHlts.HLT_HIL2DoubleMu0_NHitQ_v2, &tHlts.b_HLT_HIL2DoubleMu0_NHitQ_v2);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_NHitQ_v2_Prescl", &tHlts.HLT_HIL2DoubleMu0_NHitQ_v2_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_NHitQ_v2_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_NHitQ_2HF_v1", &tHlts.HLT_HIL2DoubleMu0_NHitQ_2HF_v1, &tHlts.b_HLT_HIL2DoubleMu0_NHitQ_2HF_v1);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_NHitQ_2HF_v1_Prescl", &tHlts.HLT_HIL2DoubleMu0_NHitQ_2HF_v1_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_NHitQ_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_NHitQ_2HF0_v1", &tHlts.HLT_HIL2DoubleMu0_NHitQ_2HF0_v1, &tHlts.b_HLT_HIL2DoubleMu0_NHitQ_2HF0_v1);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_NHitQ_2HF0_v1_Prescl", &tHlts.HLT_HIL2DoubleMu0_NHitQ_2HF0_v1_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_NHitQ_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3_NHitQ10_2HF_v1", &tHlts.HLT_HIL2Mu3_NHitQ10_2HF_v1, &tHlts.b_HLT_HIL2Mu3_NHitQ10_2HF_v1);
   t->SetBranchAddress("HLT_HIL2Mu3_NHitQ10_2HF_v1_Prescl", &tHlts.HLT_HIL2Mu3_NHitQ10_2HF_v1_Prescl, &tHlts.b_HLT_HIL2Mu3_NHitQ10_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu3_NHitQ10_2HF0_v1", &tHlts.HLT_HIL2Mu3_NHitQ10_2HF0_v1, &tHlts.b_HLT_HIL2Mu3_NHitQ10_2HF0_v1);
   t->SetBranchAddress("HLT_HIL2Mu3_NHitQ10_2HF0_v1_Prescl", &tHlts.HLT_HIL2Mu3_NHitQ10_2HF0_v1_Prescl, &tHlts.b_HLT_HIL2Mu3_NHitQ10_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu3_NHitQ15_2HF_v1", &tHlts.HLT_HIL3Mu3_NHitQ15_2HF_v1, &tHlts.b_HLT_HIL3Mu3_NHitQ15_2HF_v1);
   t->SetBranchAddress("HLT_HIL3Mu3_NHitQ15_2HF_v1_Prescl", &tHlts.HLT_HIL3Mu3_NHitQ15_2HF_v1_Prescl, &tHlts.b_HLT_HIL3Mu3_NHitQ15_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu3_NHitQ15_2HF0_v1", &tHlts.HLT_HIL3Mu3_NHitQ15_2HF0_v1, &tHlts.b_HLT_HIL3Mu3_NHitQ15_2HF0_v1);
   t->SetBranchAddress("HLT_HIL3Mu3_NHitQ15_2HF0_v1_Prescl", &tHlts.HLT_HIL3Mu3_NHitQ15_2HF0_v1_Prescl, &tHlts.b_HLT_HIL3Mu3_NHitQ15_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu5_NHitQ10_2HF_v1", &tHlts.HLT_HIL2Mu5_NHitQ10_2HF_v1, &tHlts.b_HLT_HIL2Mu5_NHitQ10_2HF_v1);
   t->SetBranchAddress("HLT_HIL2Mu5_NHitQ10_2HF_v1_Prescl", &tHlts.HLT_HIL2Mu5_NHitQ10_2HF_v1_Prescl, &tHlts.b_HLT_HIL2Mu5_NHitQ10_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu5_NHitQ10_2HF0_v1", &tHlts.HLT_HIL2Mu5_NHitQ10_2HF0_v1, &tHlts.b_HLT_HIL2Mu5_NHitQ10_2HF0_v1);
   t->SetBranchAddress("HLT_HIL2Mu5_NHitQ10_2HF0_v1_Prescl", &tHlts.HLT_HIL2Mu5_NHitQ10_2HF0_v1_Prescl, &tHlts.b_HLT_HIL2Mu5_NHitQ10_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu5_NHitQ15_2HF_v1", &tHlts.HLT_HIL3Mu5_NHitQ15_2HF_v1, &tHlts.b_HLT_HIL3Mu5_NHitQ15_2HF_v1);
   t->SetBranchAddress("HLT_HIL3Mu5_NHitQ15_2HF_v1_Prescl", &tHlts.HLT_HIL3Mu5_NHitQ15_2HF_v1_Prescl, &tHlts.b_HLT_HIL3Mu5_NHitQ15_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu5_NHitQ15_2HF0_v1", &tHlts.HLT_HIL3Mu5_NHitQ15_2HF0_v1, &tHlts.b_HLT_HIL3Mu5_NHitQ15_2HF0_v1);
   t->SetBranchAddress("HLT_HIL3Mu5_NHitQ15_2HF0_v1_Prescl", &tHlts.HLT_HIL3Mu5_NHitQ15_2HF0_v1_Prescl, &tHlts.b_HLT_HIL3Mu5_NHitQ15_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu7_NHitQ10_2HF_v1", &tHlts.HLT_HIL2Mu7_NHitQ10_2HF_v1, &tHlts.b_HLT_HIL2Mu7_NHitQ10_2HF_v1);
   t->SetBranchAddress("HLT_HIL2Mu7_NHitQ10_2HF_v1_Prescl", &tHlts.HLT_HIL2Mu7_NHitQ10_2HF_v1_Prescl, &tHlts.b_HLT_HIL2Mu7_NHitQ10_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu7_NHitQ10_2HF0_v1", &tHlts.HLT_HIL2Mu7_NHitQ10_2HF0_v1, &tHlts.b_HLT_HIL2Mu7_NHitQ10_2HF0_v1);
   t->SetBranchAddress("HLT_HIL2Mu7_NHitQ10_2HF0_v1_Prescl", &tHlts.HLT_HIL2Mu7_NHitQ10_2HF0_v1_Prescl, &tHlts.b_HLT_HIL2Mu7_NHitQ10_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu7_NHitQ15_2HF_v1", &tHlts.HLT_HIL3Mu7_NHitQ15_2HF_v1, &tHlts.b_HLT_HIL3Mu7_NHitQ15_2HF_v1);
   t->SetBranchAddress("HLT_HIL3Mu7_NHitQ15_2HF_v1_Prescl", &tHlts.HLT_HIL3Mu7_NHitQ15_2HF_v1_Prescl, &tHlts.b_HLT_HIL3Mu7_NHitQ15_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu7_NHitQ15_2HF0_v1", &tHlts.HLT_HIL3Mu7_NHitQ15_2HF0_v1, &tHlts.b_HLT_HIL3Mu7_NHitQ15_2HF0_v1);
   t->SetBranchAddress("HLT_HIL3Mu7_NHitQ15_2HF0_v1_Prescl", &tHlts.HLT_HIL3Mu7_NHitQ15_2HF0_v1_Prescl, &tHlts.b_HLT_HIL3Mu7_NHitQ15_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu15_v2", &tHlts.HLT_HIL2Mu15_v2, &tHlts.b_HLT_HIL2Mu15_v2);
   t->SetBranchAddress("HLT_HIL2Mu15_v2_Prescl", &tHlts.HLT_HIL2Mu15_v2_Prescl, &tHlts.b_HLT_HIL2Mu15_v2_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu15_2HF_v1", &tHlts.HLT_HIL2Mu15_2HF_v1, &tHlts.b_HLT_HIL2Mu15_2HF_v1);
   t->SetBranchAddress("HLT_HIL2Mu15_2HF_v1_Prescl", &tHlts.HLT_HIL2Mu15_2HF_v1_Prescl, &tHlts.b_HLT_HIL2Mu15_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu15_2HF0_v1", &tHlts.HLT_HIL2Mu15_2HF0_v1, &tHlts.b_HLT_HIL2Mu15_2HF0_v1);
   t->SetBranchAddress("HLT_HIL2Mu15_2HF0_v1_Prescl", &tHlts.HLT_HIL2Mu15_2HF0_v1_Prescl, &tHlts.b_HLT_HIL2Mu15_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu15_v1", &tHlts.HLT_HIL3Mu15_v1, &tHlts.b_HLT_HIL3Mu15_v1);
   t->SetBranchAddress("HLT_HIL3Mu15_v1_Prescl", &tHlts.HLT_HIL3Mu15_v1_Prescl, &tHlts.b_HLT_HIL3Mu15_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu15_2HF_v1", &tHlts.HLT_HIL3Mu15_2HF_v1, &tHlts.b_HLT_HIL3Mu15_2HF_v1);
   t->SetBranchAddress("HLT_HIL3Mu15_2HF_v1_Prescl", &tHlts.HLT_HIL3Mu15_2HF_v1_Prescl, &tHlts.b_HLT_HIL3Mu15_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu15_2HF0_v1", &tHlts.HLT_HIL3Mu15_2HF0_v1, &tHlts.b_HLT_HIL3Mu15_2HF0_v1);
   t->SetBranchAddress("HLT_HIL3Mu15_2HF0_v1_Prescl", &tHlts.HLT_HIL3Mu15_2HF0_v1_Prescl, &tHlts.b_HLT_HIL3Mu15_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu20_v1", &tHlts.HLT_HIL2Mu20_v1, &tHlts.b_HLT_HIL2Mu20_v1);
   t->SetBranchAddress("HLT_HIL2Mu20_v1_Prescl", &tHlts.HLT_HIL2Mu20_v1_Prescl, &tHlts.b_HLT_HIL2Mu20_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu20_2HF_v1", &tHlts.HLT_HIL2Mu20_2HF_v1, &tHlts.b_HLT_HIL2Mu20_2HF_v1);
   t->SetBranchAddress("HLT_HIL2Mu20_2HF_v1_Prescl", &tHlts.HLT_HIL2Mu20_2HF_v1_Prescl, &tHlts.b_HLT_HIL2Mu20_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2Mu20_2HF0_v1", &tHlts.HLT_HIL2Mu20_2HF0_v1, &tHlts.b_HLT_HIL2Mu20_2HF0_v1);
   t->SetBranchAddress("HLT_HIL2Mu20_2HF0_v1_Prescl", &tHlts.HLT_HIL2Mu20_2HF0_v1_Prescl, &tHlts.b_HLT_HIL2Mu20_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu20_v1", &tHlts.HLT_HIL3Mu20_v1, &tHlts.b_HLT_HIL3Mu20_v1);
   t->SetBranchAddress("HLT_HIL3Mu20_v1_Prescl", &tHlts.HLT_HIL3Mu20_v1_Prescl, &tHlts.b_HLT_HIL3Mu20_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu20_2HF_v1", &tHlts.HLT_HIL3Mu20_2HF_v1, &tHlts.b_HLT_HIL3Mu20_2HF_v1);
   t->SetBranchAddress("HLT_HIL3Mu20_2HF_v1_Prescl", &tHlts.HLT_HIL3Mu20_2HF_v1_Prescl, &tHlts.b_HLT_HIL3Mu20_2HF_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3Mu20_2HF0_v1", &tHlts.HLT_HIL3Mu20_2HF0_v1, &tHlts.b_HLT_HIL3Mu20_2HF0_v1);
   t->SetBranchAddress("HLT_HIL3Mu20_2HF0_v1_Prescl", &tHlts.HLT_HIL3Mu20_2HF0_v1_Prescl, &tHlts.b_HLT_HIL3Mu20_2HF0_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF_Cent30100_v1", &tHlts.HLT_HIL1DoubleMu0_2HF_Cent30100_v1, &tHlts.b_HLT_HIL1DoubleMu0_2HF_Cent30100_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF_Cent30100_v1_Prescl", &tHlts.HLT_HIL1DoubleMu0_2HF_Cent30100_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu0_2HF_Cent30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF0_Cent30100_v1", &tHlts.HLT_HIL1DoubleMu0_2HF0_Cent30100_v1, &tHlts.b_HLT_HIL1DoubleMu0_2HF0_Cent30100_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_2HF0_Cent30100_v1_Prescl", &tHlts.HLT_HIL1DoubleMu0_2HF0_Cent30100_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu0_2HF0_Cent30100_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1", &tHlts.HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1, &tHlts.b_HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1_Prescl", &tHlts.HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_2HF_Cent30100_NHitQ_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_Cent30_v1", &tHlts.HLT_HIL1DoubleMu0_Cent30_v1, &tHlts.b_HLT_HIL1DoubleMu0_Cent30_v1);
   t->SetBranchAddress("HLT_HIL1DoubleMu0_Cent30_v1_Prescl", &tHlts.HLT_HIL1DoubleMu0_Cent30_v1_Prescl, &tHlts.b_HLT_HIL1DoubleMu0_Cent30_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1", &tHlts.HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1, &tHlts.b_HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1_Prescl", &tHlts.HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_2HF0_Cent30100_NHitQ_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1", &tHlts.HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1, &tHlts.b_HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1_Prescl", &tHlts.HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_Cent30_OS_NHitQ_v1_Prescl);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_Cent30_NHitQ_v1", &tHlts.HLT_HIL2DoubleMu0_Cent30_NHitQ_v1, &tHlts.b_HLT_HIL2DoubleMu0_Cent30_NHitQ_v1);
   t->SetBranchAddress("HLT_HIL2DoubleMu0_Cent30_NHitQ_v1_Prescl", &tHlts.HLT_HIL2DoubleMu0_Cent30_NHitQ_v1_Prescl, &tHlts.b_HLT_HIL2DoubleMu0_Cent30_NHitQ_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_Cent30_v1", &tHlts.HLT_HIL3DoubleMu0_Cent30_v1, &tHlts.b_HLT_HIL3DoubleMu0_Cent30_v1);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_Cent30_v1_Prescl", &tHlts.HLT_HIL3DoubleMu0_Cent30_v1_Prescl, &tHlts.b_HLT_HIL3DoubleMu0_Cent30_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1", &tHlts.HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1, &tHlts.b_HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1_Prescl", &tHlts.HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1_Prescl, &tHlts.b_HLT_HIL3DoubleMu0_Cent30_OS_m2p5to4p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1", &tHlts.HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1, &tHlts.b_HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1_Prescl", &tHlts.HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1_Prescl, &tHlts.b_HLT_HIL3DoubleMu0_Cent30_OS_m7to14_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1", &tHlts.HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1, &tHlts.b_HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1_Prescl", &tHlts.HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1_Prescl, &tHlts.b_HLT_HIL3DoubleMu0_OS_m2p5to4p5_v1_Prescl);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_OS_m7to14_v1", &tHlts.HLT_HIL3DoubleMu0_OS_m7to14_v1, &tHlts.b_HLT_HIL3DoubleMu0_OS_m7to14_v1);
   t->SetBranchAddress("HLT_HIL3DoubleMu0_OS_m7to14_v1_Prescl", &tHlts.HLT_HIL3DoubleMu0_OS_m7to14_v1_Prescl, &tHlts.b_HLT_HIL3DoubleMu0_OS_m7to14_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1SingleMuOpenNotHF2_v1", &tHlts.HLT_HIUPCL1SingleMuOpenNotHF2_v1, &tHlts.b_HLT_HIUPCL1SingleMuOpenNotHF2_v1);
   t->SetBranchAddress("HLT_HIUPCL1SingleMuOpenNotHF2_v1_Prescl", &tHlts.HLT_HIUPCL1SingleMuOpenNotHF2_v1_Prescl, &tHlts.b_HLT_HIUPCL1SingleMuOpenNotHF2_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCSingleMuNotHF2Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHF2_v1", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHF2_v1, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHF2_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHF2_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHF2_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHF2_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCDoubleMuNotHF2Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1SingleEG2NotHF2_v1", &tHlts.HLT_HIUPCL1SingleEG2NotHF2_v1, &tHlts.b_HLT_HIUPCL1SingleEG2NotHF2_v1);
   t->SetBranchAddress("HLT_HIUPCL1SingleEG2NotHF2_v1_Prescl", &tHlts.HLT_HIUPCL1SingleEG2NotHF2_v1_Prescl, &tHlts.b_HLT_HIUPCL1SingleEG2NotHF2_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCSingleEG2NotHF2Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleEG2NotHF2_v1", &tHlts.HLT_HIUPCL1DoubleEG2NotHF2_v1, &tHlts.b_HLT_HIUPCL1DoubleEG2NotHF2_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleEG2NotHF2_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleEG2NotHF2_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleEG2NotHF2_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCDoubleEG2NotHF2Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1SingleEG5NotHF2_v1", &tHlts.HLT_HIUPCL1SingleEG5NotHF2_v1, &tHlts.b_HLT_HIUPCL1SingleEG5NotHF2_v1);
   t->SetBranchAddress("HLT_HIUPCL1SingleEG5NotHF2_v1_Prescl", &tHlts.HLT_HIUPCL1SingleEG5NotHF2_v1_Prescl, &tHlts.b_HLT_HIUPCL1SingleEG5NotHF2_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCSingleEG5NotHF2Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHF1_v1", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHF1_v1, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHF1_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHF1_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHF1_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHF1_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCDoubleMuNotHF1Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleEG2NotZDCAND_v1", &tHlts.HLT_HIUPCL1DoubleEG2NotZDCAND_v1, &tHlts.b_HLT_HIUPCL1DoubleEG2NotZDCAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleEG2NotZDCAND_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleEG2NotZDCAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleEG2NotZDCAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleEG2NotZDCANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1", &tHlts.HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotZDCAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotZDCANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1EG2NotZDCAND_v1", &tHlts.HLT_HIUPCL1EG2NotZDCAND_v1, &tHlts.b_HLT_HIUPCL1EG2NotZDCAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1EG2NotZDCAND_v1_Prescl", &tHlts.HLT_HIUPCL1EG2NotZDCAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1EG2NotZDCAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCEG2NotZDCANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1MuOpenNotZDCAND_v1", &tHlts.HLT_HIUPCL1MuOpenNotZDCAND_v1, &tHlts.b_HLT_HIUPCL1MuOpenNotZDCAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1MuOpenNotZDCAND_v1_Prescl", &tHlts.HLT_HIUPCL1MuOpenNotZDCAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1MuOpenNotZDCAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1MuOpenNotZDCANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1", &tHlts.HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1, &tHlts.b_HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1_Prescl", &tHlts.HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotHFplusANDminusTH0BptxAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotHFplusANDminusTH0BptxANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1", &tHlts.HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1, &tHlts.b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1_Prescl", &tHlts.HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1DoubleMuOpenNotHFMinimumbiasHFplusANDminustTH0Pixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1CastorMediumJet_v1", &tHlts.HLT_HIL1CastorMediumJet_v1, &tHlts.b_HLT_HIL1CastorMediumJet_v1);
   t->SetBranchAddress("HLT_HIL1CastorMediumJet_v1_Prescl", &tHlts.HLT_HIL1CastorMediumJet_v1_Prescl, &tHlts.b_HLT_HIL1CastorMediumJet_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1CastorMediumJetAK4CaloJet20_v1", &tHlts.HLT_HIL1CastorMediumJetAK4CaloJet20_v1, &tHlts.b_HLT_HIL1CastorMediumJetAK4CaloJet20_v1);
   t->SetBranchAddress("HLT_HIL1CastorMediumJetAK4CaloJet20_v1_Prescl", &tHlts.HLT_HIL1CastorMediumJetAK4CaloJet20_v1_Prescl, &tHlts.b_HLT_HIL1CastorMediumJetAK4CaloJet20_v1_Prescl);
   t->SetBranchAddress("HLT_HICastorMediumJetPixel_SingleTrack_v1", &tHlts.HLT_HICastorMediumJetPixel_SingleTrack_v1, &tHlts.b_HLT_HICastorMediumJetPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HICastorMediumJetPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HICastorMediumJetPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HICastorMediumJetPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotMinimumBiasHF2_AND_v1", &tHlts.HLT_HIUPCL1NotMinimumBiasHF2_AND_v1, &tHlts.b_HLT_HIUPCL1NotMinimumBiasHF2_AND_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotMinimumBiasHF2_AND_v1_Prescl", &tHlts.HLT_HIUPCL1NotMinimumBiasHF2_AND_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotMinimumBiasHF2_AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotMinimumBiasHF2_ANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1ZdcOR_BptxAND_v1", &tHlts.HLT_HIUPCL1ZdcOR_BptxAND_v1, &tHlts.b_HLT_HIUPCL1ZdcOR_BptxAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1ZdcOR_BptxAND_v1_Prescl", &tHlts.HLT_HIUPCL1ZdcOR_BptxAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1ZdcOR_BptxAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1ZdcOR_BptxANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1ZdcXOR_BptxAND_v1", &tHlts.HLT_HIUPCL1ZdcXOR_BptxAND_v1, &tHlts.b_HLT_HIUPCL1ZdcXOR_BptxAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1ZdcXOR_BptxAND_v1_Prescl", &tHlts.HLT_HIUPCL1ZdcXOR_BptxAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1ZdcXOR_BptxAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1ZdcXOR_BptxANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotZdcOR_BptxAND_v1", &tHlts.HLT_HIUPCL1NotZdcOR_BptxAND_v1, &tHlts.b_HLT_HIUPCL1NotZdcOR_BptxAND_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotZdcOR_BptxAND_v1_Prescl", &tHlts.HLT_HIUPCL1NotZdcOR_BptxAND_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotZdcOR_BptxAND_v1_Prescl);
   t->SetBranchAddress("HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1", &tHlts.HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIUPCL1NotZdcOR_BptxANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIZeroBias_v1", &tHlts.HLT_HIZeroBias_v1, &tHlts.b_HLT_HIZeroBias_v1);
   t->SetBranchAddress("HLT_HIZeroBias_v1_Prescl", &tHlts.HLT_HIZeroBias_v1_Prescl, &tHlts.b_HLT_HIZeroBias_v1_Prescl);
   t->SetBranchAddress("HLT_HICentralityVeto_v1", &tHlts.HLT_HICentralityVeto_v1, &tHlts.b_HLT_HICentralityVeto_v1);
   t->SetBranchAddress("HLT_HICentralityVeto_v1_Prescl", &tHlts.HLT_HICentralityVeto_v1_Prescl, &tHlts.b_HLT_HICentralityVeto_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Tech5_BPTX_PlusOnly_v1", &tHlts.HLT_HIL1Tech5_BPTX_PlusOnly_v1, &tHlts.b_HLT_HIL1Tech5_BPTX_PlusOnly_v1);
   t->SetBranchAddress("HLT_HIL1Tech5_BPTX_PlusOnly_v1_Prescl", &tHlts.HLT_HIL1Tech5_BPTX_PlusOnly_v1_Prescl, &tHlts.b_HLT_HIL1Tech5_BPTX_PlusOnly_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Tech6_BPTX_MinusOnly_v1", &tHlts.HLT_HIL1Tech6_BPTX_MinusOnly_v1, &tHlts.b_HLT_HIL1Tech6_BPTX_MinusOnly_v1);
   t->SetBranchAddress("HLT_HIL1Tech6_BPTX_MinusOnly_v1_Prescl", &tHlts.HLT_HIL1Tech6_BPTX_MinusOnly_v1_Prescl, &tHlts.b_HLT_HIL1Tech6_BPTX_MinusOnly_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Tech7_NoBPTX_v1", &tHlts.HLT_HIL1Tech7_NoBPTX_v1, &tHlts.b_HLT_HIL1Tech7_NoBPTX_v1);
   t->SetBranchAddress("HLT_HIL1Tech7_NoBPTX_v1_Prescl", &tHlts.HLT_HIL1Tech7_NoBPTX_v1_Prescl, &tHlts.b_HLT_HIL1Tech7_NoBPTX_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF1OR_v1", &tHlts.HLT_HIL1MinimumBiasHF1OR_v1, &tHlts.b_HLT_HIL1MinimumBiasHF1OR_v1);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF1OR_v1_Prescl", &tHlts.HLT_HIL1MinimumBiasHF1OR_v1_Prescl, &tHlts.b_HLT_HIL1MinimumBiasHF1OR_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF2OR_v1", &tHlts.HLT_HIL1MinimumBiasHF2OR_v1, &tHlts.b_HLT_HIL1MinimumBiasHF2OR_v1);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF2OR_v1_Prescl", &tHlts.HLT_HIL1MinimumBiasHF2OR_v1_Prescl, &tHlts.b_HLT_HIL1MinimumBiasHF2OR_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF1AND_v1", &tHlts.HLT_HIL1MinimumBiasHF1AND_v1, &tHlts.b_HLT_HIL1MinimumBiasHF1AND_v1);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF1AND_v1_Prescl", &tHlts.HLT_HIL1MinimumBiasHF1AND_v1_Prescl, &tHlts.b_HLT_HIL1MinimumBiasHF1AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF2AND_v1", &tHlts.HLT_HIL1MinimumBiasHF2AND_v1, &tHlts.b_HLT_HIL1MinimumBiasHF2AND_v1);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF2AND_v1_Prescl", &tHlts.HLT_HIL1MinimumBiasHF2AND_v1_Prescl, &tHlts.b_HLT_HIL1MinimumBiasHF2AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1", &tHlts.HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIL1MinimumBiasHF1ANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIZeroBiasPixel_SingleTrack_v1", &tHlts.HLT_HIZeroBiasPixel_SingleTrack_v1, &tHlts.b_HLT_HIZeroBiasPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIZeroBiasPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIZeroBiasPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIZeroBiasPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1", &tHlts.HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1, &tHlts.b_HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1);
   t->SetBranchAddress("HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1_Prescl", &tHlts.HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1_Prescl, &tHlts.b_HLT_HIL1Centralityext70100MinimumumBiasHF1AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1", &tHlts.HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIL1Centralityext70100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1", &tHlts.HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1, &tHlts.b_HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1);
   t->SetBranchAddress("HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1_Prescl", &tHlts.HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1_Prescl, &tHlts.b_HLT_HIL1Centralityext50100MinimumumBiasHF1AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1", &tHlts.HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIL1Centralityext50100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1", &tHlts.HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1, &tHlts.b_HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1);
   t->SetBranchAddress("HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1_Prescl", &tHlts.HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1_Prescl, &tHlts.b_HLT_HIL1Centralityext30100MinimumumBiasHF1AND_v1_Prescl);
   t->SetBranchAddress("HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1", &tHlts.HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1, &tHlts.b_HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl", &tHlts.HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_HIL1Centralityext30100MinimumumBiasHF1ANDPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_HIPhysics_v1", &tHlts.HLT_HIPhysics_v1, &tHlts.b_HLT_HIPhysics_v1);
   t->SetBranchAddress("HLT_HIPhysics_v1_Prescl", &tHlts.HLT_HIPhysics_v1_Prescl, &tHlts.b_HLT_HIPhysics_v1_Prescl);
   t->SetBranchAddress("HLT_HIRandom_v1", &tHlts.HLT_HIRandom_v1, &tHlts.b_HLT_HIRandom_v1);
   t->SetBranchAddress("HLT_HIRandom_v1_Prescl", &tHlts.HLT_HIRandom_v1_Prescl, &tHlts.b_HLT_HIRandom_v1_Prescl);
   t->SetBranchAddress("HLT_EcalCalibration_v1", &tHlts.HLT_EcalCalibration_v1, &tHlts.b_HLT_EcalCalibration_v1);
   t->SetBranchAddress("HLT_EcalCalibration_v1_Prescl", &tHlts.HLT_EcalCalibration_v1_Prescl, &tHlts.b_HLT_EcalCalibration_v1_Prescl);
   t->SetBranchAddress("HLT_HcalCalibration_v1", &tHlts.HLT_HcalCalibration_v1, &tHlts.b_HLT_HcalCalibration_v1);
   t->SetBranchAddress("HLT_HcalCalibration_v1_Prescl", &tHlts.HLT_HcalCalibration_v1_Prescl, &tHlts.b_HLT_HcalCalibration_v1_Prescl);
   t->SetBranchAddress("AlCa_EcalPhiSymForHI_v1", &tHlts.AlCa_EcalPhiSymForHI_v1, &tHlts.b_AlCa_EcalPhiSymForHI_v1);
   t->SetBranchAddress("AlCa_EcalPhiSymForHI_v1_Prescl", &tHlts.AlCa_EcalPhiSymForHI_v1_Prescl, &tHlts.b_AlCa_EcalPhiSymForHI_v1_Prescl);
   t->SetBranchAddress("AlCa_RPCMuonNoTriggersForHI_v1", &tHlts.AlCa_RPCMuonNoTriggersForHI_v1, &tHlts.b_AlCa_RPCMuonNoTriggersForHI_v1);
   t->SetBranchAddress("AlCa_RPCMuonNoTriggersForHI_v1_Prescl", &tHlts.AlCa_RPCMuonNoTriggersForHI_v1_Prescl, &tHlts.b_AlCa_RPCMuonNoTriggersForHI_v1_Prescl);
   t->SetBranchAddress("AlCa_RPCMuonNoHitsForHI_v1", &tHlts.AlCa_RPCMuonNoHitsForHI_v1, &tHlts.b_AlCa_RPCMuonNoHitsForHI_v1);
   t->SetBranchAddress("AlCa_RPCMuonNoHitsForHI_v1_Prescl", &tHlts.AlCa_RPCMuonNoHitsForHI_v1_Prescl, &tHlts.b_AlCa_RPCMuonNoHitsForHI_v1_Prescl);
   t->SetBranchAddress("AlCa_RPCMuonNormalisationForHI_v1", &tHlts.AlCa_RPCMuonNormalisationForHI_v1, &tHlts.b_AlCa_RPCMuonNormalisationForHI_v1);
   t->SetBranchAddress("AlCa_RPCMuonNormalisationForHI_v1_Prescl", &tHlts.AlCa_RPCMuonNormalisationForHI_v1_Prescl, &tHlts.b_AlCa_RPCMuonNormalisationForHI_v1_Prescl);
   t->SetBranchAddress("AlCa_LumiPixels_Random_v1", &tHlts.AlCa_LumiPixels_Random_v1, &tHlts.b_AlCa_LumiPixels_Random_v1);
   t->SetBranchAddress("AlCa_LumiPixels_Random_v1_Prescl", &tHlts.AlCa_LumiPixels_Random_v1_Prescl, &tHlts.b_AlCa_LumiPixels_Random_v1_Prescl);
   t->SetBranchAddress("AlCa_LumiPixels_ZeroBias_v2", &tHlts.AlCa_LumiPixels_ZeroBias_v2, &tHlts.b_AlCa_LumiPixels_ZeroBias_v2);
   t->SetBranchAddress("AlCa_LumiPixels_ZeroBias_v2_Prescl", &tHlts.AlCa_LumiPixels_ZeroBias_v2_Prescl, &tHlts.b_AlCa_LumiPixels_ZeroBias_v2_Prescl);
   t->SetBranchAddress("HLTriggerFinalPath", &tHlts.HLTriggerFinalPath, &tHlts.b_HLTriggerFinalPath);
   t->SetBranchAddress("HLTriggerFinalPath_Prescl", &tHlts.HLTriggerFinalPath_Prescl, &tHlts.b_HLTriggerFinalPath_Prescl);
   t->SetBranchAddress("raw2digi_step", &tHlts.raw2digi_step, &tHlts.b_raw2digi_step);
   t->SetBranchAddress("raw2digi_step_Prescl", &tHlts.raw2digi_step_Prescl, &tHlts.b_raw2digi_step_Prescl);
   t->SetBranchAddress("L1Reco_step", &tHlts.L1Reco_step, &tHlts.b_L1Reco_step);
   t->SetBranchAddress("L1Reco_step_Prescl", &tHlts.L1Reco_step_Prescl, &tHlts.b_L1Reco_step_Prescl);
   t->SetBranchAddress("L1_BptxMinus_NotBptxPlus", &tHlts.L1_BptxMinus_NotBptxPlus, &tHlts.b_L1_BptxMinus_NotBptxPlus);
   t->SetBranchAddress("L1_BptxMinus_NotBptxPlus_Prescl", &tHlts.L1_BptxMinus_NotBptxPlus_Prescl, &tHlts.b_L1_BptxMinus_NotBptxPlus_Prescl);
   t->SetBranchAddress("L1_BptxPlusORMinus", &tHlts.L1_BptxPlusORMinus, &tHlts.b_L1_BptxPlusORMinus);
   t->SetBranchAddress("L1_BptxPlusORMinus_Prescl", &tHlts.L1_BptxPlusORMinus_Prescl, &tHlts.b_L1_BptxPlusORMinus_Prescl);
   t->SetBranchAddress("L1_BptxPlus_NotBptxMinus", &tHlts.L1_BptxPlus_NotBptxMinus, &tHlts.b_L1_BptxPlus_NotBptxMinus);
   t->SetBranchAddress("L1_BptxPlus_NotBptxMinus_Prescl", &tHlts.L1_BptxPlus_NotBptxMinus_Prescl, &tHlts.b_L1_BptxPlus_NotBptxMinus_Prescl);
   t->SetBranchAddress("L1_CastorHighJet_BptxAND", &tHlts.L1_CastorHighJet_BptxAND, &tHlts.b_L1_CastorHighJet_BptxAND);
   t->SetBranchAddress("L1_CastorHighJet_BptxAND_Prescl", &tHlts.L1_CastorHighJet_BptxAND_Prescl, &tHlts.b_L1_CastorHighJet_BptxAND_Prescl);
   t->SetBranchAddress("L1_CastorMediumJet_BptxAND", &tHlts.L1_CastorMediumJet_BptxAND, &tHlts.b_L1_CastorMediumJet_BptxAND);
   t->SetBranchAddress("L1_CastorMediumJet_BptxAND_Prescl", &tHlts.L1_CastorMediumJet_BptxAND_Prescl, &tHlts.b_L1_CastorMediumJet_BptxAND_Prescl);
   t->SetBranchAddress("L1_CastorMuon_BptxAND", &tHlts.L1_CastorMuon_BptxAND, &tHlts.b_L1_CastorMuon_BptxAND);
   t->SetBranchAddress("L1_CastorMuon_BptxAND_Prescl", &tHlts.L1_CastorMuon_BptxAND_Prescl, &tHlts.b_L1_CastorMuon_BptxAND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext0_100_HFplusORminusTH0", &tHlts.L1_Centrality_ext0_100_HFplusORminusTH0, &tHlts.b_L1_Centrality_ext0_100_HFplusORminusTH0);
   t->SetBranchAddress("L1_Centrality_ext0_100_HFplusORminusTH0_Prescl", &tHlts.L1_Centrality_ext0_100_HFplusORminusTH0_Prescl, &tHlts.b_L1_Centrality_ext0_100_HFplusORminusTH0_Prescl);
   t->SetBranchAddress("L1_Centrality_ext0_100_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext0_100_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext0_100_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext0_100_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext0_100_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext0_100_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext0_10_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext0_10_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext0_10_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext0_10_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext0_10_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext0_10_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext0_5_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext0_5_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext0_5_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext0_5_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext0_5_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext0_5_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext30_100_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext30_100_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext30_100_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext30_100_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext30_100_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext30_100_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext30_50_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext30_50_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext30_50_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext30_50_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext30_50_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext30_50_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext50_100_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext50_100_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext50_100_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext50_100_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext50_100_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext50_100_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_Centrality_ext70_100_MinimumumBiasHF1_AND", &tHlts.L1_Centrality_ext70_100_MinimumumBiasHF1_AND, &tHlts.b_L1_Centrality_ext70_100_MinimumumBiasHF1_AND);
   t->SetBranchAddress("L1_Centrality_ext70_100_MinimumumBiasHF1_AND_Prescl", &tHlts.L1_Centrality_ext70_100_MinimumumBiasHF1_AND_Prescl, &tHlts.b_L1_Centrality_ext70_100_MinimumumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_DoubleEG10", &tHlts.L1_DoubleEG10, &tHlts.b_L1_DoubleEG10);
   t->SetBranchAddress("L1_DoubleEG10_Prescl", &tHlts.L1_DoubleEG10_Prescl, &tHlts.b_L1_DoubleEG10_Prescl);
   t->SetBranchAddress("L1_DoubleEG2_BptxAND", &tHlts.L1_DoubleEG2_BptxAND, &tHlts.b_L1_DoubleEG2_BptxAND);
   t->SetBranchAddress("L1_DoubleEG2_BptxAND_Prescl", &tHlts.L1_DoubleEG2_BptxAND_Prescl, &tHlts.b_L1_DoubleEG2_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleEG2_NotMinimumBiasHF2_AND", &tHlts.L1_DoubleEG2_NotMinimumBiasHF2_AND, &tHlts.b_L1_DoubleEG2_NotMinimumBiasHF2_AND);
   t->SetBranchAddress("L1_DoubleEG2_NotMinimumBiasHF2_AND_Prescl", &tHlts.L1_DoubleEG2_NotMinimumBiasHF2_AND_Prescl, &tHlts.b_L1_DoubleEG2_NotMinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_DoubleEG2_NotZdc_AND_BptxAND", &tHlts.L1_DoubleEG2_NotZdc_AND_BptxAND, &tHlts.b_L1_DoubleEG2_NotZdc_AND_BptxAND);
   t->SetBranchAddress("L1_DoubleEG2_NotZdc_AND_BptxAND_Prescl", &tHlts.L1_DoubleEG2_NotZdc_AND_BptxAND_Prescl, &tHlts.b_L1_DoubleEG2_NotZdc_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleEG5_BptxAND", &tHlts.L1_DoubleEG5_BptxAND, &tHlts.b_L1_DoubleEG5_BptxAND);
   t->SetBranchAddress("L1_DoubleEG5_BptxAND_Prescl", &tHlts.L1_DoubleEG5_BptxAND_Prescl, &tHlts.b_L1_DoubleEG5_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleEG8_BptxAND", &tHlts.L1_DoubleEG8_BptxAND, &tHlts.b_L1_DoubleEG8_BptxAND);
   t->SetBranchAddress("L1_DoubleEG8_BptxAND_Prescl", &tHlts.L1_DoubleEG8_BptxAND_Prescl, &tHlts.b_L1_DoubleEG8_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleEG_13_7", &tHlts.L1_DoubleEG_13_7, &tHlts.b_L1_DoubleEG_13_7);
   t->SetBranchAddress("L1_DoubleEG_13_7_Prescl", &tHlts.L1_DoubleEG_13_7_Prescl, &tHlts.b_L1_DoubleEG_13_7_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_BptxAND", &tHlts.L1_DoubleMu0_BptxAND, &tHlts.b_L1_DoubleMu0_BptxAND);
   t->SetBranchAddress("L1_DoubleMu0_BptxAND_Prescl", &tHlts.L1_DoubleMu0_BptxAND_Prescl, &tHlts.b_L1_DoubleMu0_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_HFplusANDminusTH0_BptxAND", &tHlts.L1_DoubleMu0_HFplusANDminusTH0_BptxAND, &tHlts.b_L1_DoubleMu0_HFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_DoubleMu0_HFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_DoubleMu0_HFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_DoubleMu0_HFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND", &tHlts.L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND, &tHlts.b_L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND);
   t->SetBranchAddress("L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND_Prescl", &tHlts.L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND_Prescl, &tHlts.b_L1_DoubleMu0_HFplusANDminusTH0_Centrliatiy_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND", &tHlts.L1_DoubleMu0_MinimumBiasHF1_AND, &tHlts.b_L1_DoubleMu0_MinimumBiasHF1_AND);
   t->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_Prescl", &tHlts.L1_DoubleMu0_MinimumBiasHF1_AND_Prescl, &tHlts.b_L1_DoubleMu0_MinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND", &tHlts.L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND, &tHlts.b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND);
   t->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND_Prescl", &tHlts.L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND_Prescl, &tHlts.b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext0_30_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND", &tHlts.L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND, &tHlts.b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_DoubleMu0_MinimumBiasHF1_AND_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMu10_BptxAND", &tHlts.L1_DoubleMu10_BptxAND, &tHlts.b_L1_DoubleMu10_BptxAND);
   t->SetBranchAddress("L1_DoubleMu10_BptxAND_Prescl", &tHlts.L1_DoubleMu10_BptxAND_Prescl, &tHlts.b_L1_DoubleMu10_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND", &tHlts.L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND, &tHlts.b_L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_DoubleMuOpenNotHFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen_BptxAND", &tHlts.L1_DoubleMuOpen_BptxAND, &tHlts.b_L1_DoubleMuOpen_BptxAND);
   t->SetBranchAddress("L1_DoubleMuOpen_BptxAND_Prescl", &tHlts.L1_DoubleMuOpen_BptxAND_Prescl, &tHlts.b_L1_DoubleMuOpen_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF1_AND", &tHlts.L1_DoubleMuOpen_NotMinimumBiasHF1_AND, &tHlts.b_L1_DoubleMuOpen_NotMinimumBiasHF1_AND);
   t->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF1_AND_Prescl", &tHlts.L1_DoubleMuOpen_NotMinimumBiasHF1_AND_Prescl, &tHlts.b_L1_DoubleMuOpen_NotMinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF2_AND", &tHlts.L1_DoubleMuOpen_NotMinimumBiasHF2_AND, &tHlts.b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND);
   t->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF2_AND_Prescl", &tHlts.L1_DoubleMuOpen_NotMinimumBiasHF2_AND_Prescl, &tHlts.b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen_NotZdc_AND_BptxAND", &tHlts.L1_DoubleMuOpen_NotZdc_AND_BptxAND, &tHlts.b_L1_DoubleMuOpen_NotZdc_AND_BptxAND);
   t->SetBranchAddress("L1_DoubleMuOpen_NotZdc_AND_BptxAND_Prescl", &tHlts.L1_DoubleMuOpen_NotZdc_AND_BptxAND_Prescl, &tHlts.b_L1_DoubleMuOpen_NotZdc_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_EG2_NotMinimumBiasHF2_AND", &tHlts.L1_EG2_NotMinimumBiasHF2_AND, &tHlts.b_L1_EG2_NotMinimumBiasHF2_AND);
   t->SetBranchAddress("L1_EG2_NotMinimumBiasHF2_AND_Prescl", &tHlts.L1_EG2_NotMinimumBiasHF2_AND_Prescl, &tHlts.b_L1_EG2_NotMinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_EG5_NotMinimumBiasHF2_AND", &tHlts.L1_EG5_NotMinimumBiasHF2_AND, &tHlts.b_L1_EG5_NotMinimumBiasHF2_AND);
   t->SetBranchAddress("L1_EG5_NotMinimumBiasHF2_AND_Prescl", &tHlts.L1_EG5_NotMinimumBiasHF2_AND_Prescl, &tHlts.b_L1_EG5_NotMinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_HF_2reg_plusANDminusTH0", &tHlts.L1_HF_2reg_plusANDminusTH0, &tHlts.b_L1_HF_2reg_plusANDminusTH0);
   t->SetBranchAddress("L1_HF_2reg_plusANDminusTH0_Prescl", &tHlts.L1_HF_2reg_plusANDminusTH0_Prescl, &tHlts.b_L1_HF_2reg_plusANDminusTH0_Prescl);
   t->SetBranchAddress("L1_HF_2reg_plusANDminusTH1", &tHlts.L1_HF_2reg_plusANDminusTH1, &tHlts.b_L1_HF_2reg_plusANDminusTH1);
   t->SetBranchAddress("L1_HF_2reg_plusANDminusTH1_Prescl", &tHlts.L1_HF_2reg_plusANDminusTH1_Prescl, &tHlts.b_L1_HF_2reg_plusANDminusTH1_Prescl);
   t->SetBranchAddress("L1_HFplusANDminusTH0", &tHlts.L1_HFplusANDminusTH0, &tHlts.b_L1_HFplusANDminusTH0);
   t->SetBranchAddress("L1_HFplusANDminusTH0_Prescl", &tHlts.L1_HFplusANDminusTH0_Prescl, &tHlts.b_L1_HFplusANDminusTH0_Prescl);
   t->SetBranchAddress("L1_HFplusANDminusTH1", &tHlts.L1_HFplusANDminusTH1, &tHlts.b_L1_HFplusANDminusTH1);
   t->SetBranchAddress("L1_HFplusANDminusTH1_Prescl", &tHlts.L1_HFplusANDminusTH1_Prescl, &tHlts.b_L1_HFplusANDminusTH1_Prescl);
   t->SetBranchAddress("L1_HFplusORminusTH0", &tHlts.L1_HFplusORminusTH0, &tHlts.b_L1_HFplusORminusTH0);
   t->SetBranchAddress("L1_HFplusORminusTH0_Prescl", &tHlts.L1_HFplusORminusTH0_Prescl, &tHlts.b_L1_HFplusORminusTH0_Prescl);
   t->SetBranchAddress("L1_HFplusORminusTH1", &tHlts.L1_HFplusORminusTH1, &tHlts.b_L1_HFplusORminusTH1);
   t->SetBranchAddress("L1_HFplusORminusTH1_Prescl", &tHlts.L1_HFplusORminusTH1_Prescl, &tHlts.b_L1_HFplusORminusTH1_Prescl);
   t->SetBranchAddress("L1_MinimumBiasHF1_AND", &tHlts.L1_MinimumBiasHF1_AND, &tHlts.b_L1_MinimumBiasHF1_AND);
   t->SetBranchAddress("L1_MinimumBiasHF1_AND_Prescl", &tHlts.L1_MinimumBiasHF1_AND_Prescl, &tHlts.b_L1_MinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_MinimumBiasHF1_OR", &tHlts.L1_MinimumBiasHF1_OR, &tHlts.b_L1_MinimumBiasHF1_OR);
   t->SetBranchAddress("L1_MinimumBiasHF1_OR_Prescl", &tHlts.L1_MinimumBiasHF1_OR_Prescl, &tHlts.b_L1_MinimumBiasHF1_OR_Prescl);
   t->SetBranchAddress("L1_MinimumBiasHF1_OR_NotInUse", &tHlts.L1_MinimumBiasHF1_OR_NotInUse, &tHlts.b_L1_MinimumBiasHF1_OR_NotInUse);
   t->SetBranchAddress("L1_MinimumBiasHF1_OR_NotInUse_Prescl", &tHlts.L1_MinimumBiasHF1_OR_NotInUse_Prescl, &tHlts.b_L1_MinimumBiasHF1_OR_NotInUse_Prescl);
   t->SetBranchAddress("L1_MinimumBiasHF1_XOR", &tHlts.L1_MinimumBiasHF1_XOR, &tHlts.b_L1_MinimumBiasHF1_XOR);
   t->SetBranchAddress("L1_MinimumBiasHF1_XOR_Prescl", &tHlts.L1_MinimumBiasHF1_XOR_Prescl, &tHlts.b_L1_MinimumBiasHF1_XOR_Prescl);
   t->SetBranchAddress("L1_MinimumBiasHF2_AND", &tHlts.L1_MinimumBiasHF2_AND, &tHlts.b_L1_MinimumBiasHF2_AND);
   t->SetBranchAddress("L1_MinimumBiasHF2_AND_Prescl", &tHlts.L1_MinimumBiasHF2_AND_Prescl, &tHlts.b_L1_MinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_MinimumBiasHF2_OR", &tHlts.L1_MinimumBiasHF2_OR, &tHlts.b_L1_MinimumBiasHF2_OR);
   t->SetBranchAddress("L1_MinimumBiasHF2_OR_Prescl", &tHlts.L1_MinimumBiasHF2_OR_Prescl, &tHlts.b_L1_MinimumBiasHF2_OR_Prescl);
   t->SetBranchAddress("L1_MuOpen_NotMinimumBiasHF1_AND", &tHlts.L1_MuOpen_NotMinimumBiasHF1_AND, &tHlts.b_L1_MuOpen_NotMinimumBiasHF1_AND);
   t->SetBranchAddress("L1_MuOpen_NotMinimumBiasHF1_AND_Prescl", &tHlts.L1_MuOpen_NotMinimumBiasHF1_AND_Prescl, &tHlts.b_L1_MuOpen_NotMinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_MuOpen_NotMinimumBiasHF2_AND", &tHlts.L1_MuOpen_NotMinimumBiasHF2_AND, &tHlts.b_L1_MuOpen_NotMinimumBiasHF2_AND);
   t->SetBranchAddress("L1_MuOpen_NotMinimumBiasHF2_AND_Prescl", &tHlts.L1_MuOpen_NotMinimumBiasHF2_AND_Prescl, &tHlts.b_L1_MuOpen_NotMinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_MuOpen_NotZdc_AND_BptxAND", &tHlts.L1_MuOpen_NotZdc_AND_BptxAND, &tHlts.b_L1_MuOpen_NotZdc_AND_BptxAND);
   t->SetBranchAddress("L1_MuOpen_NotZdc_AND_BptxAND_Prescl", &tHlts.L1_MuOpen_NotZdc_AND_BptxAND_Prescl, &tHlts.b_L1_MuOpen_NotZdc_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_NotHFplusANDminusTH0_BptxAND", &tHlts.L1_NotHFplusANDminusTH0_BptxAND, &tHlts.b_L1_NotHFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_NotHFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_NotHFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_NotHFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_NotMinimumBiasHF1_OR", &tHlts.L1_NotMinimumBiasHF1_OR, &tHlts.b_L1_NotMinimumBiasHF1_OR);
   t->SetBranchAddress("L1_NotMinimumBiasHF1_OR_Prescl", &tHlts.L1_NotMinimumBiasHF1_OR_Prescl, &tHlts.b_L1_NotMinimumBiasHF1_OR_Prescl);
   t->SetBranchAddress("L1_NotMinimumBiasHF2_AND", &tHlts.L1_NotMinimumBiasHF2_AND, &tHlts.b_L1_NotMinimumBiasHF2_AND);
   t->SetBranchAddress("L1_NotMinimumBiasHF2_AND_Prescl", &tHlts.L1_NotMinimumBiasHF2_AND_Prescl, &tHlts.b_L1_NotMinimumBiasHF2_AND_Prescl);
   t->SetBranchAddress("L1_NotZdcOR_BptxAND", &tHlts.L1_NotZdcOR_BptxAND, &tHlts.b_L1_NotZdcOR_BptxAND);
   t->SetBranchAddress("L1_NotZdcOR_BptxAND_Prescl", &tHlts.L1_NotZdcOR_BptxAND_Prescl, &tHlts.b_L1_NotZdcOR_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG12_BptxAND", &tHlts.L1_SingleEG12_BptxAND, &tHlts.b_L1_SingleEG12_BptxAND);
   t->SetBranchAddress("L1_SingleEG12_BptxAND_Prescl", &tHlts.L1_SingleEG12_BptxAND_Prescl, &tHlts.b_L1_SingleEG12_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG15_BptxAND", &tHlts.L1_SingleEG15_BptxAND, &tHlts.b_L1_SingleEG15_BptxAND);
   t->SetBranchAddress("L1_SingleEG15_BptxAND_Prescl", &tHlts.L1_SingleEG15_BptxAND_Prescl, &tHlts.b_L1_SingleEG15_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG21_BptxAND", &tHlts.L1_SingleEG21_BptxAND, &tHlts.b_L1_SingleEG21_BptxAND);
   t->SetBranchAddress("L1_SingleEG21_BptxAND_Prescl", &tHlts.L1_SingleEG21_BptxAND_Prescl, &tHlts.b_L1_SingleEG21_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG21_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleEG21_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleEG21_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleEG21_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleEG21_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleEG21_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG21_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleEG21_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleEG21_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleEG21_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleEG21_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleEG21_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG2_NotZDC_AND_BptxAND", &tHlts.L1_SingleEG2_NotZDC_AND_BptxAND, &tHlts.b_L1_SingleEG2_NotZDC_AND_BptxAND);
   t->SetBranchAddress("L1_SingleEG2_NotZDC_AND_BptxAND_Prescl", &tHlts.L1_SingleEG2_NotZDC_AND_BptxAND_Prescl, &tHlts.b_L1_SingleEG2_NotZDC_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG30_BptxAND", &tHlts.L1_SingleEG30_BptxAND, &tHlts.b_L1_SingleEG30_BptxAND);
   t->SetBranchAddress("L1_SingleEG30_BptxAND_Prescl", &tHlts.L1_SingleEG30_BptxAND_Prescl, &tHlts.b_L1_SingleEG30_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG3_BptxAND", &tHlts.L1_SingleEG3_BptxAND, &tHlts.b_L1_SingleEG3_BptxAND);
   t->SetBranchAddress("L1_SingleEG3_BptxAND_Prescl", &tHlts.L1_SingleEG3_BptxAND_Prescl, &tHlts.b_L1_SingleEG3_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG3_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleEG3_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleEG3_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleEG3_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleEG3_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleEG3_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG3_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleEG3_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleEG3_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleEG3_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleEG3_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleEG3_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG5", &tHlts.L1_SingleEG5, &tHlts.b_L1_SingleEG5);
   t->SetBranchAddress("L1_SingleEG5_Prescl", &tHlts.L1_SingleEG5_Prescl, &tHlts.b_L1_SingleEG5_Prescl);
   t->SetBranchAddress("L1_SingleEG5_BptxAND", &tHlts.L1_SingleEG5_BptxAND, &tHlts.b_L1_SingleEG5_BptxAND);
   t->SetBranchAddress("L1_SingleEG5_BptxAND_Prescl", &tHlts.L1_SingleEG5_BptxAND_Prescl, &tHlts.b_L1_SingleEG5_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG5_NotZdc_AND_BptxAND", &tHlts.L1_SingleEG5_NotZdc_AND_BptxAND, &tHlts.b_L1_SingleEG5_NotZdc_AND_BptxAND);
   t->SetBranchAddress("L1_SingleEG5_NotZdc_AND_BptxAND_Prescl", &tHlts.L1_SingleEG5_NotZdc_AND_BptxAND_Prescl, &tHlts.b_L1_SingleEG5_NotZdc_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG7_BptxAND", &tHlts.L1_SingleEG7_BptxAND, &tHlts.b_L1_SingleEG7_BptxAND);
   t->SetBranchAddress("L1_SingleEG7_BptxAND_Prescl", &tHlts.L1_SingleEG7_BptxAND_Prescl, &tHlts.b_L1_SingleEG7_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG7_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleEG7_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleEG7_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleEG7_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleEG7_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleEG7_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG7_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleEG7_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleEG7_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleEG7_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleEG7_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleEG7_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG3_BptxAND", &tHlts.L1_SingleIsoEG3_BptxAND, &tHlts.b_L1_SingleIsoEG3_BptxAND);
   t->SetBranchAddress("L1_SingleIsoEG3_BptxAND_Prescl", &tHlts.L1_SingleIsoEG3_BptxAND_Prescl, &tHlts.b_L1_SingleIsoEG3_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG7_BptxAND", &tHlts.L1_SingleIsoEG7_BptxAND, &tHlts.b_L1_SingleIsoEG7_BptxAND);
   t->SetBranchAddress("L1_SingleIsoEG7_BptxAND_Prescl", &tHlts.L1_SingleIsoEG7_BptxAND_Prescl, &tHlts.b_L1_SingleIsoEG7_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu12_BptxAND", &tHlts.L1_SingleMu12_BptxAND, &tHlts.b_L1_SingleMu12_BptxAND);
   t->SetBranchAddress("L1_SingleMu12_BptxAND_Prescl", &tHlts.L1_SingleMu12_BptxAND_Prescl, &tHlts.b_L1_SingleMu12_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu12_HFplusANDminusTH0_BptxAND", &tHlts.L1_SingleMu12_HFplusANDminusTH0_BptxAND, &tHlts.b_L1_SingleMu12_HFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_SingleMu12_HFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_SingleMu12_HFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_SingleMu12_HFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu12_MinimumBiasHF1_AND_BptxAND", &tHlts.L1_SingleMu12_MinimumBiasHF1_AND_BptxAND, &tHlts.b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND);
   t->SetBranchAddress("L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl", &tHlts.L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl, &tHlts.b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu12_SingleEG7", &tHlts.L1_SingleMu12_SingleEG7, &tHlts.b_L1_SingleMu12_SingleEG7);
   t->SetBranchAddress("L1_SingleMu12_SingleEG7_Prescl", &tHlts.L1_SingleMu12_SingleEG7_Prescl, &tHlts.b_L1_SingleMu12_SingleEG7_Prescl);
   t->SetBranchAddress("L1_SingleMu16_BptxAND", &tHlts.L1_SingleMu16_BptxAND, &tHlts.b_L1_SingleMu16_BptxAND);
   t->SetBranchAddress("L1_SingleMu16_BptxAND_Prescl", &tHlts.L1_SingleMu16_BptxAND_Prescl, &tHlts.b_L1_SingleMu16_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu16_HFplusANDminusTH0_BptxAND", &tHlts.L1_SingleMu16_HFplusANDminusTH0_BptxAND, &tHlts.b_L1_SingleMu16_HFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_SingleMu16_HFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_SingleMu16_HFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_SingleMu16_HFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu16_MinimumBiasHF1_AND_BptxAND", &tHlts.L1_SingleMu16_MinimumBiasHF1_AND_BptxAND, &tHlts.b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND);
   t->SetBranchAddress("L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl", &tHlts.L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl, &tHlts.b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu3_HFplusANDminusTH0_BptxAND", &tHlts.L1_SingleMu3_HFplusANDminusTH0_BptxAND, &tHlts.b_L1_SingleMu3_HFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_SingleMu3_HFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_SingleMu3_HFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_SingleMu3_HFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu3_MinimumBiasHF1_AND", &tHlts.L1_SingleMu3_MinimumBiasHF1_AND, &tHlts.b_L1_SingleMu3_MinimumBiasHF1_AND);
   t->SetBranchAddress("L1_SingleMu3_MinimumBiasHF1_AND_Prescl", &tHlts.L1_SingleMu3_MinimumBiasHF1_AND_Prescl, &tHlts.b_L1_SingleMu3_MinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_SingleMu3_SingleCenJet28", &tHlts.L1_SingleMu3_SingleCenJet28, &tHlts.b_L1_SingleMu3_SingleCenJet28);
   t->SetBranchAddress("L1_SingleMu3_SingleCenJet28_Prescl", &tHlts.L1_SingleMu3_SingleCenJet28_Prescl, &tHlts.b_L1_SingleMu3_SingleCenJet28_Prescl);
   t->SetBranchAddress("L1_SingleMu3_SingleCenJet32", &tHlts.L1_SingleMu3_SingleCenJet32, &tHlts.b_L1_SingleMu3_SingleCenJet32);
   t->SetBranchAddress("L1_SingleMu3_SingleCenJet32_Prescl", &tHlts.L1_SingleMu3_SingleCenJet32_Prescl, &tHlts.b_L1_SingleMu3_SingleCenJet32_Prescl);
   t->SetBranchAddress("L1_SingleMu3_SingleCenJet40", &tHlts.L1_SingleMu3_SingleCenJet40, &tHlts.b_L1_SingleMu3_SingleCenJet40);
   t->SetBranchAddress("L1_SingleMu3_SingleCenJet40_Prescl", &tHlts.L1_SingleMu3_SingleCenJet40_Prescl, &tHlts.b_L1_SingleMu3_SingleCenJet40_Prescl);
   t->SetBranchAddress("L1_SingleMu3_SingleEG12", &tHlts.L1_SingleMu3_SingleEG12, &tHlts.b_L1_SingleMu3_SingleEG12);
   t->SetBranchAddress("L1_SingleMu3_SingleEG12_Prescl", &tHlts.L1_SingleMu3_SingleEG12_Prescl, &tHlts.b_L1_SingleMu3_SingleEG12_Prescl);
   t->SetBranchAddress("L1_SingleMu3_SingleEG20", &tHlts.L1_SingleMu3_SingleEG20, &tHlts.b_L1_SingleMu3_SingleEG20);
   t->SetBranchAddress("L1_SingleMu3_SingleEG20_Prescl", &tHlts.L1_SingleMu3_SingleEG20_Prescl, &tHlts.b_L1_SingleMu3_SingleEG20_Prescl);
   t->SetBranchAddress("L1_SingleMu5_HFplusANDminusTH0_BptxAND", &tHlts.L1_SingleMu5_HFplusANDminusTH0_BptxAND, &tHlts.b_L1_SingleMu5_HFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_SingleMu5_HFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_SingleMu5_HFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_SingleMu5_HFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu5_MinimumBiasHF1_AND", &tHlts.L1_SingleMu5_MinimumBiasHF1_AND, &tHlts.b_L1_SingleMu5_MinimumBiasHF1_AND);
   t->SetBranchAddress("L1_SingleMu5_MinimumBiasHF1_AND_Prescl", &tHlts.L1_SingleMu5_MinimumBiasHF1_AND_Prescl, &tHlts.b_L1_SingleMu5_MinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_SingleMu5_SingleEG20", &tHlts.L1_SingleMu5_SingleEG20, &tHlts.b_L1_SingleMu5_SingleEG20);
   t->SetBranchAddress("L1_SingleMu5_SingleEG20_Prescl", &tHlts.L1_SingleMu5_SingleEG20_Prescl, &tHlts.b_L1_SingleMu5_SingleEG20_Prescl);
   t->SetBranchAddress("L1_SingleMu7_HFplusANDminusTH0_BptxAND", &tHlts.L1_SingleMu7_HFplusANDminusTH0_BptxAND, &tHlts.b_L1_SingleMu7_HFplusANDminusTH0_BptxAND);
   t->SetBranchAddress("L1_SingleMu7_HFplusANDminusTH0_BptxAND_Prescl", &tHlts.L1_SingleMu7_HFplusANDminusTH0_BptxAND_Prescl, &tHlts.b_L1_SingleMu7_HFplusANDminusTH0_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu7_MinimumBiasHF1_AND", &tHlts.L1_SingleMu7_MinimumBiasHF1_AND, &tHlts.b_L1_SingleMu7_MinimumBiasHF1_AND);
   t->SetBranchAddress("L1_SingleMu7_MinimumBiasHF1_AND_Prescl", &tHlts.L1_SingleMu7_MinimumBiasHF1_AND_Prescl, &tHlts.b_L1_SingleMu7_MinimumBiasHF1_AND_Prescl);
   t->SetBranchAddress("L1_SingleMu7_SingleEG12", &tHlts.L1_SingleMu7_SingleEG12, &tHlts.b_L1_SingleMu7_SingleEG12);
   t->SetBranchAddress("L1_SingleMu7_SingleEG12_Prescl", &tHlts.L1_SingleMu7_SingleEG12_Prescl, &tHlts.b_L1_SingleMu7_SingleEG12_Prescl);
   t->SetBranchAddress("L1_SingleMuOpen", &tHlts.L1_SingleMuOpen, &tHlts.b_L1_SingleMuOpen);
   t->SetBranchAddress("L1_SingleMuOpen_Prescl", &tHlts.L1_SingleMuOpen_Prescl, &tHlts.b_L1_SingleMuOpen_Prescl);
   t->SetBranchAddress("L1_SingleMuOpen_BptxAND", &tHlts.L1_SingleMuOpen_BptxAND, &tHlts.b_L1_SingleMuOpen_BptxAND);
   t->SetBranchAddress("L1_SingleMuOpen_BptxAND_Prescl", &tHlts.L1_SingleMuOpen_BptxAND_Prescl, &tHlts.b_L1_SingleMuOpen_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet16_BptxAND", &tHlts.L1_SingleS1Jet16_BptxAND, &tHlts.b_L1_SingleS1Jet16_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet16_BptxAND_Prescl", &tHlts.L1_SingleS1Jet16_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet16_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet16_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleS1Jet16_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleS1Jet16_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet16_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet16_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet16_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet16_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleS1Jet16_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleS1Jet16_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet16_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet16_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet16_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet28_BptxAND", &tHlts.L1_SingleS1Jet28_BptxAND, &tHlts.b_L1_SingleS1Jet28_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet28_BptxAND_Prescl", &tHlts.L1_SingleS1Jet28_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet28_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet28_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleS1Jet28_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleS1Jet28_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet28_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet28_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet28_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet28_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleS1Jet28_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleS1Jet28_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet28_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet28_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet28_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet32_BptxAND", &tHlts.L1_SingleS1Jet32_BptxAND, &tHlts.b_L1_SingleS1Jet32_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet32_BptxAND_Prescl", &tHlts.L1_SingleS1Jet32_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet32_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet32_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleS1Jet32_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleS1Jet32_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet32_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet32_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet32_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet32_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleS1Jet32_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleS1Jet32_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet32_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet32_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet32_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet36_BptxAND", &tHlts.L1_SingleS1Jet36_BptxAND, &tHlts.b_L1_SingleS1Jet36_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet36_BptxAND_Prescl", &tHlts.L1_SingleS1Jet36_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet36_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet40_BptxAND", &tHlts.L1_SingleS1Jet40_BptxAND, &tHlts.b_L1_SingleS1Jet40_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet40_BptxAND_Prescl", &tHlts.L1_SingleS1Jet40_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet40_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet44_BptxAND", &tHlts.L1_SingleJet44_BptxAND, &tHlts.b_L1_SingleJet44_BptxAND);
   t->SetBranchAddress("L1_SingleJet44_BptxAND_Prescl", &tHlts.L1_SingleJet44_BptxAND_Prescl, &tHlts.b_L1_SingleJet44_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet44_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleS1Jet44_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleS1Jet44_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet44_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet44_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet44_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet44_Centrality_ext50_100_BptxAND", &tHlts.L1_SingleS1Jet44_Centrality_ext50_100_BptxAND, &tHlts.b_L1_SingleS1Jet44_Centrality_ext50_100_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet44_Centrality_ext50_100_BptxAND_Prescl", &tHlts.L1_SingleS1Jet44_Centrality_ext50_100_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet44_Centrality_ext50_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet48_BptxAND", &tHlts.L1_SingleS1Jet48_BptxAND, &tHlts.b_L1_SingleS1Jet48_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet48_BptxAND_Prescl", &tHlts.L1_SingleS1Jet48_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet48_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet52_BptxAND", &tHlts.L1_SingleS1Jet52_BptxAND, &tHlts.b_L1_SingleS1Jet52_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet52_BptxAND_Prescl", &tHlts.L1_SingleS1Jet52_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet52_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet56_BptxAND", &tHlts.L1_SingleS1Jet56_BptxAND, &tHlts.b_L1_SingleS1Jet56_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet56_BptxAND_Prescl", &tHlts.L1_SingleS1Jet56_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet56_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1Jet64_BptxAND", &tHlts.L1_SingleS1Jet64_BptxAND, &tHlts.b_L1_SingleS1Jet64_BptxAND);
   t->SetBranchAddress("L1_SingleS1Jet64_BptxAND_Prescl", &tHlts.L1_SingleS1Jet64_BptxAND_Prescl, &tHlts.b_L1_SingleS1Jet64_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleS1JetC20_NotBptxOR", &tHlts.L1_SingleS1JetC20_NotBptxOR, &tHlts.b_L1_SingleS1JetC20_NotBptxOR);
   t->SetBranchAddress("L1_SingleS1JetC20_NotBptxOR_Prescl", &tHlts.L1_SingleS1JetC20_NotBptxOR_Prescl, &tHlts.b_L1_SingleS1JetC20_NotBptxOR_Prescl);
   t->SetBranchAddress("L1_SingleS1JetC32_NotBptxOR", &tHlts.L1_SingleS1JetC32_NotBptxOR, &tHlts.b_L1_SingleS1JetC32_NotBptxOR);
   t->SetBranchAddress("L1_SingleS1JetC32_NotBptxOR_Prescl", &tHlts.L1_SingleS1JetC32_NotBptxOR_Prescl, &tHlts.b_L1_SingleS1JetC32_NotBptxOR_Prescl);
   t->SetBranchAddress("L1_SingleTrack12_BptxAND", &tHlts.L1_SingleTrack12_BptxAND, &tHlts.b_L1_SingleTrack12_BptxAND);
   t->SetBranchAddress("L1_SingleTrack12_BptxAND_Prescl", &tHlts.L1_SingleTrack12_BptxAND_Prescl, &tHlts.b_L1_SingleTrack12_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack12_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleTrack12_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleTrack12_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleTrack12_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleTrack12_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleTrack12_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack16_BptxAND", &tHlts.L1_SingleTrack16_BptxAND, &tHlts.b_L1_SingleTrack16_BptxAND);
   t->SetBranchAddress("L1_SingleTrack16_BptxAND_Prescl", &tHlts.L1_SingleTrack16_BptxAND_Prescl, &tHlts.b_L1_SingleTrack16_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack16_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleTrack16_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleTrack16_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleTrack16_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleTrack16_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleTrack16_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack20_BptxAND", &tHlts.L1_SingleTrack20_BptxAND, &tHlts.b_L1_SingleTrack20_BptxAND);
   t->SetBranchAddress("L1_SingleTrack20_BptxAND_Prescl", &tHlts.L1_SingleTrack20_BptxAND_Prescl, &tHlts.b_L1_SingleTrack20_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack20_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleTrack20_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleTrack20_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleTrack20_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleTrack20_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleTrack20_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack24_BptxAND", &tHlts.L1_SingleTrack24_BptxAND, &tHlts.b_L1_SingleTrack24_BptxAND);
   t->SetBranchAddress("L1_SingleTrack24_BptxAND_Prescl", &tHlts.L1_SingleTrack24_BptxAND_Prescl, &tHlts.b_L1_SingleTrack24_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack24_Centrality_ext30_100_BptxAND", &tHlts.L1_SingleTrack24_Centrality_ext30_100_BptxAND, &tHlts.b_L1_SingleTrack24_Centrality_ext30_100_BptxAND);
   t->SetBranchAddress("L1_SingleTrack24_Centrality_ext30_100_BptxAND_Prescl", &tHlts.L1_SingleTrack24_Centrality_ext30_100_BptxAND_Prescl, &tHlts.b_L1_SingleTrack24_Centrality_ext30_100_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack28_BptxAND", &tHlts.L1_SingleTrack28_BptxAND, &tHlts.b_L1_SingleTrack28_BptxAND);
   t->SetBranchAddress("L1_SingleTrack28_BptxAND_Prescl", &tHlts.L1_SingleTrack28_BptxAND_Prescl, &tHlts.b_L1_SingleTrack28_BptxAND_Prescl);
   t->SetBranchAddress("L1_TOTEM_1", &tHlts.L1_TOTEM_1, &tHlts.b_L1_TOTEM_1);
   t->SetBranchAddress("L1_TOTEM_1_Prescl", &tHlts.L1_TOTEM_1_Prescl, &tHlts.b_L1_TOTEM_1_Prescl);
   t->SetBranchAddress("L1_TOTEM_2", &tHlts.L1_TOTEM_2, &tHlts.b_L1_TOTEM_2);
   t->SetBranchAddress("L1_TOTEM_2_Prescl", &tHlts.L1_TOTEM_2_Prescl, &tHlts.b_L1_TOTEM_2_Prescl);
   t->SetBranchAddress("L1_ZdcOR_BptxAND", &tHlts.L1_ZdcOR_BptxAND, &tHlts.b_L1_ZdcOR_BptxAND);
   t->SetBranchAddress("L1_ZdcOR_BptxAND_Prescl", &tHlts.L1_ZdcOR_BptxAND_Prescl, &tHlts.b_L1_ZdcOR_BptxAND_Prescl);
   t->SetBranchAddress("L1_ZdcXOR_BptxAND", &tHlts.L1_ZdcXOR_BptxAND, &tHlts.b_L1_ZdcXOR_BptxAND);
   t->SetBranchAddress("L1_ZdcXOR_BptxAND_Prescl", &tHlts.L1_ZdcXOR_BptxAND_Prescl, &tHlts.b_L1_ZdcXOR_BptxAND_Prescl);
   t->SetBranchAddress("L1_ZeroBias", &tHlts.L1_ZeroBias, &tHlts.b_L1_ZeroBias);
   t->SetBranchAddress("L1_ZeroBias_Prescl", &tHlts.L1_ZeroBias_Prescl, &tHlts.b_L1_ZeroBias_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_PreBPTX.v0", &tHlts.L1Tech_BPTX_PreBPTX_v0, &tHlts.b_L1Tech_BPTX_PreBPTX_v0);
   t->SetBranchAddress("L1Tech_BPTX_PreBPTX.v0_Prescl", &tHlts.L1Tech_BPTX_PreBPTX_v0_Prescl, &tHlts.b_L1Tech_BPTX_PreBPTX_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_minus.v0", &tHlts.L1Tech_BPTX_minus_v0, &tHlts.b_L1Tech_BPTX_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_minus.v0_Prescl", &tHlts.L1Tech_BPTX_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_minus_AND_not_plus.v0", &tHlts.L1Tech_BPTX_minus_AND_not_plus_v0, &tHlts.b_L1Tech_BPTX_minus_AND_not_plus_v0);
   t->SetBranchAddress("L1Tech_BPTX_minus_AND_not_plus.v0_Prescl", &tHlts.L1Tech_BPTX_minus_AND_not_plus_v0_Prescl, &tHlts.b_L1Tech_BPTX_minus_AND_not_plus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus.v0", &tHlts.L1Tech_BPTX_plus_v0, &tHlts.b_L1Tech_BPTX_plus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_NOT_minus.v0", &tHlts.L1Tech_BPTX_plus_AND_NOT_minus_v0, &tHlts.b_L1Tech_BPTX_plus_AND_NOT_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_NOT_minus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus.v0", &tHlts.L1Tech_BPTX_plus_AND_minus_v0, &tHlts.b_L1Tech_BPTX_plus_AND_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_AND_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_AND_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus_instance1.v0", &tHlts.L1Tech_BPTX_plus_AND_minus_instance1_v0, &tHlts.b_L1Tech_BPTX_plus_AND_minus_instance1_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus_instance1.v0_Prescl", &tHlts.L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_OR_minus.v0", &tHlts.L1Tech_BPTX_plus_OR_minus_v0, &tHlts.b_L1Tech_BPTX_plus_OR_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_OR_minus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_OR_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_OR_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_quiet.v0", &tHlts.L1Tech_BPTX_quiet_v0, &tHlts.b_L1Tech_BPTX_quiet_v0);
   t->SetBranchAddress("L1Tech_BPTX_quiet.v0_Prescl", &tHlts.L1Tech_BPTX_quiet_v0_Prescl, &tHlts.b_L1Tech_BPTX_quiet_v0_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit28", &tHlts.L1Tech_BRIL_bit28, &tHlts.b_L1Tech_BRIL_bit28);
   t->SetBranchAddress("L1Tech_BRIL_bit28_Prescl", &tHlts.L1Tech_BRIL_bit28_Prescl, &tHlts.b_L1Tech_BRIL_bit28_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit29", &tHlts.L1Tech_BRIL_bit29, &tHlts.b_L1Tech_BRIL_bit29);
   t->SetBranchAddress("L1Tech_BRIL_bit29_Prescl", &tHlts.L1Tech_BRIL_bit29_Prescl, &tHlts.b_L1Tech_BRIL_bit29_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit30", &tHlts.L1Tech_BRIL_bit30, &tHlts.b_L1Tech_BRIL_bit30);
   t->SetBranchAddress("L1Tech_BRIL_bit30_Prescl", &tHlts.L1Tech_BRIL_bit30_Prescl, &tHlts.b_L1Tech_BRIL_bit30_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit31", &tHlts.L1Tech_BRIL_bit31, &tHlts.b_L1Tech_BRIL_bit31);
   t->SetBranchAddress("L1Tech_BRIL_bit31_Prescl", &tHlts.L1Tech_BRIL_bit31_Prescl, &tHlts.b_L1Tech_BRIL_bit31_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit32", &tHlts.L1Tech_BRIL_bit32, &tHlts.b_L1Tech_BRIL_bit32);
   t->SetBranchAddress("L1Tech_BRIL_bit32_Prescl", &tHlts.L1Tech_BRIL_bit32_Prescl, &tHlts.b_L1Tech_BRIL_bit32_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit33", &tHlts.L1Tech_BRIL_bit33, &tHlts.b_L1Tech_BRIL_bit33);
   t->SetBranchAddress("L1Tech_BRIL_bit33_Prescl", &tHlts.L1Tech_BRIL_bit33_Prescl, &tHlts.b_L1Tech_BRIL_bit33_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit34", &tHlts.L1Tech_BRIL_bit34, &tHlts.b_L1Tech_BRIL_bit34);
   t->SetBranchAddress("L1Tech_BRIL_bit34_Prescl", &tHlts.L1Tech_BRIL_bit34_Prescl, &tHlts.b_L1Tech_BRIL_bit34_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit35", &tHlts.L1Tech_BRIL_bit35, &tHlts.b_L1Tech_BRIL_bit35);
   t->SetBranchAddress("L1Tech_BRIL_bit35_Prescl", &tHlts.L1Tech_BRIL_bit35_Prescl, &tHlts.b_L1Tech_BRIL_bit35_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit36", &tHlts.L1Tech_BRIL_bit36, &tHlts.b_L1Tech_BRIL_bit36);
   t->SetBranchAddress("L1Tech_BRIL_bit36_Prescl", &tHlts.L1Tech_BRIL_bit36_Prescl, &tHlts.b_L1Tech_BRIL_bit36_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit37", &tHlts.L1Tech_BRIL_bit37, &tHlts.b_L1Tech_BRIL_bit37);
   t->SetBranchAddress("L1Tech_BRIL_bit37_Prescl", &tHlts.L1Tech_BRIL_bit37_Prescl, &tHlts.b_L1Tech_BRIL_bit37_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit38", &tHlts.L1Tech_BRIL_bit38, &tHlts.b_L1Tech_BRIL_bit38);
   t->SetBranchAddress("L1Tech_BRIL_bit38_Prescl", &tHlts.L1Tech_BRIL_bit38_Prescl, &tHlts.b_L1Tech_BRIL_bit38_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit39", &tHlts.L1Tech_BRIL_bit39, &tHlts.b_L1Tech_BRIL_bit39);
   t->SetBranchAddress("L1Tech_BRIL_bit39_Prescl", &tHlts.L1Tech_BRIL_bit39_Prescl, &tHlts.b_L1Tech_BRIL_bit39_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit40", &tHlts.L1Tech_BRIL_bit40, &tHlts.b_L1Tech_BRIL_bit40);
   t->SetBranchAddress("L1Tech_BRIL_bit40_Prescl", &tHlts.L1Tech_BRIL_bit40_Prescl, &tHlts.b_L1Tech_BRIL_bit40_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit41", &tHlts.L1Tech_BRIL_bit41, &tHlts.b_L1Tech_BRIL_bit41);
   t->SetBranchAddress("L1Tech_BRIL_bit41_Prescl", &tHlts.L1Tech_BRIL_bit41_Prescl, &tHlts.b_L1Tech_BRIL_bit41_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit42", &tHlts.L1Tech_BRIL_bit42, &tHlts.b_L1Tech_BRIL_bit42);
   t->SetBranchAddress("L1Tech_BRIL_bit42_Prescl", &tHlts.L1Tech_BRIL_bit42_Prescl, &tHlts.b_L1Tech_BRIL_bit42_Prescl);
   t->SetBranchAddress("L1Tech_BRIL_bit43", &tHlts.L1Tech_BRIL_bit43, &tHlts.b_L1Tech_BRIL_bit43);
   t->SetBranchAddress("L1Tech_BRIL_bit43_Prescl", &tHlts.L1Tech_BRIL_bit43_Prescl, &tHlts.b_L1Tech_BRIL_bit43_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_Gap.v0", &tHlts.L1Tech_CASTOR_Gap_v0, &tHlts.b_L1Tech_CASTOR_Gap_v0);
   t->SetBranchAddress("L1Tech_CASTOR_Gap.v0_Prescl", &tHlts.L1Tech_CASTOR_Gap_v0_Prescl, &tHlts.b_L1Tech_CASTOR_Gap_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_HaloMuon.v0", &tHlts.L1Tech_CASTOR_HaloMuon_v0, &tHlts.b_L1Tech_CASTOR_HaloMuon_v0);
   t->SetBranchAddress("L1Tech_CASTOR_HaloMuon.v0_Prescl", &tHlts.L1Tech_CASTOR_HaloMuon_v0_Prescl, &tHlts.b_L1Tech_CASTOR_HaloMuon_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_HighJet.v0", &tHlts.L1Tech_CASTOR_HighJet_v0, &tHlts.b_L1Tech_CASTOR_HighJet_v0);
   t->SetBranchAddress("L1Tech_CASTOR_HighJet.v0_Prescl", &tHlts.L1Tech_CASTOR_HighJet_v0_Prescl, &tHlts.b_L1Tech_CASTOR_HighJet_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_MediumJet.v0", &tHlts.L1Tech_CASTOR_MediumJet_v0, &tHlts.b_L1Tech_CASTOR_MediumJet_v0);
   t->SetBranchAddress("L1Tech_CASTOR_MediumJet.v0_Prescl", &tHlts.L1Tech_CASTOR_MediumJet_v0_Prescl, &tHlts.b_L1Tech_CASTOR_MediumJet_v0_Prescl);
   t->SetBranchAddress("L1Tech_DT_GlobalOR.v0", &tHlts.L1Tech_DT_GlobalOR_v0, &tHlts.b_L1Tech_DT_GlobalOR_v0);
   t->SetBranchAddress("L1Tech_DT_GlobalOR.v0_Prescl", &tHlts.L1Tech_DT_GlobalOR_v0_Prescl, &tHlts.b_L1Tech_DT_GlobalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HBHE_totalOR.v0", &tHlts.L1Tech_HCAL_HBHE_totalOR_v0, &tHlts.b_L1Tech_HCAL_HBHE_totalOR_v0);
   t->SetBranchAddress("L1Tech_HCAL_HBHE_totalOR.v0_Prescl", &tHlts.L1Tech_HCAL_HBHE_totalOR_v0_Prescl, &tHlts.b_L1Tech_HCAL_HBHE_totalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HF_MMP_or_MPP.v1", &tHlts.L1Tech_HCAL_HF_MMP_or_MPP_v1, &tHlts.b_L1Tech_HCAL_HF_MMP_or_MPP_v1);
   t->SetBranchAddress("L1Tech_HCAL_HF_MMP_or_MPP.v1_Prescl", &tHlts.L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl, &tHlts.b_L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HF_coincidence_PM.v2", &tHlts.L1Tech_HCAL_HF_coincidence_PM_v2, &tHlts.b_L1Tech_HCAL_HF_coincidence_PM_v2);
   t->SetBranchAddress("L1Tech_HCAL_HF_coincidence_PM.v2_Prescl", &tHlts.L1Tech_HCAL_HF_coincidence_PM_v2_Prescl, &tHlts.b_L1Tech_HCAL_HF_coincidence_PM_v2_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HF_single_channel.v0", &tHlts.L1Tech_HCAL_HF_single_channel_v0, &tHlts.b_L1Tech_HCAL_HF_single_channel_v0);
   t->SetBranchAddress("L1Tech_HCAL_HF_single_channel.v0_Prescl", &tHlts.L1Tech_HCAL_HF_single_channel_v0_Prescl, &tHlts.b_L1Tech_HCAL_HF_single_channel_v0_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HO_totalOR.v0", &tHlts.L1Tech_HCAL_HO_totalOR_v0, &tHlts.b_L1Tech_HCAL_HO_totalOR_v0);
   t->SetBranchAddress("L1Tech_HCAL_HO_totalOR.v0_Prescl", &tHlts.L1Tech_HCAL_HO_totalOR_v0_Prescl, &tHlts.b_L1Tech_HCAL_HO_totalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus1_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RBplus1_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus1_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus2_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RBplus2_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus2_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_barrel_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_barrel_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_barrel_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_barrel_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_pointing_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_pointing_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_pointing_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_pointing_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_0", &tHlts.L1Tech_TOTEM_0, &tHlts.b_L1Tech_TOTEM_0);
   t->SetBranchAddress("L1Tech_TOTEM_0_Prescl", &tHlts.L1Tech_TOTEM_0_Prescl, &tHlts.b_L1Tech_TOTEM_0_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_1", &tHlts.L1Tech_TOTEM_1, &tHlts.b_L1Tech_TOTEM_1);
   t->SetBranchAddress("L1Tech_TOTEM_1_Prescl", &tHlts.L1Tech_TOTEM_1_Prescl, &tHlts.b_L1Tech_TOTEM_1_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_2", &tHlts.L1Tech_TOTEM_2, &tHlts.b_L1Tech_TOTEM_2);
   t->SetBranchAddress("L1Tech_TOTEM_2_Prescl", &tHlts.L1Tech_TOTEM_2_Prescl, &tHlts.b_L1Tech_TOTEM_2_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_3", &tHlts.L1Tech_TOTEM_3, &tHlts.b_L1Tech_TOTEM_3);
   t->SetBranchAddress("L1Tech_TOTEM_3_Prescl", &tHlts.L1Tech_TOTEM_3_Prescl, &tHlts.b_L1Tech_TOTEM_3_Prescl);
   t->SetBranchAddress("L1Tech_ZDC_minus", &tHlts.L1Tech_ZDC_minus, &tHlts.b_L1Tech_ZDC_minus);
   t->SetBranchAddress("L1Tech_ZDC_minus_Prescl", &tHlts.L1Tech_ZDC_minus_Prescl, &tHlts.b_L1Tech_ZDC_minus_Prescl);
   t->SetBranchAddress("L1Tech_ZDC_plus", &tHlts.L1Tech_ZDC_plus, &tHlts.b_L1Tech_ZDC_plus);
   t->SetBranchAddress("L1Tech_ZDC_plus_Prescl", &tHlts.L1Tech_ZDC_plus_Prescl, &tHlts.b_L1Tech_ZDC_plus_Prescl);
   if (doCheck) {
      if (t->GetMaximum("NL1IsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1IsolEm too small!!!  "<<t->GetMaximum("NL1IsolEm")<<endl;
      if (t->GetMaximum("NL1NIsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1NIsolEm too small!!!  "<<t->GetMaximum("NL1NIsolEm")<<endl;
      if (t->GetMaximum("NL1Mu")>8) cout <<"FATAL ERROR: Arrary size of NL1Mu too small!!!  "<<t->GetMaximum("NL1Mu")<<endl;
      if (t->GetMaximum("NL1CenJet")>8) cout <<"FATAL ERROR: Arrary size of NL1CenJet too small!!!  "<<t->GetMaximum("NL1CenJet")<<endl;
      if (t->GetMaximum("NL1ForJet")>8) cout <<"FATAL ERROR: Arrary size of NL1ForJet too small!!!  "<<t->GetMaximum("NL1ForJet")<<endl;
      if (t->GetMaximum("NL1Tau")>8) cout <<"FATAL ERROR: Arrary size of NL1Tau too small!!!  "<<t->GetMaximum("NL1Tau")<<endl;
   }
}

