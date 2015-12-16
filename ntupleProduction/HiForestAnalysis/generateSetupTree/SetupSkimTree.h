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

class Skims {
public :
   Skims(){};
   ~Skims(){};

   // Declaration of leaf types
   Int_t           ana_step;
   Int_t           pVertexFilterCutG;
   Int_t           pVertexFilterCutGloose;
   Int_t           pVertexFilterCutGtight;
   Int_t           pVertexFilterCutGplus;
   Int_t           pVertexFilterCutE;
   Int_t           pVertexFilterCutEandG;

   // List of branches
   TBranch        *b_ana_step;   //!
   TBranch        *b_pVertexFilterCutG;   //!
   TBranch        *b_pVertexFilterCutGloose;   //!
   TBranch        *b_pVertexFilterCutGtight;   //!
   TBranch        *b_pVertexFilterCutGplus;   //!
   TBranch        *b_pVertexFilterCutE;   //!
   TBranch        *b_pVertexFilterCutEandG;   //!

};


void setupSkimTree(TTree *t,Skims &tSkims,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("ana_step", &tSkims.ana_step, &tSkims.b_ana_step);
   t->SetBranchAddress("pVertexFilterCutG", &tSkims.pVertexFilterCutG, &tSkims.b_pVertexFilterCutG);
   t->SetBranchAddress("pVertexFilterCutGloose", &tSkims.pVertexFilterCutGloose, &tSkims.b_pVertexFilterCutGloose);
   t->SetBranchAddress("pVertexFilterCutGtight", &tSkims.pVertexFilterCutGtight, &tSkims.b_pVertexFilterCutGtight);
   t->SetBranchAddress("pVertexFilterCutGplus", &tSkims.pVertexFilterCutGplus, &tSkims.b_pVertexFilterCutGplus);
   t->SetBranchAddress("pVertexFilterCutE", &tSkims.pVertexFilterCutE, &tSkims.b_pVertexFilterCutE);
   t->SetBranchAddress("pVertexFilterCutEandG", &tSkims.pVertexFilterCutEandG, &tSkims.b_pVertexFilterCutEandG);
   if (doCheck) {
   }
}

