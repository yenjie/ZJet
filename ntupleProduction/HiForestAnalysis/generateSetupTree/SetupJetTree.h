//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Dec 16 13:48:35 2015 by ROOT version 6.02/10
// from TTree t/akPu3PFpatJetsWithBtagging Jet Analysis Tree
// found on file: ../../../HiForestAOD_withTupel_PbPb_MC_Z30mumuJet_v1.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Jets {
public :
   Jets(){};
   ~Jets(){};

   // Declaration of leaf types
   Int_t           evt;
   Float_t         b;
   Int_t           nref;
   Float_t         rawpt[194];   //[nref]
   Float_t         jtpt[194];   //[nref]
   Float_t         jteta[194];   //[nref]
   Float_t         jty[194];   //[nref]
   Float_t         jtphi[194];   //[nref]
   Float_t         jtpu[194];   //[nref]
   Float_t         jtm[194];   //[nref]
   Float_t         discr_fr01[194];   //[nref]
   Float_t         trackMax[194];   //[nref]
   Float_t         trackSum[194];   //[nref]
   Int_t           trackN[194];   //[nref]
   Float_t         trackHardSum[194];   //[nref]
   Int_t           trackHardN[194];   //[nref]
   Float_t         chargedMax[194];   //[nref]
   Float_t         chargedSum[194];   //[nref]
   Int_t           chargedN[194];   //[nref]
   Float_t         chargedHardSum[194];   //[nref]
   Int_t           chargedHardN[194];   //[nref]
   Float_t         photonMax[194];   //[nref]
   Float_t         photonSum[194];   //[nref]
   Int_t           photonN[194];   //[nref]
   Float_t         photonHardSum[194];   //[nref]
   Int_t           photonHardN[194];   //[nref]
   Float_t         neutralMax[194];   //[nref]
   Float_t         neutralSum[194];   //[nref]
   Int_t           neutralN[194];   //[nref]
   Float_t         eMax[194];   //[nref]
   Float_t         eSum[194];   //[nref]
   Int_t           eN[194];   //[nref]
   Float_t         muMax[194];   //[nref]
   Float_t         muSum[194];   //[nref]
   Int_t           muN[194];   //[nref]
   Float_t         discr_ssvHighEff[194];   //[nref]
   Float_t         discr_ssvHighPur[194];   //[nref]
   Float_t         discr_csvMva[194];   //[nref]
   Float_t         discr_csvSimple[194];   //[nref]
   Float_t         discr_muByIp3[194];   //[nref]
   Float_t         discr_muByPt[194];   //[nref]
   Float_t         discr_prob[194];   //[nref]
   Float_t         discr_probb[194];   //[nref]
   Float_t         discr_tcHighEff[194];   //[nref]
   Float_t         discr_tcHighPur[194];   //[nref]
   Float_t         ndiscr_ssvHighEff[194];   //[nref]
   Float_t         ndiscr_ssvHighPur[194];   //[nref]
   Float_t         ndiscr_csvSimple[194];   //[nref]
   Float_t         ndiscr_muByPt[194];   //[nref]
   Float_t         ndiscr_prob[194];   //[nref]
   Float_t         ndiscr_probb[194];   //[nref]
   Float_t         ndiscr_tcHighEff[194];   //[nref]
   Float_t         ndiscr_tcHighPur[194];   //[nref]
   Float_t         pdiscr_csvSimple[194];   //[nref]
   Float_t         pdiscr_prob[194];   //[nref]
   Float_t         pdiscr_probb[194];   //[nref]
   Int_t           nsvtx[194];   //[nref]
   Int_t           svtxntrk[194];   //[nref]
   Float_t         svtxdl[194];   //[nref]
   Float_t         svtxdls[194];   //[nref]
   Float_t         svtxdl2d[194];   //[nref]
   Float_t         svtxdls2d[194];   //[nref]
   Float_t         svtxm[194];   //[nref]
   Float_t         svtxpt[194];   //[nref]
   Int_t           nIPtrk[194];   //[nref]
   Int_t           nselIPtrk[194];   //[nref]
   Float_t         mue[194];   //[nref]
   Float_t         mupt[194];   //[nref]
   Float_t         mueta[194];   //[nref]
   Float_t         muphi[194];   //[nref]
   Float_t         mudr[194];   //[nref]
   Float_t         muptrel[194];   //[nref]
   Int_t           muchg[194];   //[nref]
   Int_t           beamId1;
   Int_t           beamId2;
   Float_t         pthat;
   Float_t         refpt[194];   //[nref]
   Float_t         refeta[194];   //[nref]
   Float_t         refy[194];   //[nref]
   Float_t         refphi[194];   //[nref]
   Float_t         refdphijt[194];   //[nref]
   Float_t         refdrjt[194];   //[nref]
   Float_t         refparton_pt[194];   //[nref]
   Int_t           refparton_flavor[194];   //[nref]
   Int_t           refparton_flavorForB[194];   //[nref]
   Float_t         genChargedSum[194];   //[nref]
   Float_t         genHardSum[194];   //[nref]
   Float_t         signalChargedSum[194];   //[nref]
   Float_t         signalHardSum[194];   //[nref]
   Int_t           ngen;
   Int_t           genmatchindex[34];   //[ngen]
   Float_t         genpt[34];   //[ngen]
   Float_t         geneta[34];   //[ngen]
   Float_t         geny[34];   //[ngen]
   Float_t         genphi[34];   //[ngen]
   Float_t         gendphijt[34];   //[ngen]
   Float_t         gendrjt[34];   //[ngen]

   // List of branches
   TBranch        *b_evt;   //!
   TBranch        *b_b;   //!
   TBranch        *b_nref;   //!
   TBranch        *b_rawpt;   //!
   TBranch        *b_jtpt;   //!
   TBranch        *b_jteta;   //!
   TBranch        *b_jty;   //!
   TBranch        *b_jtphi;   //!
   TBranch        *b_jtpu;   //!
   TBranch        *b_jtm;   //!
   TBranch        *b_discr_fr01;   //!
   TBranch        *b_trackMax;   //!
   TBranch        *b_trackSum;   //!
   TBranch        *b_trackN;   //!
   TBranch        *b_trackHardSum;   //!
   TBranch        *b_trackHardN;   //!
   TBranch        *b_chargedMax;   //!
   TBranch        *b_chargedSum;   //!
   TBranch        *b_chargedN;   //!
   TBranch        *b_chargedHardSum;   //!
   TBranch        *b_chargedHardN;   //!
   TBranch        *b_photonMax;   //!
   TBranch        *b_photonSum;   //!
   TBranch        *b_photonN;   //!
   TBranch        *b_photonHardSum;   //!
   TBranch        *b_photonHardN;   //!
   TBranch        *b_neutralMax;   //!
   TBranch        *b_neutralSum;   //!
   TBranch        *b_neutralN;   //!
   TBranch        *b_eMax;   //!
   TBranch        *b_eSum;   //!
   TBranch        *b_eN;   //!
   TBranch        *b_muMax;   //!
   TBranch        *b_muSum;   //!
   TBranch        *b_muN;   //!
   TBranch        *b_discr_ssvHighEff;   //!
   TBranch        *b_discr_ssvHighPur;   //!
   TBranch        *b_discr_csvMva;   //!
   TBranch        *b_discr_csvSimple;   //!
   TBranch        *b_discr_muByIp3;   //!
   TBranch        *b_discr_muByPt;   //!
   TBranch        *b_discr_prob;   //!
   TBranch        *b_discr_probb;   //!
   TBranch        *b_discr_tcHighEff;   //!
   TBranch        *b_discr_tcHighPur;   //!
   TBranch        *b_ndiscr_ssvHighEff;   //!
   TBranch        *b_ndiscr_ssvHighPur;   //!
   TBranch        *b_ndiscr_csvSimple;   //!
   TBranch        *b_ndiscr_muByPt;   //!
   TBranch        *b_ndiscr_prob;   //!
   TBranch        *b_ndiscr_probb;   //!
   TBranch        *b_ndiscr_tcHighEff;   //!
   TBranch        *b_ndiscr_tcHighPur;   //!
   TBranch        *b_pdiscr_csvSimple;   //!
   TBranch        *b_pdiscr_prob;   //!
   TBranch        *b_pdiscr_probb;   //!
   TBranch        *b_nsvtx;   //!
   TBranch        *b_svtxntrk;   //!
   TBranch        *b_svtxdl;   //!
   TBranch        *b_svtxdls;   //!
   TBranch        *b_svtxdl2d;   //!
   TBranch        *b_svtxdls2d;   //!
   TBranch        *b_svtxm;   //!
   TBranch        *b_svtxpt;   //!
   TBranch        *b_nIPtrk;   //!
   TBranch        *b_nselIPtrk;   //!
   TBranch        *b_mue;   //!
   TBranch        *b_mupt;   //!
   TBranch        *b_mueta;   //!
   TBranch        *b_muphi;   //!
   TBranch        *b_mudr;   //!
   TBranch        *b_muptrel;   //!
   TBranch        *b_muchg;   //!
   TBranch        *b_beamId1;   //!
   TBranch        *b_beamId2;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_refpt;   //!
   TBranch        *b_refeta;   //!
   TBranch        *b_refy;   //!
   TBranch        *b_refphi;   //!
   TBranch        *b_refdphijt;   //!
   TBranch        *b_refdrjt;   //!
   TBranch        *b_refparton_pt;   //!
   TBranch        *b_refparton_flavor;   //!
   TBranch        *b_refparton_flavorForB;   //!
   TBranch        *b_genChargedSum;   //!
   TBranch        *b_genHardSum;   //!
   TBranch        *b_signalChargedSum;   //!
   TBranch        *b_signalHardSum;   //!
   TBranch        *b_ngen;   //!
   TBranch        *b_genmatchindex;   //!
   TBranch        *b_genpt;   //!
   TBranch        *b_geneta;   //!
   TBranch        *b_geny;   //!
   TBranch        *b_genphi;   //!
   TBranch        *b_gendphijt;   //!
   TBranch        *b_gendrjt;   //!

};


