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

class Skims {
public :
   Skims(){};
   ~Skims(){};

   // Declaration of leaf types
   Int_t           ana_step;
   Int_t           pcollisionEventSelection;
   Int_t           pHBHENoiseFilterResultProducer;
   Int_t           pprimaryVertexFilter;
   Int_t           phfCoincFilter1;
   Int_t           phfCoincFilter2;
   Int_t           phfCoincFilter3;
   Int_t           phfCoincFilter4;
   Int_t           phfCoincFilter5;
   Int_t           pclusterCompatibilityFilter;
   Int_t           HBHENoiseFilterResultRun1;
   Int_t           HBHENoiseFilterResultRun2Loose;
   Int_t           HBHENoiseFilterResultRun2Tight;
   Int_t           HBHENoiseFilterResult;
   Int_t           HBHEIsoNoiseFilterResult;

   // List of branches
   TBranch        *b_ana_step;   //!
   TBranch        *b_pcollisionEventSelection;   //!
   TBranch        *b_pHBHENoiseFilterResultProducer;   //!
   TBranch        *b_pprimaryVertexFilter;   //!
   TBranch        *b_phfCoincFilter1;   //!
   TBranch        *b_phfCoincFilter2;   //!
   TBranch        *b_phfCoincFilter3;   //!
   TBranch        *b_phfCoincFilter4;   //!
   TBranch        *b_phfCoincFilter5;   //!
   TBranch        *b_pclusterCompatibilityFilter;   //!
   TBranch        *b_HBHENoiseFilterResultRun1;   //!
   TBranch        *b_HBHENoiseFilterResultRun2Loose;   //!
   TBranch        *b_HBHENoiseFilterResultRun2Tight;   //!
   TBranch        *b_HBHENoiseFilterResult;   //!
   TBranch        *b_HBHEIsoNoiseFilterResult;   //!

};


void setupSkimTree(TTree *t,Skims &tSkims,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("ana_step", &tSkims.ana_step, &tSkims.b_ana_step);
   t->SetBranchAddress("pcollisionEventSelection", &tSkims.pcollisionEventSelection, &tSkims.b_pcollisionEventSelection);
   t->SetBranchAddress("pHBHENoiseFilterResultProducer", &tSkims.pHBHENoiseFilterResultProducer, &tSkims.b_pHBHENoiseFilterResultProducer);
   t->SetBranchAddress("pprimaryVertexFilter", &tSkims.pprimaryVertexFilter, &tSkims.b_pprimaryVertexFilter);
   t->SetBranchAddress("phfCoincFilter1", &tSkims.phfCoincFilter1, &tSkims.b_phfCoincFilter1);
   t->SetBranchAddress("phfCoincFilter2", &tSkims.phfCoincFilter2, &tSkims.b_phfCoincFilter2);
   t->SetBranchAddress("phfCoincFilter3", &tSkims.phfCoincFilter3, &tSkims.b_phfCoincFilter3);
   t->SetBranchAddress("phfCoincFilter4", &tSkims.phfCoincFilter4, &tSkims.b_phfCoincFilter4);
   t->SetBranchAddress("phfCoincFilter5", &tSkims.phfCoincFilter5, &tSkims.b_phfCoincFilter5);
   t->SetBranchAddress("pclusterCompatibilityFilter", &tSkims.pclusterCompatibilityFilter, &tSkims.b_pclusterCompatibilityFilter);
   t->SetBranchAddress("HBHENoiseFilterResultRun1", &tSkims.HBHENoiseFilterResultRun1, &tSkims.b_HBHENoiseFilterResultRun1);
   t->SetBranchAddress("HBHENoiseFilterResultRun2Loose", &tSkims.HBHENoiseFilterResultRun2Loose, &tSkims.b_HBHENoiseFilterResultRun2Loose);
   t->SetBranchAddress("HBHENoiseFilterResultRun2Tight", &tSkims.HBHENoiseFilterResultRun2Tight, &tSkims.b_HBHENoiseFilterResultRun2Tight);
   t->SetBranchAddress("HBHENoiseFilterResult", &tSkims.HBHENoiseFilterResult, &tSkims.b_HBHENoiseFilterResult);
   t->SetBranchAddress("HBHEIsoNoiseFilterResult", &tSkims.HBHEIsoNoiseFilterResult, &tSkims.b_HBHEIsoNoiseFilterResult);
   if (doCheck) {
   }
}

