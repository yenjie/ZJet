//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Dec  9 16:49:28 2015 by ROOT version 6.02/10
// from TTree pfTree/dijet tree
// found on file: ../../jetJEC/2015/mc_merged/PYTHIA_QCD30_TuneCUETP8M1_cfi_RECODEBUGpp_757p1_TAGSignalPP_merged.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class PFs {
public :
   PFs(){};
   ~PFs(){};

   // Declaration of leaf types
   Int_t           nPFpart;
   Int_t           pfId[1064];   //[nPFpart]
   Float_t         pfPt[1064];   //[nPFpart]
   Float_t         pfVsPtInitial[1064];   //[nPFpart]
   Float_t         pfEta[1064];   //[nPFpart]
   Float_t         pfPhi[1064];   //[nPFpart]
   Float_t         vn[5][15];
   Float_t         psin[5][15];
   Float_t         sumpt[15];

   // List of branches
   TBranch        *b_nPFpart;   //!
   TBranch        *b_pfId;   //!
   TBranch        *b_pfPt;   //!
   TBranch        *b_pfVsPtInitial;   //!
   TBranch        *b_pfEta;   //!
   TBranch        *b_pfPhi;   //!
   TBranch        *b_vn;   //!
   TBranch        *b_vpsi;   //!
   TBranch        *b_sumpt;   //!

};


void setupPFTree(TTree *t,PFs &tPFs,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("nPFpart", &tPFs.nPFpart, &tPFs.b_nPFpart);
   t->SetBranchAddress("pfId", tPFs.pfId, &tPFs.b_pfId);
   t->SetBranchAddress("pfPt", tPFs.pfPt, &tPFs.b_pfPt);
   t->SetBranchAddress("pfVsPtInitial", tPFs.pfVsPtInitial, &tPFs.b_pfVsPtInitial);
   t->SetBranchAddress("pfEta", tPFs.pfEta, &tPFs.b_pfEta);
   t->SetBranchAddress("pfPhi", tPFs.pfPhi, &tPFs.b_pfPhi);
   t->SetBranchAddress("vn", tPFs.vn, &tPFs.b_vn);
   t->SetBranchAddress("psin", tPFs.psin, &tPFs.b_vpsi);
   t->SetBranchAddress("sumpt", tPFs.sumpt, &tPFs.b_sumpt);
   if (doCheck) {
      if (t->GetMaximum("nPFpart")>1064) cout <<"FATAL ERROR: Arrary size of nPFpart too small!!!  "<<t->GetMaximum("nPFpart")<<endl;
   }
}