void setupJetTree(TTree *t,Jets &tJets,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("evt", &tJets.evt, &tJets.b_evt);
   t->SetBranchAddress("b", &tJets.b, &tJets.b_b);
   t->SetBranchAddress("nref", &tJets.nref, &tJets.b_nref);
   t->SetBranchAddress("rawpt", tJets.rawpt, &tJets.b_rawpt);
   t->SetBranchAddress("jtpt", tJets.jtpt, &tJets.b_jtpt);
   t->SetBranchAddress("jteta", tJets.jteta, &tJets.b_jteta);
   t->SetBranchAddress("jty", tJets.jty, &tJets.b_jty);
   t->SetBranchAddress("jtphi", tJets.jtphi, &tJets.b_jtphi);
   t->SetBranchAddress("jtpu", tJets.jtpu, &tJets.b_jtpu);
   t->SetBranchAddress("jtm", tJets.jtm, &tJets.b_jtm);
   t->SetBranchAddress("discr_fr01", tJets.discr_fr01, &tJets.b_discr_fr01);
   t->SetBranchAddress("trackMax", tJets.trackMax, &tJets.b_trackMax);
   t->SetBranchAddress("trackSum", tJets.trackSum, &tJets.b_trackSum);
   t->SetBranchAddress("trackN", tJets.trackN, &tJets.b_trackN);
   t->SetBranchAddress("trackHardSum", tJets.trackHardSum, &tJets.b_trackHardSum);
   t->SetBranchAddress("trackHardN", tJets.trackHardN, &tJets.b_trackHardN);
   t->SetBranchAddress("chargedMax", tJets.chargedMax, &tJets.b_chargedMax);
   t->SetBranchAddress("chargedSum", tJets.chargedSum, &tJets.b_chargedSum);
   t->SetBranchAddress("chargedN", tJets.chargedN, &tJets.b_chargedN);
   t->SetBranchAddress("chargedHardSum", tJets.chargedHardSum, &tJets.b_chargedHardSum);
   t->SetBranchAddress("chargedHardN", tJets.chargedHardN, &tJets.b_chargedHardN);
   t->SetBranchAddress("photonMax", tJets.photonMax, &tJets.b_photonMax);
   t->SetBranchAddress("photonSum", tJets.photonSum, &tJets.b_photonSum);
   t->SetBranchAddress("photonN", tJets.photonN, &tJets.b_photonN);
   t->SetBranchAddress("photonHardSum", tJets.photonHardSum, &tJets.b_photonHardSum);
   t->SetBranchAddress("photonHardN", tJets.photonHardN, &tJets.b_photonHardN);
   t->SetBranchAddress("neutralMax", tJets.neutralMax, &tJets.b_neutralMax);
   t->SetBranchAddress("neutralSum", tJets.neutralSum, &tJets.b_neutralSum);
   t->SetBranchAddress("neutralN", tJets.neutralN, &tJets.b_neutralN);
   t->SetBranchAddress("eMax", tJets.eMax, &tJets.b_eMax);
   t->SetBranchAddress("eSum", tJets.eSum, &tJets.b_eSum);
   t->SetBranchAddress("eN", tJets.eN, &tJets.b_eN);
   t->SetBranchAddress("muMax", tJets.muMax, &tJets.b_muMax);
   t->SetBranchAddress("muSum", tJets.muSum, &tJets.b_muSum);
   t->SetBranchAddress("muN", tJets.muN, &tJets.b_muN);
   t->SetBranchAddress("discr_ssvHighEff", tJets.discr_ssvHighEff, &tJets.b_discr_ssvHighEff);
   t->SetBranchAddress("discr_ssvHighPur", tJets.discr_ssvHighPur, &tJets.b_discr_ssvHighPur);
   t->SetBranchAddress("discr_csvMva", tJets.discr_csvMva, &tJets.b_discr_csvMva);
   t->SetBranchAddress("discr_csvSimple", tJets.discr_csvSimple, &tJets.b_discr_csvSimple);
   t->SetBranchAddress("discr_muByIp3", tJets.discr_muByIp3, &tJets.b_discr_muByIp3);
   t->SetBranchAddress("discr_muByPt", tJets.discr_muByPt, &tJets.b_discr_muByPt);
   t->SetBranchAddress("discr_prob", tJets.discr_prob, &tJets.b_discr_prob);
   t->SetBranchAddress("discr_probb", tJets.discr_probb, &tJets.b_discr_probb);
   t->SetBranchAddress("discr_tcHighEff", tJets.discr_tcHighEff, &tJets.b_discr_tcHighEff);
   t->SetBranchAddress("discr_tcHighPur", tJets.discr_tcHighPur, &tJets.b_discr_tcHighPur);
   t->SetBranchAddress("ndiscr_ssvHighEff", tJets.ndiscr_ssvHighEff, &tJets.b_ndiscr_ssvHighEff);
   t->SetBranchAddress("ndiscr_ssvHighPur", tJets.ndiscr_ssvHighPur, &tJets.b_ndiscr_ssvHighPur);
   t->SetBranchAddress("ndiscr_csvSimple", tJets.ndiscr_csvSimple, &tJets.b_ndiscr_csvSimple);
   t->SetBranchAddress("ndiscr_muByPt", tJets.ndiscr_muByPt, &tJets.b_ndiscr_muByPt);
   t->SetBranchAddress("ndiscr_prob", tJets.ndiscr_prob, &tJets.b_ndiscr_prob);
   t->SetBranchAddress("ndiscr_probb", tJets.ndiscr_probb, &tJets.b_ndiscr_probb);
   t->SetBranchAddress("ndiscr_tcHighEff", tJets.ndiscr_tcHighEff, &tJets.b_ndiscr_tcHighEff);
   t->SetBranchAddress("ndiscr_tcHighPur", tJets.ndiscr_tcHighPur, &tJets.b_ndiscr_tcHighPur);
   t->SetBranchAddress("pdiscr_csvSimple", tJets.pdiscr_csvSimple, &tJets.b_pdiscr_csvSimple);
   t->SetBranchAddress("pdiscr_prob", tJets.pdiscr_prob, &tJets.b_pdiscr_prob);
   t->SetBranchAddress("pdiscr_probb", tJets.pdiscr_probb, &tJets.b_pdiscr_probb);
   t->SetBranchAddress("nsvtx", tJets.nsvtx, &tJets.b_nsvtx);
   t->SetBranchAddress("svtxntrk", tJets.svtxntrk, &tJets.b_svtxntrk);
   t->SetBranchAddress("svtxdl", tJets.svtxdl, &tJets.b_svtxdl);
   t->SetBranchAddress("svtxdls", tJets.svtxdls, &tJets.b_svtxdls);
   t->SetBranchAddress("svtxdl2d", tJets.svtxdl2d, &tJets.b_svtxdl2d);
   t->SetBranchAddress("svtxdls2d", tJets.svtxdls2d, &tJets.b_svtxdls2d);
   t->SetBranchAddress("svtxm", tJets.svtxm, &tJets.b_svtxm);
   t->SetBranchAddress("svtxpt", tJets.svtxpt, &tJets.b_svtxpt);
   t->SetBranchAddress("nIPtrk", tJets.nIPtrk, &tJets.b_nIPtrk);
   t->SetBranchAddress("nselIPtrk", tJets.nselIPtrk, &tJets.b_nselIPtrk);
   t->SetBranchAddress("mue", tJets.mue, &tJets.b_mue);
   t->SetBranchAddress("mupt", tJets.mupt, &tJets.b_mupt);
   t->SetBranchAddress("mueta", tJets.mueta, &tJets.b_mueta);
   t->SetBranchAddress("muphi", tJets.muphi, &tJets.b_muphi);
   t->SetBranchAddress("mudr", tJets.mudr, &tJets.b_mudr);
   t->SetBranchAddress("muptrel", tJets.muptrel, &tJets.b_muptrel);
   t->SetBranchAddress("muchg", tJets.muchg, &tJets.b_muchg);
   t->SetBranchAddress("beamId1", &tJets.beamId1, &tJets.b_beamId1);
   t->SetBranchAddress("beamId2", &tJets.beamId2, &tJets.b_beamId2);
   t->SetBranchAddress("pthat", &tJets.pthat, &tJets.b_pthat);
   t->SetBranchAddress("refpt", tJets.refpt, &tJets.b_refpt);
   t->SetBranchAddress("refeta", tJets.refeta, &tJets.b_refeta);
   t->SetBranchAddress("refy", tJets.refy, &tJets.b_refy);
   t->SetBranchAddress("refphi", tJets.refphi, &tJets.b_refphi);
   t->SetBranchAddress("refdphijt", tJets.refdphijt, &tJets.b_refdphijt);
   t->SetBranchAddress("refdrjt", tJets.refdrjt, &tJets.b_refdrjt);
   t->SetBranchAddress("refparton_pt", tJets.refparton_pt, &tJets.b_refparton_pt);
   t->SetBranchAddress("refparton_flavor", tJets.refparton_flavor, &tJets.b_refparton_flavor);
   t->SetBranchAddress("refparton_flavorForB", tJets.refparton_flavorForB, &tJets.b_refparton_flavorForB);
   t->SetBranchAddress("genChargedSum", tJets.genChargedSum, &tJets.b_genChargedSum);
   t->SetBranchAddress("genHardSum", tJets.genHardSum, &tJets.b_genHardSum);
   t->SetBranchAddress("signalChargedSum", tJets.signalChargedSum, &tJets.b_signalChargedSum);
   t->SetBranchAddress("signalHardSum", tJets.signalHardSum, &tJets.b_signalHardSum);
   t->SetBranchAddress("ngen", &tJets.ngen, &tJets.b_ngen);
   t->SetBranchAddress("genmatchindex", tJets.genmatchindex, &tJets.b_genmatchindex);
   t->SetBranchAddress("genpt", tJets.genpt, &tJets.b_genpt);
   t->SetBranchAddress("geneta", tJets.geneta, &tJets.b_geneta);
   t->SetBranchAddress("geny", tJets.geny, &tJets.b_geny);
   t->SetBranchAddress("genphi", tJets.genphi, &tJets.b_genphi);
   t->SetBranchAddress("gendphijt", tJets.gendphijt, &tJets.b_gendphijt);
   t->SetBranchAddress("gendrjt", tJets.gendrjt, &tJets.b_gendrjt);
   if (doCheck) {
      if (t->GetMaximum("nref")>194) cout <<"FATAL ERROR: Arrary size of nref too small!!!  "<<t->GetMaximum("nref")<<endl;
      if (t->GetMaximum("ngen")>34) cout <<"FATAL ERROR: Arrary size of ngen too small!!!  "<<t->GetMaximum("ngen")<<endl;
   }
}

