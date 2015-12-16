//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Dec  9 16:49:28 2015 by ROOT version 6.02/10
// from TTree HltTree/
// found on file: ../../jetJEC/2015/mc_merged/PYTHIA_QCD30_TuneCUETP8M1_cfi_RECODEBUGpp_757p1_TAGSignalPP_merged.root
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
   Int_t           HLT_Physics_v1;
   Int_t           HLT_Physics_v1_Prescl;
   Int_t           HLT_Random_v1;
   Int_t           HLT_Random_v1_Prescl;
   Int_t           HLT_ZeroBias_v1;
   Int_t           HLT_ZeroBias_v1_Prescl;
   Int_t           HLTriggerFinalPath;
   Int_t           HLTriggerFinalPath_Prescl;
   Int_t           raw2digi_step;
   Int_t           raw2digi_step_Prescl;
   Int_t           L1Reco_step;
   Int_t           L1Reco_step_Prescl;
   Int_t           L1_DoubleEG1;
   Int_t           L1_DoubleEG1_Prescl;
   Int_t           L1_DoubleEG10;
   Int_t           L1_DoubleEG10_Prescl;
   Int_t           L1_DoubleEG5;
   Int_t           L1_DoubleEG5_Prescl;
   Int_t           L1_DoubleForJet20U;
   Int_t           L1_DoubleForJet20U_Prescl;
   Int_t           L1_DoubleHfBitCountsRing1_P1N1;
   Int_t           L1_DoubleHfBitCountsRing1_P1N1_Prescl;
   Int_t           L1_DoubleHfBitCountsRing2_P1N1;
   Int_t           L1_DoubleHfBitCountsRing2_P1N1_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing1_P200N200;
   Int_t           L1_DoubleHfRingEtSumsRing1_P200N200_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing1_P4N4;
   Int_t           L1_DoubleHfRingEtSumsRing1_P4N4_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing2_P200N200;
   Int_t           L1_DoubleHfRingEtSumsRing2_P200N200_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing2_P4N4;
   Int_t           L1_DoubleHfRingEtSumsRing2_P4N4_Prescl;
   Int_t           L1_DoubleIsoEG05_TopBottom;
   Int_t           L1_DoubleIsoEG05_TopBottom_Prescl;
   Int_t           L1_DoubleIsoEG05_TopBottomCen;
   Int_t           L1_DoubleIsoEG05_TopBottomCen_Prescl;
   Int_t           L1_DoubleIsoEG10;
   Int_t           L1_DoubleIsoEG10_Prescl;
   Int_t           L1_DoubleIsoEG8;
   Int_t           L1_DoubleIsoEG8_Prescl;
   Int_t           L1_DoubleJet40U;
   Int_t           L1_DoubleJet40U_Prescl;
   Int_t           L1_DoubleJet60U;
   Int_t           L1_DoubleJet60U_Prescl;
   Int_t           L1_DoubleMu3;
   Int_t           L1_DoubleMu3_Prescl;
   Int_t           L1_DoubleMuOpen;
   Int_t           L1_DoubleMuOpen_Prescl;
   Int_t           L1_DoubleMuTopBottom;
   Int_t           L1_DoubleMuTopBottom_Prescl;
   Int_t           L1_DoubleNoIsoEG05_TopBottom;
   Int_t           L1_DoubleNoIsoEG05_TopBottom_Prescl;
   Int_t           L1_DoubleNoIsoEG05_TopBottomCen;
   Int_t           L1_DoubleNoIsoEG05_TopBottomCen_Prescl;
   Int_t           L1_DoubleTauJet20U;
   Int_t           L1_DoubleTauJet20U_Prescl;
   Int_t           L1_DoubleTauJet8U;
   Int_t           L1_DoubleTauJet8U_Prescl;
   Int_t           L1_EG12_Jet40U;
   Int_t           L1_EG12_Jet40U_Prescl;
   Int_t           L1_ETM20;
   Int_t           L1_ETM20_Prescl;
   Int_t           L1_ETM30;
   Int_t           L1_ETM30_Prescl;
   Int_t           L1_ETM40;
   Int_t           L1_ETM40_Prescl;
   Int_t           L1_ETM50;
   Int_t           L1_ETM50_Prescl;
   Int_t           L1_ETT60;
   Int_t           L1_ETT60_Prescl;
   Int_t           L1_HTT100;
   Int_t           L1_HTT100_Prescl;
   Int_t           L1_HTT200;
   Int_t           L1_HTT200_Prescl;
   Int_t           L1_HTT300;
   Int_t           L1_HTT300_Prescl;
   Int_t           L1_IsoEG10_Jet12U;
   Int_t           L1_IsoEG10_Jet12U_Prescl;
   Int_t           L1_IsoEG10_Jet6U;
   Int_t           L1_IsoEG10_Jet6U_Prescl;
   Int_t           L1_IsoEG10_Jet6U_ForJet6U;
   Int_t           L1_IsoEG10_Jet6U_ForJet6U_Prescl;
   Int_t           L1_IsoEG10_Jet8U;
   Int_t           L1_IsoEG10_Jet8U_Prescl;
   Int_t           L1_IsoEG10_TauJet8U;
   Int_t           L1_IsoEG10_TauJet8U_Prescl;
   Int_t           L1_MinBias_ETT10;
   Int_t           L1_MinBias_ETT10_Prescl;
   Int_t           L1_MinBias_HTT10;
   Int_t           L1_MinBias_HTT10_Prescl;
   Int_t           L1_Mu3QFC_EG12;
   Int_t           L1_Mu3QFC_EG12_Prescl;
   Int_t           L1_Mu3QFC_IsoEG5;
   Int_t           L1_Mu3QFC_IsoEG5_Prescl;
   Int_t           L1_Mu3QFC_Jet6U;
   Int_t           L1_Mu3QFC_Jet6U_Prescl;
   Int_t           L1_Mu5QFC_IsoEG10;
   Int_t           L1_Mu5QFC_IsoEG10_Prescl;
   Int_t           L1_Mu5QFC_Jet6U;
   Int_t           L1_Mu5QFC_Jet6U_Prescl;
   Int_t           L1_Mu5QFC_TauJet8U;
   Int_t           L1_Mu5QFC_TauJet8U_Prescl;
   Int_t           L1_SingleEG1;
   Int_t           L1_SingleEG1_Prescl;
   Int_t           L1_SingleEG10;
   Int_t           L1_SingleEG10_Prescl;
   Int_t           L1_SingleEG12;
   Int_t           L1_SingleEG12_Prescl;
   Int_t           L1_SingleEG15;
   Int_t           L1_SingleEG15_Prescl;
   Int_t           L1_SingleEG20;
   Int_t           L1_SingleEG20_Prescl;
   Int_t           L1_SingleEG5;
   Int_t           L1_SingleEG5_Prescl;
   Int_t           L1_SingleEG5_Endcap;
   Int_t           L1_SingleEG5_Endcap_Prescl;
   Int_t           L1_SingleEG8;
   Int_t           L1_SingleEG8_Prescl;
   Int_t           L1_SingleForJet10U;
   Int_t           L1_SingleForJet10U_Prescl;
   Int_t           L1_SingleForJet6U;
   Int_t           L1_SingleForJet6U_Prescl;
   Int_t           L1_SingleHfBitCountsRing1_1;
   Int_t           L1_SingleHfBitCountsRing1_1_Prescl;
   Int_t           L1_SingleHfBitCountsRing2_1;
   Int_t           L1_SingleHfBitCountsRing2_1_Prescl;
   Int_t           L1_SingleHfRingEtSumsRing1_200;
   Int_t           L1_SingleHfRingEtSumsRing1_200_Prescl;
   Int_t           L1_SingleHfRingEtSumsRing1_4;
   Int_t           L1_SingleHfRingEtSumsRing1_4_Prescl;
   Int_t           L1_SingleHfRingEtSumsRing2_200;
   Int_t           L1_SingleHfRingEtSumsRing2_200_Prescl;
   Int_t           L1_SingleHfRingEtSumsRing2_4;
   Int_t           L1_SingleHfRingEtSumsRing2_4_Prescl;
   Int_t           L1_SingleIsoEG10;
   Int_t           L1_SingleIsoEG10_Prescl;
   Int_t           L1_SingleIsoEG12;
   Int_t           L1_SingleIsoEG12_Prescl;
   Int_t           L1_SingleIsoEG15;
   Int_t           L1_SingleIsoEG15_Prescl;
   Int_t           L1_SingleIsoEG5;
   Int_t           L1_SingleIsoEG5_Prescl;
   Int_t           L1_SingleIsoEG5_Endcap;
   Int_t           L1_SingleIsoEG5_Endcap_Prescl;
   Int_t           L1_SingleIsoEG8;
   Int_t           L1_SingleIsoEG8_Prescl;
   Int_t           L1_SingleJet10U;
   Int_t           L1_SingleJet10U_Prescl;
   Int_t           L1_SingleJet10U_Barrel;
   Int_t           L1_SingleJet10U_Barrel_Prescl;
   Int_t           L1_SingleJet10U_Central;
   Int_t           L1_SingleJet10U_Central_Prescl;
   Int_t           L1_SingleJet10U_Endcap;
   Int_t           L1_SingleJet10U_Endcap_Prescl;
   Int_t           L1_SingleJet20U;
   Int_t           L1_SingleJet20U_Prescl;
   Int_t           L1_SingleJet20U_Barrel;
   Int_t           L1_SingleJet20U_Barrel_Prescl;
   Int_t           L1_SingleJet30U;
   Int_t           L1_SingleJet30U_Prescl;
   Int_t           L1_SingleJet30U_Barrel;
   Int_t           L1_SingleJet30U_Barrel_Prescl;
   Int_t           L1_SingleJet40U;
   Int_t           L1_SingleJet40U_Prescl;
   Int_t           L1_SingleJet40U_Barrel;
   Int_t           L1_SingleJet40U_Barrel_Prescl;
   Int_t           L1_SingleJet50U;
   Int_t           L1_SingleJet50U_Prescl;
   Int_t           L1_SingleJet6U;
   Int_t           L1_SingleJet6U_Prescl;
   Int_t           L1_SingleJet60U;
   Int_t           L1_SingleJet60U_Prescl;
   Int_t           L1_SingleJet6U_Barrel;
   Int_t           L1_SingleJet6U_Barrel_Prescl;
   Int_t           L1_SingleJet6U_Central;
   Int_t           L1_SingleJet6U_Central_Prescl;
   Int_t           L1_SingleJet6U_Endcap;
   Int_t           L1_SingleJet6U_Endcap_Prescl;
   Int_t           L1_SingleMu0;
   Int_t           L1_SingleMu0_Prescl;
   Int_t           L1_SingleMu10;
   Int_t           L1_SingleMu10_Prescl;
   Int_t           L1_SingleMu14;
   Int_t           L1_SingleMu14_Prescl;
   Int_t           L1_SingleMu3;
   Int_t           L1_SingleMu3_Prescl;
   Int_t           L1_SingleMu5;
   Int_t           L1_SingleMu5_Prescl;
   Int_t           L1_SingleMu7;
   Int_t           L1_SingleMu7_Prescl;
   Int_t           L1_SingleMuBeamHalo;
   Int_t           L1_SingleMuBeamHalo_Prescl;
   Int_t           L1_SingleMuOpen;
   Int_t           L1_SingleMuOpen_Prescl;
   Int_t           L1_SingleTauJet10U;
   Int_t           L1_SingleTauJet10U_Prescl;
   Int_t           L1_SingleTauJet10U_Barrel;
   Int_t           L1_SingleTauJet10U_Barrel_Prescl;
   Int_t           L1_SingleTauJet20U;
   Int_t           L1_SingleTauJet20U_Prescl;
   Int_t           L1_SingleTauJet20U_Barrel;
   Int_t           L1_SingleTauJet20U_Barrel_Prescl;
   Int_t           L1_SingleTauJet30U;
   Int_t           L1_SingleTauJet30U_Prescl;
   Int_t           L1_SingleTauJet30U_Barrel;
   Int_t           L1_SingleTauJet30U_Barrel_Prescl;
   Int_t           L1_SingleTauJet50U;
   Int_t           L1_SingleTauJet50U_Prescl;
   Int_t           L1_SingleTauJet8U;
   Int_t           L1_SingleTauJet8U_Prescl;
   Int_t           L1_SingleTauJet8U_Barrel;
   Int_t           L1_SingleTauJet8U_Barrel_Prescl;
   Int_t           L1_TauJet10U_ETM30;
   Int_t           L1_TauJet10U_ETM30_Prescl;
   Int_t           L1_TauJet10U_ETM40;
   Int_t           L1_TauJet10U_ETM40_Prescl;
   Int_t           L1_TripleMu3;
   Int_t           L1_TripleMu3_Prescl;

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
   TBranch        *b_HLT_Physics_v1;   //!
   TBranch        *b_HLT_Physics_v1_Prescl;   //!
   TBranch        *b_HLT_Random_v1;   //!
   TBranch        *b_HLT_Random_v1_Prescl;   //!
   TBranch        *b_HLT_ZeroBias_v1;   //!
   TBranch        *b_HLT_ZeroBias_v1_Prescl;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_HLTriggerFinalPath_Prescl;   //!
   TBranch        *b_raw2digi_step;   //!
   TBranch        *b_raw2digi_step_Prescl;   //!
   TBranch        *b_L1Reco_step;   //!
   TBranch        *b_L1Reco_step_Prescl;   //!
   TBranch        *b_L1_DoubleEG1;   //!
   TBranch        *b_L1_DoubleEG1_Prescl;   //!
   TBranch        *b_L1_DoubleEG10;   //!
   TBranch        *b_L1_DoubleEG10_Prescl;   //!
   TBranch        *b_L1_DoubleEG5;   //!
   TBranch        *b_L1_DoubleEG5_Prescl;   //!
   TBranch        *b_L1_DoubleForJet20U;   //!
   TBranch        *b_L1_DoubleForJet20U_Prescl;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing1_P1N1;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing1_P1N1_Prescl;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing2_P1N1;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing2_P1N1_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P200N200;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P200N200_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P4N4;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P4N4_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P200N200;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P200N200_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P4N4;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P4N4_Prescl;   //!
   TBranch        *b_L1_DoubleIsoEG05_TopBottom;   //!
   TBranch        *b_L1_DoubleIsoEG05_TopBottom_Prescl;   //!
   TBranch        *b_L1_DoubleIsoEG05_TopBottomCen;   //!
   TBranch        *b_L1_DoubleIsoEG05_TopBottomCen_Prescl;   //!
   TBranch        *b_L1_DoubleIsoEG10;   //!
   TBranch        *b_L1_DoubleIsoEG10_Prescl;   //!
   TBranch        *b_L1_DoubleIsoEG8;   //!
   TBranch        *b_L1_DoubleIsoEG8_Prescl;   //!
   TBranch        *b_L1_DoubleJet40U;   //!
   TBranch        *b_L1_DoubleJet40U_Prescl;   //!
   TBranch        *b_L1_DoubleJet60U;   //!
   TBranch        *b_L1_DoubleJet60U_Prescl;   //!
   TBranch        *b_L1_DoubleMu3;   //!
   TBranch        *b_L1_DoubleMu3_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen;   //!
   TBranch        *b_L1_DoubleMuOpen_Prescl;   //!
   TBranch        *b_L1_DoubleMuTopBottom;   //!
   TBranch        *b_L1_DoubleMuTopBottom_Prescl;   //!
   TBranch        *b_L1_DoubleNoIsoEG05_TopBottom;   //!
   TBranch        *b_L1_DoubleNoIsoEG05_TopBottom_Prescl;   //!
   TBranch        *b_L1_DoubleNoIsoEG05_TopBottomCen;   //!
   TBranch        *b_L1_DoubleNoIsoEG05_TopBottomCen_Prescl;   //!
   TBranch        *b_L1_DoubleTauJet20U;   //!
   TBranch        *b_L1_DoubleTauJet20U_Prescl;   //!
   TBranch        *b_L1_DoubleTauJet8U;   //!
   TBranch        *b_L1_DoubleTauJet8U_Prescl;   //!
   TBranch        *b_L1_EG12_Jet40U;   //!
   TBranch        *b_L1_EG12_Jet40U_Prescl;   //!
   TBranch        *b_L1_ETM20;   //!
   TBranch        *b_L1_ETM20_Prescl;   //!
   TBranch        *b_L1_ETM30;   //!
   TBranch        *b_L1_ETM30_Prescl;   //!
   TBranch        *b_L1_ETM40;   //!
   TBranch        *b_L1_ETM40_Prescl;   //!
   TBranch        *b_L1_ETM50;   //!
   TBranch        *b_L1_ETM50_Prescl;   //!
   TBranch        *b_L1_ETT60;   //!
   TBranch        *b_L1_ETT60_Prescl;   //!
   TBranch        *b_L1_HTT100;   //!
   TBranch        *b_L1_HTT100_Prescl;   //!
   TBranch        *b_L1_HTT200;   //!
   TBranch        *b_L1_HTT200_Prescl;   //!
   TBranch        *b_L1_HTT300;   //!
   TBranch        *b_L1_HTT300_Prescl;   //!
   TBranch        *b_L1_IsoEG10_Jet12U;   //!
   TBranch        *b_L1_IsoEG10_Jet12U_Prescl;   //!
   TBranch        *b_L1_IsoEG10_Jet6U;   //!
   TBranch        *b_L1_IsoEG10_Jet6U_Prescl;   //!
   TBranch        *b_L1_IsoEG10_Jet6U_ForJet6U;   //!
   TBranch        *b_L1_IsoEG10_Jet6U_ForJet6U_Prescl;   //!
   TBranch        *b_L1_IsoEG10_Jet8U;   //!
   TBranch        *b_L1_IsoEG10_Jet8U_Prescl;   //!
   TBranch        *b_L1_IsoEG10_TauJet8U;   //!
   TBranch        *b_L1_IsoEG10_TauJet8U_Prescl;   //!
   TBranch        *b_L1_MinBias_ETT10;   //!
   TBranch        *b_L1_MinBias_ETT10_Prescl;   //!
   TBranch        *b_L1_MinBias_HTT10;   //!
   TBranch        *b_L1_MinBias_HTT10_Prescl;   //!
   TBranch        *b_L1_Mu3QFC_EG12;   //!
   TBranch        *b_L1_Mu3QFC_EG12_Prescl;   //!
   TBranch        *b_L1_Mu3QFC_IsoEG5;   //!
   TBranch        *b_L1_Mu3QFC_IsoEG5_Prescl;   //!
   TBranch        *b_L1_Mu3QFC_Jet6U;   //!
   TBranch        *b_L1_Mu3QFC_Jet6U_Prescl;   //!
   TBranch        *b_L1_Mu5QFC_IsoEG10;   //!
   TBranch        *b_L1_Mu5QFC_IsoEG10_Prescl;   //!
   TBranch        *b_L1_Mu5QFC_Jet6U;   //!
   TBranch        *b_L1_Mu5QFC_Jet6U_Prescl;   //!
   TBranch        *b_L1_Mu5QFC_TauJet8U;   //!
   TBranch        *b_L1_Mu5QFC_TauJet8U_Prescl;   //!
   TBranch        *b_L1_SingleEG1;   //!
   TBranch        *b_L1_SingleEG1_Prescl;   //!
   TBranch        *b_L1_SingleEG10;   //!
   TBranch        *b_L1_SingleEG10_Prescl;   //!
   TBranch        *b_L1_SingleEG12;   //!
   TBranch        *b_L1_SingleEG12_Prescl;   //!
   TBranch        *b_L1_SingleEG15;   //!
   TBranch        *b_L1_SingleEG15_Prescl;   //!
   TBranch        *b_L1_SingleEG20;   //!
   TBranch        *b_L1_SingleEG20_Prescl;   //!
   TBranch        *b_L1_SingleEG5;   //!
   TBranch        *b_L1_SingleEG5_Prescl;   //!
   TBranch        *b_L1_SingleEG5_Endcap;   //!
   TBranch        *b_L1_SingleEG5_Endcap_Prescl;   //!
   TBranch        *b_L1_SingleEG8;   //!
   TBranch        *b_L1_SingleEG8_Prescl;   //!
   TBranch        *b_L1_SingleForJet10U;   //!
   TBranch        *b_L1_SingleForJet10U_Prescl;   //!
   TBranch        *b_L1_SingleForJet6U;   //!
   TBranch        *b_L1_SingleForJet6U_Prescl;   //!
   TBranch        *b_L1_SingleHfBitCountsRing1_1;   //!
   TBranch        *b_L1_SingleHfBitCountsRing1_1_Prescl;   //!
   TBranch        *b_L1_SingleHfBitCountsRing2_1;   //!
   TBranch        *b_L1_SingleHfBitCountsRing2_1_Prescl;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing1_200;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing1_200_Prescl;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing1_4;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing1_4_Prescl;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing2_200;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing2_200_Prescl;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing2_4;   //!
   TBranch        *b_L1_SingleHfRingEtSumsRing2_4_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG10;   //!
   TBranch        *b_L1_SingleIsoEG10_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG12;   //!
   TBranch        *b_L1_SingleIsoEG12_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG15;   //!
   TBranch        *b_L1_SingleIsoEG15_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG5;   //!
   TBranch        *b_L1_SingleIsoEG5_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG5_Endcap;   //!
   TBranch        *b_L1_SingleIsoEG5_Endcap_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG8;   //!
   TBranch        *b_L1_SingleIsoEG8_Prescl;   //!
   TBranch        *b_L1_SingleJet10U;   //!
   TBranch        *b_L1_SingleJet10U_Prescl;   //!
   TBranch        *b_L1_SingleJet10U_Barrel;   //!
   TBranch        *b_L1_SingleJet10U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleJet10U_Central;   //!
   TBranch        *b_L1_SingleJet10U_Central_Prescl;   //!
   TBranch        *b_L1_SingleJet10U_Endcap;   //!
   TBranch        *b_L1_SingleJet10U_Endcap_Prescl;   //!
   TBranch        *b_L1_SingleJet20U;   //!
   TBranch        *b_L1_SingleJet20U_Prescl;   //!
   TBranch        *b_L1_SingleJet20U_Barrel;   //!
   TBranch        *b_L1_SingleJet20U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleJet30U;   //!
   TBranch        *b_L1_SingleJet30U_Prescl;   //!
   TBranch        *b_L1_SingleJet30U_Barrel;   //!
   TBranch        *b_L1_SingleJet30U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleJet40U;   //!
   TBranch        *b_L1_SingleJet40U_Prescl;   //!
   TBranch        *b_L1_SingleJet40U_Barrel;   //!
   TBranch        *b_L1_SingleJet40U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleJet50U;   //!
   TBranch        *b_L1_SingleJet50U_Prescl;   //!
   TBranch        *b_L1_SingleJet6U;   //!
   TBranch        *b_L1_SingleJet6U_Prescl;   //!
   TBranch        *b_L1_SingleJet60U;   //!
   TBranch        *b_L1_SingleJet60U_Prescl;   //!
   TBranch        *b_L1_SingleJet6U_Barrel;   //!
   TBranch        *b_L1_SingleJet6U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleJet6U_Central;   //!
   TBranch        *b_L1_SingleJet6U_Central_Prescl;   //!
   TBranch        *b_L1_SingleJet6U_Endcap;   //!
   TBranch        *b_L1_SingleJet6U_Endcap_Prescl;   //!
   TBranch        *b_L1_SingleMu0;   //!
   TBranch        *b_L1_SingleMu0_Prescl;   //!
   TBranch        *b_L1_SingleMu10;   //!
   TBranch        *b_L1_SingleMu10_Prescl;   //!
   TBranch        *b_L1_SingleMu14;   //!
   TBranch        *b_L1_SingleMu14_Prescl;   //!
   TBranch        *b_L1_SingleMu3;   //!
   TBranch        *b_L1_SingleMu3_Prescl;   //!
   TBranch        *b_L1_SingleMu5;   //!
   TBranch        *b_L1_SingleMu5_Prescl;   //!
   TBranch        *b_L1_SingleMu7;   //!
   TBranch        *b_L1_SingleMu7_Prescl;   //!
   TBranch        *b_L1_SingleMuBeamHalo;   //!
   TBranch        *b_L1_SingleMuBeamHalo_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen;   //!
   TBranch        *b_L1_SingleMuOpen_Prescl;   //!
   TBranch        *b_L1_SingleTauJet10U;   //!
   TBranch        *b_L1_SingleTauJet10U_Prescl;   //!
   TBranch        *b_L1_SingleTauJet10U_Barrel;   //!
   TBranch        *b_L1_SingleTauJet10U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleTauJet20U;   //!
   TBranch        *b_L1_SingleTauJet20U_Prescl;   //!
   TBranch        *b_L1_SingleTauJet20U_Barrel;   //!
   TBranch        *b_L1_SingleTauJet20U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleTauJet30U;   //!
   TBranch        *b_L1_SingleTauJet30U_Prescl;   //!
   TBranch        *b_L1_SingleTauJet30U_Barrel;   //!
   TBranch        *b_L1_SingleTauJet30U_Barrel_Prescl;   //!
   TBranch        *b_L1_SingleTauJet50U;   //!
   TBranch        *b_L1_SingleTauJet50U_Prescl;   //!
   TBranch        *b_L1_SingleTauJet8U;   //!
   TBranch        *b_L1_SingleTauJet8U_Prescl;   //!
   TBranch        *b_L1_SingleTauJet8U_Barrel;   //!
   TBranch        *b_L1_SingleTauJet8U_Barrel_Prescl;   //!
   TBranch        *b_L1_TauJet10U_ETM30;   //!
   TBranch        *b_L1_TauJet10U_ETM30_Prescl;   //!
   TBranch        *b_L1_TauJet10U_ETM40;   //!
   TBranch        *b_L1_TauJet10U_ETM40_Prescl;   //!
   TBranch        *b_L1_TripleMu3;   //!
   TBranch        *b_L1_TripleMu3_Prescl;   //!

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
   t->SetBranchAddress("HLT_Physics_v1", &tHlts.HLT_Physics_v1, &tHlts.b_HLT_Physics_v1);
   t->SetBranchAddress("HLT_Physics_v1_Prescl", &tHlts.HLT_Physics_v1_Prescl, &tHlts.b_HLT_Physics_v1_Prescl);
   t->SetBranchAddress("HLT_Random_v1", &tHlts.HLT_Random_v1, &tHlts.b_HLT_Random_v1);
   t->SetBranchAddress("HLT_Random_v1_Prescl", &tHlts.HLT_Random_v1_Prescl, &tHlts.b_HLT_Random_v1_Prescl);
   t->SetBranchAddress("HLT_ZeroBias_v1", &tHlts.HLT_ZeroBias_v1, &tHlts.b_HLT_ZeroBias_v1);
   t->SetBranchAddress("HLT_ZeroBias_v1_Prescl", &tHlts.HLT_ZeroBias_v1_Prescl, &tHlts.b_HLT_ZeroBias_v1_Prescl);
   t->SetBranchAddress("HLTriggerFinalPath", &tHlts.HLTriggerFinalPath, &tHlts.b_HLTriggerFinalPath);
   t->SetBranchAddress("HLTriggerFinalPath_Prescl", &tHlts.HLTriggerFinalPath_Prescl, &tHlts.b_HLTriggerFinalPath_Prescl);
   t->SetBranchAddress("raw2digi_step", &tHlts.raw2digi_step, &tHlts.b_raw2digi_step);
   t->SetBranchAddress("raw2digi_step_Prescl", &tHlts.raw2digi_step_Prescl, &tHlts.b_raw2digi_step_Prescl);
   t->SetBranchAddress("L1Reco_step", &tHlts.L1Reco_step, &tHlts.b_L1Reco_step);
   t->SetBranchAddress("L1Reco_step_Prescl", &tHlts.L1Reco_step_Prescl, &tHlts.b_L1Reco_step_Prescl);
   t->SetBranchAddress("L1_DoubleEG1", &tHlts.L1_DoubleEG1, &tHlts.b_L1_DoubleEG1);
   t->SetBranchAddress("L1_DoubleEG1_Prescl", &tHlts.L1_DoubleEG1_Prescl, &tHlts.b_L1_DoubleEG1_Prescl);
   t->SetBranchAddress("L1_DoubleEG10", &tHlts.L1_DoubleEG10, &tHlts.b_L1_DoubleEG10);
   t->SetBranchAddress("L1_DoubleEG10_Prescl", &tHlts.L1_DoubleEG10_Prescl, &tHlts.b_L1_DoubleEG10_Prescl);
   t->SetBranchAddress("L1_DoubleEG5", &tHlts.L1_DoubleEG5, &tHlts.b_L1_DoubleEG5);
   t->SetBranchAddress("L1_DoubleEG5_Prescl", &tHlts.L1_DoubleEG5_Prescl, &tHlts.b_L1_DoubleEG5_Prescl);
   t->SetBranchAddress("L1_DoubleForJet20U", &tHlts.L1_DoubleForJet20U, &tHlts.b_L1_DoubleForJet20U);
   t->SetBranchAddress("L1_DoubleForJet20U_Prescl", &tHlts.L1_DoubleForJet20U_Prescl, &tHlts.b_L1_DoubleForJet20U_Prescl);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing1_P1N1", &tHlts.L1_DoubleHfBitCountsRing1_P1N1, &tHlts.b_L1_DoubleHfBitCountsRing1_P1N1);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing1_P1N1_Prescl", &tHlts.L1_DoubleHfBitCountsRing1_P1N1_Prescl, &tHlts.b_L1_DoubleHfBitCountsRing1_P1N1_Prescl);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing2_P1N1", &tHlts.L1_DoubleHfBitCountsRing2_P1N1, &tHlts.b_L1_DoubleHfBitCountsRing2_P1N1);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing2_P1N1_Prescl", &tHlts.L1_DoubleHfBitCountsRing2_P1N1_Prescl, &tHlts.b_L1_DoubleHfBitCountsRing2_P1N1_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P200N200", &tHlts.L1_DoubleHfRingEtSumsRing1_P200N200, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P200N200);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P200N200_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing1_P200N200_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P200N200_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P4N4", &tHlts.L1_DoubleHfRingEtSumsRing1_P4N4, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P4N4);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P4N4_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing1_P4N4_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P4N4_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P200N200", &tHlts.L1_DoubleHfRingEtSumsRing2_P200N200, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P200N200);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P200N200_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing2_P200N200_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P200N200_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P4N4", &tHlts.L1_DoubleHfRingEtSumsRing2_P4N4, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P4N4);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P4N4_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing2_P4N4_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P4N4_Prescl);
   t->SetBranchAddress("L1_DoubleIsoEG05_TopBottom", &tHlts.L1_DoubleIsoEG05_TopBottom, &tHlts.b_L1_DoubleIsoEG05_TopBottom);
   t->SetBranchAddress("L1_DoubleIsoEG05_TopBottom_Prescl", &tHlts.L1_DoubleIsoEG05_TopBottom_Prescl, &tHlts.b_L1_DoubleIsoEG05_TopBottom_Prescl);
   t->SetBranchAddress("L1_DoubleIsoEG05_TopBottomCen", &tHlts.L1_DoubleIsoEG05_TopBottomCen, &tHlts.b_L1_DoubleIsoEG05_TopBottomCen);
   t->SetBranchAddress("L1_DoubleIsoEG05_TopBottomCen_Prescl", &tHlts.L1_DoubleIsoEG05_TopBottomCen_Prescl, &tHlts.b_L1_DoubleIsoEG05_TopBottomCen_Prescl);
   t->SetBranchAddress("L1_DoubleIsoEG10", &tHlts.L1_DoubleIsoEG10, &tHlts.b_L1_DoubleIsoEG10);
   t->SetBranchAddress("L1_DoubleIsoEG10_Prescl", &tHlts.L1_DoubleIsoEG10_Prescl, &tHlts.b_L1_DoubleIsoEG10_Prescl);
   t->SetBranchAddress("L1_DoubleIsoEG8", &tHlts.L1_DoubleIsoEG8, &tHlts.b_L1_DoubleIsoEG8);
   t->SetBranchAddress("L1_DoubleIsoEG8_Prescl", &tHlts.L1_DoubleIsoEG8_Prescl, &tHlts.b_L1_DoubleIsoEG8_Prescl);
   t->SetBranchAddress("L1_DoubleJet40U", &tHlts.L1_DoubleJet40U, &tHlts.b_L1_DoubleJet40U);
   t->SetBranchAddress("L1_DoubleJet40U_Prescl", &tHlts.L1_DoubleJet40U_Prescl, &tHlts.b_L1_DoubleJet40U_Prescl);
   t->SetBranchAddress("L1_DoubleJet60U", &tHlts.L1_DoubleJet60U, &tHlts.b_L1_DoubleJet60U);
   t->SetBranchAddress("L1_DoubleJet60U_Prescl", &tHlts.L1_DoubleJet60U_Prescl, &tHlts.b_L1_DoubleJet60U_Prescl);
   t->SetBranchAddress("L1_DoubleMu3", &tHlts.L1_DoubleMu3, &tHlts.b_L1_DoubleMu3);
   t->SetBranchAddress("L1_DoubleMu3_Prescl", &tHlts.L1_DoubleMu3_Prescl, &tHlts.b_L1_DoubleMu3_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen", &tHlts.L1_DoubleMuOpen, &tHlts.b_L1_DoubleMuOpen);
   t->SetBranchAddress("L1_DoubleMuOpen_Prescl", &tHlts.L1_DoubleMuOpen_Prescl, &tHlts.b_L1_DoubleMuOpen_Prescl);
   t->SetBranchAddress("L1_DoubleMuTopBottom", &tHlts.L1_DoubleMuTopBottom, &tHlts.b_L1_DoubleMuTopBottom);
   t->SetBranchAddress("L1_DoubleMuTopBottom_Prescl", &tHlts.L1_DoubleMuTopBottom_Prescl, &tHlts.b_L1_DoubleMuTopBottom_Prescl);
   t->SetBranchAddress("L1_DoubleNoIsoEG05_TopBottom", &tHlts.L1_DoubleNoIsoEG05_TopBottom, &tHlts.b_L1_DoubleNoIsoEG05_TopBottom);
   t->SetBranchAddress("L1_DoubleNoIsoEG05_TopBottom_Prescl", &tHlts.L1_DoubleNoIsoEG05_TopBottom_Prescl, &tHlts.b_L1_DoubleNoIsoEG05_TopBottom_Prescl);
   t->SetBranchAddress("L1_DoubleNoIsoEG05_TopBottomCen", &tHlts.L1_DoubleNoIsoEG05_TopBottomCen, &tHlts.b_L1_DoubleNoIsoEG05_TopBottomCen);
   t->SetBranchAddress("L1_DoubleNoIsoEG05_TopBottomCen_Prescl", &tHlts.L1_DoubleNoIsoEG05_TopBottomCen_Prescl, &tHlts.b_L1_DoubleNoIsoEG05_TopBottomCen_Prescl);
   t->SetBranchAddress("L1_DoubleTauJet20U", &tHlts.L1_DoubleTauJet20U, &tHlts.b_L1_DoubleTauJet20U);
   t->SetBranchAddress("L1_DoubleTauJet20U_Prescl", &tHlts.L1_DoubleTauJet20U_Prescl, &tHlts.b_L1_DoubleTauJet20U_Prescl);
   t->SetBranchAddress("L1_DoubleTauJet8U", &tHlts.L1_DoubleTauJet8U, &tHlts.b_L1_DoubleTauJet8U);
   t->SetBranchAddress("L1_DoubleTauJet8U_Prescl", &tHlts.L1_DoubleTauJet8U_Prescl, &tHlts.b_L1_DoubleTauJet8U_Prescl);
   t->SetBranchAddress("L1_EG12_Jet40U", &tHlts.L1_EG12_Jet40U, &tHlts.b_L1_EG12_Jet40U);
   t->SetBranchAddress("L1_EG12_Jet40U_Prescl", &tHlts.L1_EG12_Jet40U_Prescl, &tHlts.b_L1_EG12_Jet40U_Prescl);
   t->SetBranchAddress("L1_ETM20", &tHlts.L1_ETM20, &tHlts.b_L1_ETM20);
   t->SetBranchAddress("L1_ETM20_Prescl", &tHlts.L1_ETM20_Prescl, &tHlts.b_L1_ETM20_Prescl);
   t->SetBranchAddress("L1_ETM30", &tHlts.L1_ETM30, &tHlts.b_L1_ETM30);
   t->SetBranchAddress("L1_ETM30_Prescl", &tHlts.L1_ETM30_Prescl, &tHlts.b_L1_ETM30_Prescl);
   t->SetBranchAddress("L1_ETM40", &tHlts.L1_ETM40, &tHlts.b_L1_ETM40);
   t->SetBranchAddress("L1_ETM40_Prescl", &tHlts.L1_ETM40_Prescl, &tHlts.b_L1_ETM40_Prescl);
   t->SetBranchAddress("L1_ETM50", &tHlts.L1_ETM50, &tHlts.b_L1_ETM50);
   t->SetBranchAddress("L1_ETM50_Prescl", &tHlts.L1_ETM50_Prescl, &tHlts.b_L1_ETM50_Prescl);
   t->SetBranchAddress("L1_ETT60", &tHlts.L1_ETT60, &tHlts.b_L1_ETT60);
   t->SetBranchAddress("L1_ETT60_Prescl", &tHlts.L1_ETT60_Prescl, &tHlts.b_L1_ETT60_Prescl);
   t->SetBranchAddress("L1_HTT100", &tHlts.L1_HTT100, &tHlts.b_L1_HTT100);
   t->SetBranchAddress("L1_HTT100_Prescl", &tHlts.L1_HTT100_Prescl, &tHlts.b_L1_HTT100_Prescl);
   t->SetBranchAddress("L1_HTT200", &tHlts.L1_HTT200, &tHlts.b_L1_HTT200);
   t->SetBranchAddress("L1_HTT200_Prescl", &tHlts.L1_HTT200_Prescl, &tHlts.b_L1_HTT200_Prescl);
   t->SetBranchAddress("L1_HTT300", &tHlts.L1_HTT300, &tHlts.b_L1_HTT300);
   t->SetBranchAddress("L1_HTT300_Prescl", &tHlts.L1_HTT300_Prescl, &tHlts.b_L1_HTT300_Prescl);
   t->SetBranchAddress("L1_IsoEG10_Jet12U", &tHlts.L1_IsoEG10_Jet12U, &tHlts.b_L1_IsoEG10_Jet12U);
   t->SetBranchAddress("L1_IsoEG10_Jet12U_Prescl", &tHlts.L1_IsoEG10_Jet12U_Prescl, &tHlts.b_L1_IsoEG10_Jet12U_Prescl);
   t->SetBranchAddress("L1_IsoEG10_Jet6U", &tHlts.L1_IsoEG10_Jet6U, &tHlts.b_L1_IsoEG10_Jet6U);
   t->SetBranchAddress("L1_IsoEG10_Jet6U_Prescl", &tHlts.L1_IsoEG10_Jet6U_Prescl, &tHlts.b_L1_IsoEG10_Jet6U_Prescl);
   t->SetBranchAddress("L1_IsoEG10_Jet6U_ForJet6U", &tHlts.L1_IsoEG10_Jet6U_ForJet6U, &tHlts.b_L1_IsoEG10_Jet6U_ForJet6U);
   t->SetBranchAddress("L1_IsoEG10_Jet6U_ForJet6U_Prescl", &tHlts.L1_IsoEG10_Jet6U_ForJet6U_Prescl, &tHlts.b_L1_IsoEG10_Jet6U_ForJet6U_Prescl);
   t->SetBranchAddress("L1_IsoEG10_Jet8U", &tHlts.L1_IsoEG10_Jet8U, &tHlts.b_L1_IsoEG10_Jet8U);
   t->SetBranchAddress("L1_IsoEG10_Jet8U_Prescl", &tHlts.L1_IsoEG10_Jet8U_Prescl, &tHlts.b_L1_IsoEG10_Jet8U_Prescl);
   t->SetBranchAddress("L1_IsoEG10_TauJet8U", &tHlts.L1_IsoEG10_TauJet8U, &tHlts.b_L1_IsoEG10_TauJet8U);
   t->SetBranchAddress("L1_IsoEG10_TauJet8U_Prescl", &tHlts.L1_IsoEG10_TauJet8U_Prescl, &tHlts.b_L1_IsoEG10_TauJet8U_Prescl);
   t->SetBranchAddress("L1_MinBias_ETT10", &tHlts.L1_MinBias_ETT10, &tHlts.b_L1_MinBias_ETT10);
   t->SetBranchAddress("L1_MinBias_ETT10_Prescl", &tHlts.L1_MinBias_ETT10_Prescl, &tHlts.b_L1_MinBias_ETT10_Prescl);
   t->SetBranchAddress("L1_MinBias_HTT10", &tHlts.L1_MinBias_HTT10, &tHlts.b_L1_MinBias_HTT10);
   t->SetBranchAddress("L1_MinBias_HTT10_Prescl", &tHlts.L1_MinBias_HTT10_Prescl, &tHlts.b_L1_MinBias_HTT10_Prescl);
   t->SetBranchAddress("L1_Mu3QFC_EG12", &tHlts.L1_Mu3QFC_EG12, &tHlts.b_L1_Mu3QFC_EG12);
   t->SetBranchAddress("L1_Mu3QFC_EG12_Prescl", &tHlts.L1_Mu3QFC_EG12_Prescl, &tHlts.b_L1_Mu3QFC_EG12_Prescl);
   t->SetBranchAddress("L1_Mu3QFC_IsoEG5", &tHlts.L1_Mu3QFC_IsoEG5, &tHlts.b_L1_Mu3QFC_IsoEG5);
   t->SetBranchAddress("L1_Mu3QFC_IsoEG5_Prescl", &tHlts.L1_Mu3QFC_IsoEG5_Prescl, &tHlts.b_L1_Mu3QFC_IsoEG5_Prescl);
   t->SetBranchAddress("L1_Mu3QFC_Jet6U", &tHlts.L1_Mu3QFC_Jet6U, &tHlts.b_L1_Mu3QFC_Jet6U);
   t->SetBranchAddress("L1_Mu3QFC_Jet6U_Prescl", &tHlts.L1_Mu3QFC_Jet6U_Prescl, &tHlts.b_L1_Mu3QFC_Jet6U_Prescl);
   t->SetBranchAddress("L1_Mu5QFC_IsoEG10", &tHlts.L1_Mu5QFC_IsoEG10, &tHlts.b_L1_Mu5QFC_IsoEG10);
   t->SetBranchAddress("L1_Mu5QFC_IsoEG10_Prescl", &tHlts.L1_Mu5QFC_IsoEG10_Prescl, &tHlts.b_L1_Mu5QFC_IsoEG10_Prescl);
   t->SetBranchAddress("L1_Mu5QFC_Jet6U", &tHlts.L1_Mu5QFC_Jet6U, &tHlts.b_L1_Mu5QFC_Jet6U);
   t->SetBranchAddress("L1_Mu5QFC_Jet6U_Prescl", &tHlts.L1_Mu5QFC_Jet6U_Prescl, &tHlts.b_L1_Mu5QFC_Jet6U_Prescl);
   t->SetBranchAddress("L1_Mu5QFC_TauJet8U", &tHlts.L1_Mu5QFC_TauJet8U, &tHlts.b_L1_Mu5QFC_TauJet8U);
   t->SetBranchAddress("L1_Mu5QFC_TauJet8U_Prescl", &tHlts.L1_Mu5QFC_TauJet8U_Prescl, &tHlts.b_L1_Mu5QFC_TauJet8U_Prescl);
   t->SetBranchAddress("L1_SingleEG1", &tHlts.L1_SingleEG1, &tHlts.b_L1_SingleEG1);
   t->SetBranchAddress("L1_SingleEG1_Prescl", &tHlts.L1_SingleEG1_Prescl, &tHlts.b_L1_SingleEG1_Prescl);
   t->SetBranchAddress("L1_SingleEG10", &tHlts.L1_SingleEG10, &tHlts.b_L1_SingleEG10);
   t->SetBranchAddress("L1_SingleEG10_Prescl", &tHlts.L1_SingleEG10_Prescl, &tHlts.b_L1_SingleEG10_Prescl);
   t->SetBranchAddress("L1_SingleEG12", &tHlts.L1_SingleEG12, &tHlts.b_L1_SingleEG12);
   t->SetBranchAddress("L1_SingleEG12_Prescl", &tHlts.L1_SingleEG12_Prescl, &tHlts.b_L1_SingleEG12_Prescl);
   t->SetBranchAddress("L1_SingleEG15", &tHlts.L1_SingleEG15, &tHlts.b_L1_SingleEG15);
   t->SetBranchAddress("L1_SingleEG15_Prescl", &tHlts.L1_SingleEG15_Prescl, &tHlts.b_L1_SingleEG15_Prescl);
   t->SetBranchAddress("L1_SingleEG20", &tHlts.L1_SingleEG20, &tHlts.b_L1_SingleEG20);
   t->SetBranchAddress("L1_SingleEG20_Prescl", &tHlts.L1_SingleEG20_Prescl, &tHlts.b_L1_SingleEG20_Prescl);
   t->SetBranchAddress("L1_SingleEG5", &tHlts.L1_SingleEG5, &tHlts.b_L1_SingleEG5);
   t->SetBranchAddress("L1_SingleEG5_Prescl", &tHlts.L1_SingleEG5_Prescl, &tHlts.b_L1_SingleEG5_Prescl);
   t->SetBranchAddress("L1_SingleEG5_Endcap", &tHlts.L1_SingleEG5_Endcap, &tHlts.b_L1_SingleEG5_Endcap);
   t->SetBranchAddress("L1_SingleEG5_Endcap_Prescl", &tHlts.L1_SingleEG5_Endcap_Prescl, &tHlts.b_L1_SingleEG5_Endcap_Prescl);
   t->SetBranchAddress("L1_SingleEG8", &tHlts.L1_SingleEG8, &tHlts.b_L1_SingleEG8);
   t->SetBranchAddress("L1_SingleEG8_Prescl", &tHlts.L1_SingleEG8_Prescl, &tHlts.b_L1_SingleEG8_Prescl);
   t->SetBranchAddress("L1_SingleForJet10U", &tHlts.L1_SingleForJet10U, &tHlts.b_L1_SingleForJet10U);
   t->SetBranchAddress("L1_SingleForJet10U_Prescl", &tHlts.L1_SingleForJet10U_Prescl, &tHlts.b_L1_SingleForJet10U_Prescl);
   t->SetBranchAddress("L1_SingleForJet6U", &tHlts.L1_SingleForJet6U, &tHlts.b_L1_SingleForJet6U);
   t->SetBranchAddress("L1_SingleForJet6U_Prescl", &tHlts.L1_SingleForJet6U_Prescl, &tHlts.b_L1_SingleForJet6U_Prescl);
   t->SetBranchAddress("L1_SingleHfBitCountsRing1_1", &tHlts.L1_SingleHfBitCountsRing1_1, &tHlts.b_L1_SingleHfBitCountsRing1_1);
   t->SetBranchAddress("L1_SingleHfBitCountsRing1_1_Prescl", &tHlts.L1_SingleHfBitCountsRing1_1_Prescl, &tHlts.b_L1_SingleHfBitCountsRing1_1_Prescl);
   t->SetBranchAddress("L1_SingleHfBitCountsRing2_1", &tHlts.L1_SingleHfBitCountsRing2_1, &tHlts.b_L1_SingleHfBitCountsRing2_1);
   t->SetBranchAddress("L1_SingleHfBitCountsRing2_1_Prescl", &tHlts.L1_SingleHfBitCountsRing2_1_Prescl, &tHlts.b_L1_SingleHfBitCountsRing2_1_Prescl);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing1_200", &tHlts.L1_SingleHfRingEtSumsRing1_200, &tHlts.b_L1_SingleHfRingEtSumsRing1_200);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing1_200_Prescl", &tHlts.L1_SingleHfRingEtSumsRing1_200_Prescl, &tHlts.b_L1_SingleHfRingEtSumsRing1_200_Prescl);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing1_4", &tHlts.L1_SingleHfRingEtSumsRing1_4, &tHlts.b_L1_SingleHfRingEtSumsRing1_4);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing1_4_Prescl", &tHlts.L1_SingleHfRingEtSumsRing1_4_Prescl, &tHlts.b_L1_SingleHfRingEtSumsRing1_4_Prescl);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing2_200", &tHlts.L1_SingleHfRingEtSumsRing2_200, &tHlts.b_L1_SingleHfRingEtSumsRing2_200);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing2_200_Prescl", &tHlts.L1_SingleHfRingEtSumsRing2_200_Prescl, &tHlts.b_L1_SingleHfRingEtSumsRing2_200_Prescl);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing2_4", &tHlts.L1_SingleHfRingEtSumsRing2_4, &tHlts.b_L1_SingleHfRingEtSumsRing2_4);
   t->SetBranchAddress("L1_SingleHfRingEtSumsRing2_4_Prescl", &tHlts.L1_SingleHfRingEtSumsRing2_4_Prescl, &tHlts.b_L1_SingleHfRingEtSumsRing2_4_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG10", &tHlts.L1_SingleIsoEG10, &tHlts.b_L1_SingleIsoEG10);
   t->SetBranchAddress("L1_SingleIsoEG10_Prescl", &tHlts.L1_SingleIsoEG10_Prescl, &tHlts.b_L1_SingleIsoEG10_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG12", &tHlts.L1_SingleIsoEG12, &tHlts.b_L1_SingleIsoEG12);
   t->SetBranchAddress("L1_SingleIsoEG12_Prescl", &tHlts.L1_SingleIsoEG12_Prescl, &tHlts.b_L1_SingleIsoEG12_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG15", &tHlts.L1_SingleIsoEG15, &tHlts.b_L1_SingleIsoEG15);
   t->SetBranchAddress("L1_SingleIsoEG15_Prescl", &tHlts.L1_SingleIsoEG15_Prescl, &tHlts.b_L1_SingleIsoEG15_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG5", &tHlts.L1_SingleIsoEG5, &tHlts.b_L1_SingleIsoEG5);
   t->SetBranchAddress("L1_SingleIsoEG5_Prescl", &tHlts.L1_SingleIsoEG5_Prescl, &tHlts.b_L1_SingleIsoEG5_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG5_Endcap", &tHlts.L1_SingleIsoEG5_Endcap, &tHlts.b_L1_SingleIsoEG5_Endcap);
   t->SetBranchAddress("L1_SingleIsoEG5_Endcap_Prescl", &tHlts.L1_SingleIsoEG5_Endcap_Prescl, &tHlts.b_L1_SingleIsoEG5_Endcap_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG8", &tHlts.L1_SingleIsoEG8, &tHlts.b_L1_SingleIsoEG8);
   t->SetBranchAddress("L1_SingleIsoEG8_Prescl", &tHlts.L1_SingleIsoEG8_Prescl, &tHlts.b_L1_SingleIsoEG8_Prescl);
   t->SetBranchAddress("L1_SingleJet10U", &tHlts.L1_SingleJet10U, &tHlts.b_L1_SingleJet10U);
   t->SetBranchAddress("L1_SingleJet10U_Prescl", &tHlts.L1_SingleJet10U_Prescl, &tHlts.b_L1_SingleJet10U_Prescl);
   t->SetBranchAddress("L1_SingleJet10U_Barrel", &tHlts.L1_SingleJet10U_Barrel, &tHlts.b_L1_SingleJet10U_Barrel);
   t->SetBranchAddress("L1_SingleJet10U_Barrel_Prescl", &tHlts.L1_SingleJet10U_Barrel_Prescl, &tHlts.b_L1_SingleJet10U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleJet10U_Central", &tHlts.L1_SingleJet10U_Central, &tHlts.b_L1_SingleJet10U_Central);
   t->SetBranchAddress("L1_SingleJet10U_Central_Prescl", &tHlts.L1_SingleJet10U_Central_Prescl, &tHlts.b_L1_SingleJet10U_Central_Prescl);
   t->SetBranchAddress("L1_SingleJet10U_Endcap", &tHlts.L1_SingleJet10U_Endcap, &tHlts.b_L1_SingleJet10U_Endcap);
   t->SetBranchAddress("L1_SingleJet10U_Endcap_Prescl", &tHlts.L1_SingleJet10U_Endcap_Prescl, &tHlts.b_L1_SingleJet10U_Endcap_Prescl);
   t->SetBranchAddress("L1_SingleJet20U", &tHlts.L1_SingleJet20U, &tHlts.b_L1_SingleJet20U);
   t->SetBranchAddress("L1_SingleJet20U_Prescl", &tHlts.L1_SingleJet20U_Prescl, &tHlts.b_L1_SingleJet20U_Prescl);
   t->SetBranchAddress("L1_SingleJet20U_Barrel", &tHlts.L1_SingleJet20U_Barrel, &tHlts.b_L1_SingleJet20U_Barrel);
   t->SetBranchAddress("L1_SingleJet20U_Barrel_Prescl", &tHlts.L1_SingleJet20U_Barrel_Prescl, &tHlts.b_L1_SingleJet20U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleJet30U", &tHlts.L1_SingleJet30U, &tHlts.b_L1_SingleJet30U);
   t->SetBranchAddress("L1_SingleJet30U_Prescl", &tHlts.L1_SingleJet30U_Prescl, &tHlts.b_L1_SingleJet30U_Prescl);
   t->SetBranchAddress("L1_SingleJet30U_Barrel", &tHlts.L1_SingleJet30U_Barrel, &tHlts.b_L1_SingleJet30U_Barrel);
   t->SetBranchAddress("L1_SingleJet30U_Barrel_Prescl", &tHlts.L1_SingleJet30U_Barrel_Prescl, &tHlts.b_L1_SingleJet30U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleJet40U", &tHlts.L1_SingleJet40U, &tHlts.b_L1_SingleJet40U);
   t->SetBranchAddress("L1_SingleJet40U_Prescl", &tHlts.L1_SingleJet40U_Prescl, &tHlts.b_L1_SingleJet40U_Prescl);
   t->SetBranchAddress("L1_SingleJet40U_Barrel", &tHlts.L1_SingleJet40U_Barrel, &tHlts.b_L1_SingleJet40U_Barrel);
   t->SetBranchAddress("L1_SingleJet40U_Barrel_Prescl", &tHlts.L1_SingleJet40U_Barrel_Prescl, &tHlts.b_L1_SingleJet40U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleJet50U", &tHlts.L1_SingleJet50U, &tHlts.b_L1_SingleJet50U);
   t->SetBranchAddress("L1_SingleJet50U_Prescl", &tHlts.L1_SingleJet50U_Prescl, &tHlts.b_L1_SingleJet50U_Prescl);
   t->SetBranchAddress("L1_SingleJet6U", &tHlts.L1_SingleJet6U, &tHlts.b_L1_SingleJet6U);
   t->SetBranchAddress("L1_SingleJet6U_Prescl", &tHlts.L1_SingleJet6U_Prescl, &tHlts.b_L1_SingleJet6U_Prescl);
   t->SetBranchAddress("L1_SingleJet60U", &tHlts.L1_SingleJet60U, &tHlts.b_L1_SingleJet60U);
   t->SetBranchAddress("L1_SingleJet60U_Prescl", &tHlts.L1_SingleJet60U_Prescl, &tHlts.b_L1_SingleJet60U_Prescl);
   t->SetBranchAddress("L1_SingleJet6U_Barrel", &tHlts.L1_SingleJet6U_Barrel, &tHlts.b_L1_SingleJet6U_Barrel);
   t->SetBranchAddress("L1_SingleJet6U_Barrel_Prescl", &tHlts.L1_SingleJet6U_Barrel_Prescl, &tHlts.b_L1_SingleJet6U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleJet6U_Central", &tHlts.L1_SingleJet6U_Central, &tHlts.b_L1_SingleJet6U_Central);
   t->SetBranchAddress("L1_SingleJet6U_Central_Prescl", &tHlts.L1_SingleJet6U_Central_Prescl, &tHlts.b_L1_SingleJet6U_Central_Prescl);
   t->SetBranchAddress("L1_SingleJet6U_Endcap", &tHlts.L1_SingleJet6U_Endcap, &tHlts.b_L1_SingleJet6U_Endcap);
   t->SetBranchAddress("L1_SingleJet6U_Endcap_Prescl", &tHlts.L1_SingleJet6U_Endcap_Prescl, &tHlts.b_L1_SingleJet6U_Endcap_Prescl);
   t->SetBranchAddress("L1_SingleMu0", &tHlts.L1_SingleMu0, &tHlts.b_L1_SingleMu0);
   t->SetBranchAddress("L1_SingleMu0_Prescl", &tHlts.L1_SingleMu0_Prescl, &tHlts.b_L1_SingleMu0_Prescl);
   t->SetBranchAddress("L1_SingleMu10", &tHlts.L1_SingleMu10, &tHlts.b_L1_SingleMu10);
   t->SetBranchAddress("L1_SingleMu10_Prescl", &tHlts.L1_SingleMu10_Prescl, &tHlts.b_L1_SingleMu10_Prescl);
   t->SetBranchAddress("L1_SingleMu14", &tHlts.L1_SingleMu14, &tHlts.b_L1_SingleMu14);
   t->SetBranchAddress("L1_SingleMu14_Prescl", &tHlts.L1_SingleMu14_Prescl, &tHlts.b_L1_SingleMu14_Prescl);
   t->SetBranchAddress("L1_SingleMu3", &tHlts.L1_SingleMu3, &tHlts.b_L1_SingleMu3);
   t->SetBranchAddress("L1_SingleMu3_Prescl", &tHlts.L1_SingleMu3_Prescl, &tHlts.b_L1_SingleMu3_Prescl);
   t->SetBranchAddress("L1_SingleMu5", &tHlts.L1_SingleMu5, &tHlts.b_L1_SingleMu5);
   t->SetBranchAddress("L1_SingleMu5_Prescl", &tHlts.L1_SingleMu5_Prescl, &tHlts.b_L1_SingleMu5_Prescl);
   t->SetBranchAddress("L1_SingleMu7", &tHlts.L1_SingleMu7, &tHlts.b_L1_SingleMu7);
   t->SetBranchAddress("L1_SingleMu7_Prescl", &tHlts.L1_SingleMu7_Prescl, &tHlts.b_L1_SingleMu7_Prescl);
   t->SetBranchAddress("L1_SingleMuBeamHalo", &tHlts.L1_SingleMuBeamHalo, &tHlts.b_L1_SingleMuBeamHalo);
   t->SetBranchAddress("L1_SingleMuBeamHalo_Prescl", &tHlts.L1_SingleMuBeamHalo_Prescl, &tHlts.b_L1_SingleMuBeamHalo_Prescl);
   t->SetBranchAddress("L1_SingleMuOpen", &tHlts.L1_SingleMuOpen, &tHlts.b_L1_SingleMuOpen);
   t->SetBranchAddress("L1_SingleMuOpen_Prescl", &tHlts.L1_SingleMuOpen_Prescl, &tHlts.b_L1_SingleMuOpen_Prescl);
   t->SetBranchAddress("L1_SingleTauJet10U", &tHlts.L1_SingleTauJet10U, &tHlts.b_L1_SingleTauJet10U);
   t->SetBranchAddress("L1_SingleTauJet10U_Prescl", &tHlts.L1_SingleTauJet10U_Prescl, &tHlts.b_L1_SingleTauJet10U_Prescl);
   t->SetBranchAddress("L1_SingleTauJet10U_Barrel", &tHlts.L1_SingleTauJet10U_Barrel, &tHlts.b_L1_SingleTauJet10U_Barrel);
   t->SetBranchAddress("L1_SingleTauJet10U_Barrel_Prescl", &tHlts.L1_SingleTauJet10U_Barrel_Prescl, &tHlts.b_L1_SingleTauJet10U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleTauJet20U", &tHlts.L1_SingleTauJet20U, &tHlts.b_L1_SingleTauJet20U);
   t->SetBranchAddress("L1_SingleTauJet20U_Prescl", &tHlts.L1_SingleTauJet20U_Prescl, &tHlts.b_L1_SingleTauJet20U_Prescl);
   t->SetBranchAddress("L1_SingleTauJet20U_Barrel", &tHlts.L1_SingleTauJet20U_Barrel, &tHlts.b_L1_SingleTauJet20U_Barrel);
   t->SetBranchAddress("L1_SingleTauJet20U_Barrel_Prescl", &tHlts.L1_SingleTauJet20U_Barrel_Prescl, &tHlts.b_L1_SingleTauJet20U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleTauJet30U", &tHlts.L1_SingleTauJet30U, &tHlts.b_L1_SingleTauJet30U);
   t->SetBranchAddress("L1_SingleTauJet30U_Prescl", &tHlts.L1_SingleTauJet30U_Prescl, &tHlts.b_L1_SingleTauJet30U_Prescl);
   t->SetBranchAddress("L1_SingleTauJet30U_Barrel", &tHlts.L1_SingleTauJet30U_Barrel, &tHlts.b_L1_SingleTauJet30U_Barrel);
   t->SetBranchAddress("L1_SingleTauJet30U_Barrel_Prescl", &tHlts.L1_SingleTauJet30U_Barrel_Prescl, &tHlts.b_L1_SingleTauJet30U_Barrel_Prescl);
   t->SetBranchAddress("L1_SingleTauJet50U", &tHlts.L1_SingleTauJet50U, &tHlts.b_L1_SingleTauJet50U);
   t->SetBranchAddress("L1_SingleTauJet50U_Prescl", &tHlts.L1_SingleTauJet50U_Prescl, &tHlts.b_L1_SingleTauJet50U_Prescl);
   t->SetBranchAddress("L1_SingleTauJet8U", &tHlts.L1_SingleTauJet8U, &tHlts.b_L1_SingleTauJet8U);
   t->SetBranchAddress("L1_SingleTauJet8U_Prescl", &tHlts.L1_SingleTauJet8U_Prescl, &tHlts.b_L1_SingleTauJet8U_Prescl);
   t->SetBranchAddress("L1_SingleTauJet8U_Barrel", &tHlts.L1_SingleTauJet8U_Barrel, &tHlts.b_L1_SingleTauJet8U_Barrel);
   t->SetBranchAddress("L1_SingleTauJet8U_Barrel_Prescl", &tHlts.L1_SingleTauJet8U_Barrel_Prescl, &tHlts.b_L1_SingleTauJet8U_Barrel_Prescl);
   t->SetBranchAddress("L1_TauJet10U_ETM30", &tHlts.L1_TauJet10U_ETM30, &tHlts.b_L1_TauJet10U_ETM30);
   t->SetBranchAddress("L1_TauJet10U_ETM30_Prescl", &tHlts.L1_TauJet10U_ETM30_Prescl, &tHlts.b_L1_TauJet10U_ETM30_Prescl);
   t->SetBranchAddress("L1_TauJet10U_ETM40", &tHlts.L1_TauJet10U_ETM40, &tHlts.b_L1_TauJet10U_ETM40);
   t->SetBranchAddress("L1_TauJet10U_ETM40_Prescl", &tHlts.L1_TauJet10U_ETM40_Prescl, &tHlts.b_L1_TauJet10U_ETM40_Prescl);
   t->SetBranchAddress("L1_TripleMu3", &tHlts.L1_TripleMu3, &tHlts.b_L1_TripleMu3);
   t->SetBranchAddress("L1_TripleMu3_Prescl", &tHlts.L1_TripleMu3_Prescl, &tHlts.b_L1_TripleMu3_Prescl);
   if (doCheck) {
      if (t->GetMaximum("NL1IsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1IsolEm too small!!!  "<<t->GetMaximum("NL1IsolEm")<<endl;
      if (t->GetMaximum("NL1NIsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1NIsolEm too small!!!  "<<t->GetMaximum("NL1NIsolEm")<<endl;
      if (t->GetMaximum("NL1Mu")>8) cout <<"FATAL ERROR: Arrary size of NL1Mu too small!!!  "<<t->GetMaximum("NL1Mu")<<endl;
      if (t->GetMaximum("NL1CenJet")>8) cout <<"FATAL ERROR: Arrary size of NL1CenJet too small!!!  "<<t->GetMaximum("NL1CenJet")<<endl;
      if (t->GetMaximum("NL1ForJet")>8) cout <<"FATAL ERROR: Arrary size of NL1ForJet too small!!!  "<<t->GetMaximum("NL1ForJet")<<endl;
      if (t->GetMaximum("NL1Tau")>8) cout <<"FATAL ERROR: Arrary size of NL1Tau too small!!!  "<<t->GetMaximum("NL1Tau")<<endl;
   }
}

