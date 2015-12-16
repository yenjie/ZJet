#include <TFile.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TGraphAsymmErrors.h>
#include <TProfile.h>
#include <TLine.h>
#include <TLegend.h>
#include <iostream>

void plotZJet()
{
   TFile *infZ= new TFile ("ZJetTree.root");
   
   TTree *tZ = (TTree*) infZ->Get("t");
   TTree *tJet = (TTree*) infZ->Get("tJet");
   
   tJet->AddFriend(tZ);
   tJet->SetAlias("myJetPt","(jtpt)");
   
   TGraphAsymmErrors *g = new TGraphAsymmErrors;
   
   TCanvas *c = new TCanvas("c","",600,600);
   TProfile *hFakeRate = new TProfile("hFakeRate","",20,0,100);
   hFakeRate->SetAxisRange(0,1.2,"Y");
   hFakeRate->SetYTitle("Efficiency / Fake Rate");
   hFakeRate->SetXTitle("Jet p_{T} (GeV/c)");
   
   tJet->Draw("refpt<0:myJetPt>>hFakeRate","Zpt>40&&abs(jteta)<2");
   
   TH1D *hAll = new TH1D("hAll","",20,0,100);
   TH1D *hReco = new TH1D("hReco","",20,0,100);
   
   tJet->Draw("refpt>>hReco","Zpt>40&&abs(refeta)<2&&refpt>15");
   tJet->Draw("genpt>>hAll","Zpt>40&&abs(geneta)<2&&genpt>15");
   
   g->BayesDivide(hReco,hAll);
   hFakeRate->SetMarkerStyle(24);
   hFakeRate->Draw();
   g->Draw("p same");
   
   TLine *l = new TLine(0,1,100,1);
   l->SetLineStyle(2);
   l->Draw();
   
   TLegend *leg = new TLegend(0.5,0.5,0.7,0.7);
   leg->SetBorderSize(0);
   leg->SetFillStyle(0);
   leg->AddEntry(g,"Efficiency","pl");
   leg->AddEntry(hFakeRate,"Fake Rate","p");
   leg->Draw();
   
   TCanvas *c2 = new TCanvas("c2","",600,600);

   TH1D *hXjz = new TH1D("hXjz","",10,0,2);
   TH1D *hXjzMatched = new TH1D("hXjzMatched","",10,0,2);
   TH1D *hXjzUnmatched = new TH1D("hXjzUnmatched","",10,0,2);
   TH1D *hXjzRef = new TH1D("hXjzRef","",10,0,2);
   TH1D *hXjzGen = new TH1D("hXjzGen","",10,0,2);
   tJet->Draw("myJetPt/Zpt>>hXjz","Zmass>60&&acos(cos(Zphi-jtphi))>2*3.14159/3.&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2");
   tJet->Draw("myJetPt/Zpt>>hXjzMatched","Zmass>60&&acos(cos(Zphi-jtphi))>2*3.14159/3.&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2&&refpt>25");
   tJet->Draw("myJetPt/Zpt>>hXjzUnmatched","Zmass>60&&acos(cos(Zphi-jtphi))>2*3.14159/3.&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2&&refpt<25");
   tJet->Draw("refpt/Zpt>>hXjzRef","Zmass>60&&acos(cos(Zphi-jtphi))>2*3.14159/3.&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2&&refpt>25");
   tJet->Draw("genpt/Zpt>>hXjzGen","Zmass>60&&acos(cos(Zphi-genphi))>2*3.14159/3.&&Zpt>40&&Zmass<120&&abs(geneta)<2&&genpt>25");
   hXjzMatched->SetLineColor(kGreen+2);
  
   hXjz->Draw();
   
   hXjzMatched->Draw("same");
   hXjzGen->SetLineColor(2);
   hXjzRef->SetLineColor(4);
   hXjzRef->Draw("same");
   hXjzGen->Draw("same");
   hXjz->SetXTitle("X_{jz}");
   hXjz->SetYTitle("Entries");

   TLegend *leg2 = new TLegend(0.55,0.58,0.95,0.87);
   leg2->SetBorderSize(0);
   leg2->SetFillStyle(0);
   leg2->AddEntry(hXjz,"Uncorrected","l");
   leg2->AddEntry(hXjzMatched,"Remove fake jet","l");
   leg2->AddEntry(hXjzRef,"Remove resolution effect","l");
   leg2->AddEntry(hXjzGen,"Remove efficiency effect","l");
   leg2->Draw();


   TCanvas *c22 = new TCanvas("c22","",600,600);

   TH1D *hDphi = new TH1D("hDphi","",40,3.14159/2,3.141593);
   TH1D *hDphiMatched = new TH1D("hDphiMatched","",40,3.14159/2,3.141593);
   TH1D *hDphiUnmatched = new TH1D("hDphiUnmatched","",40,3.14159/2,3.141593);
   TH1D *hDphiRef = new TH1D("hDphiRef","",40,3.14159/2,3.141593);
   TH1D *hDphiGen = new TH1D("hDphiGen","",40,3.14159/2,3.141593);
   tJet->Draw("acos(cos(jtphi-Zphi))>>hDphi","muMax/rawpt<0.4&&Zmass>60&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2");
   tJet->Draw("acos(cos(jtphi-Zphi))>>hDphiMatched","muMax/rawpt<0.4&&Zmass>60&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2&&refpt>25");
   tJet->Draw("acos(cos(jtphi-Zphi))>>hDphiUnmatched","muMax/rawpt<0.4&&Zmass>60&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2&&refpt<25");
   tJet->Draw("acos(cos(refphi-Zphi))>>hDphiRef","muMax/rawpt<0.4&&Zmass>60&&Zpt>40&&Zmass<120&&myJetPt>25&&abs(jteta)<2&&refpt>25");
   tJet->Draw("acos(cos(genphi-Zphi))>>hDphiGen","Zmass>60&&Zpt>40&&Zmass<120&&abs(geneta)<2&&genpt>25");
   hDphiMatched->SetLineColor(kGreen+2);
  
   hDphi->Draw();
   
   hDphiMatched->Draw("same");
   hDphiGen->SetLineColor(2);
   hDphiRef->SetLineColor(4);
   hDphiRef->Draw("same");
   hDphiGen->Draw("same");
   hDphi->SetXTitle("#Delta#phi");
   hDphi->SetYTitle("Entries");


   TCanvas *c3 = new TCanvas("c3","",600,600);
   
   TH1D *hMockData = new TH1D("hMockData","",10,0,2);
   TH1D *hCorr = (TH1D*) hXjzMatched->Clone("hCorr");
   
   hMockData->Sumw2();
   hCorr->Divide(hXjz);
   
   for (int i=0;i<900*0.78;i++)
   {
      hMockData->Fill(hXjz->GetRandom());
      //for (int j=0;j<100;j++) hMockBackground->Fill(hXjzUnmatched->GetRandom());
      
   }
   cout <<hMockData->Integral(1,10)<<endl;
   
   for (int i=0;i<=hMockData->GetNbinsX();i++){
      hMockData->SetBinContent(i,hMockData->GetBinContent(i)*hCorr->GetBinContent(i));
   }
   hMockData->SetXTitle("X_{jz}");
   hMockData->SetYTitle("Entries");
   hMockData->Draw();
   
   TLine *l2 = new TLine(0,0,2,0);
   l2->SetLineStyle(2);
   l2->Draw();
}
