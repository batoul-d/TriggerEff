#define _USE_MATH_DEFINES
#include "myTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <math.h>
#include <TPaveText.h>
#include "RooCategory.h"
#include "RooNumIntConfig.h"
#include "RooPlotable.h"
#include <TUnfold.h>

using namespace std;

void plotting()
{
  int ns=5;


  double ptbins []={0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24, 27, 30, 35, 40, 45, 50, 60, 70, 80, 90, 100};
  double etabins []={-2.4, -2.2, -2, -1.8, -1.6, -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4};
  double phibins []={-3.2,-2.8,-2.4,-2.,-1.6,-1.2,-0.8,-0.4,0,0.4,0.8,1.2,1.6,2.,2.4,2.8,3.2};
  //double massbins []={2.5, 2.6, 2.7, 2.8, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6};
  double massbins []={88.5, 88.6, 88.7, 88.8, 88.9, 89.0, 89.1, 89.2, 89.3, 89.4, 89.5, 89.6, 89.7, 89.8, 89.9, 90.0, 90.1, 90.2, 90.3, 90.4, 90.5, 90.6, 90.7, 90.8, 90.9, 91.0, 91.1, 91.2, 91.3, 91.4, 91.5, 91.6, 91.7, 91.8, 91.9, 92.0, 92.1, 92.2, 92.3, 92.4, 92.5, 92.6, 92.7, 92.8, 92.9, 93.0, 93.1, 93.2, 93.3, 93.4, 93.5};

  Int_t npb = sizeof(ptbins)/sizeof(double);
  Int_t netab = sizeof(etabins)/sizeof(double);
  Int_t nphib = sizeof(phibins)/sizeof(double);
  Int_t nmassb = sizeof(massbins)/sizeof(double);

  float massmin = massbins[0];
  float massmax = massbins[nmassb-1];

  string sampleName [] = {"JPsiGun", "MuGun", "NonPrJPsi", "PrJPsi", "Z"};
  cout <<sampleName[ns-1];
  TFile *f1 = TFile::Open(Form("%sTrigEff/singleMuTrigEff/muPtTrigEff.root", sampleName[ns-1].c_str()));
  TFile *f2 = TFile::Open(Form("%sTrigEff/singleMuTrigEff/muEtaTrigEff.root", sampleName[ns-1].c_str()));
  TFile *f3 = TFile::Open(Form("%sTrigEff/singleMuTrigEff/muPhiTrigEff.root", sampleName[ns-1].c_str()));
  TFile *f4 (0x0);
  TFile *f5 (0x0);
  TFile *f6 (0x0);
  if (ns!=2)
    {
      f4 = TFile::Open(Form("%sTrigEff/diMuTrigEff/diMuPtTrigEff.root", sampleName[ns-1].c_str()));
      f5 = TFile::Open(Form("%sTrigEff/diMuTrigEff/diMuRapTrigEff.root", sampleName[ns-1].c_str()));
      f6 = TFile::Open(Form("%sTrigEff/diMuTrigEff/diMuMassTrigEff.root", sampleName[ns-1].c_str()));
      }
 
  TH1F *h01 = new TH1F ("h01",";p_{t}^{#mu+}(GeV/c);Efficiency", npb-1, ptbins);
  TH1F *h02 = new TH1F ("h02",";#eta^{#mu+};Efficiency", netab-1, etabins);
  TH1F *h03 = new TH1F ("h03",";#phi^{#mu+};Efficiency", nphib-1, phibins);
  TH1F *h04 = new TH1F ("h04",";y^{#mu#mu};Efficiency", netab-1, etabins);
  TH1F *h05 = new TH1F ("h05",";mass^{#mu#mu}(GeV/c^{2});Efficiency", nmassb-1, massbins);

  h01->GetYaxis()->SetLimits(0, 2);
  h02->GetYaxis()->SetLimits(0, 2);
  h03->GetYaxis()->SetLimits(0, 2);
  h04->GetYaxis()->SetLimits(0, 2);
  h05->GetYaxis()->SetLimits(0, 2);
  //h06->GetYaxis()->SetLimits(0,1.5);
  TEfficiency *h1L3Mu3 = (TEfficiency*) f1->Get("ptMu_21_HLT_HIL3Mu3_v1");
  TEfficiency *h1L3Mu5 = (TEfficiency*) f1->Get("ptMu_22_HLT_HIL3Mu5_v1");
  TEfficiency *h1L3Mu7 = (TEfficiency*) f1->Get("ptMu_23_HLT_HIL3Mu7_v1");
  TEfficiency *h1L3Mu12 = (TEfficiency*) f1->Get("ptMu_24_HLT_HIL3Mu12_v1");
  TEfficiency *h1L3Mu15 = (TEfficiency*) f1->Get("ptMu_25_HLT_HIL3Mu15_v1");
  TEfficiency *h1L3Mu20 = (TEfficiency*) f1->Get("ptMu_26_HLT_HIL3Mu20_v1");

  TEfficiency *h2L3Mu3 = (TEfficiency*) f2->Get("etaMu_21_HLT_HIL3Mu3_v1");
  TEfficiency *h2L3Mu5 = (TEfficiency*) f2->Get("etaMu_22_HLT_HIL3Mu5_v1");
  TEfficiency *h2L3Mu7 = (TEfficiency*) f2->Get("etaMu_23_HLT_HIL3Mu7_v1");
  TEfficiency *h2L3Mu12 = (TEfficiency*) f2->Get("etaMu_24_HLT_HIL3Mu12_v1");
  TEfficiency *h2L3Mu15 = (TEfficiency*) f2->Get("etaMu_25_HLT_HIL3Mu15_v1");
  TEfficiency *h2L3Mu20 = (TEfficiency*) f2->Get("etaMu_26_HLT_HIL3Mu20_v1");

  TEfficiency *h3L3Mu3 = (TEfficiency*) f3->Get("phiMu__21_HLT_HIL3Mu3_v1");
  TEfficiency *h3L3Mu5 = (TEfficiency*) f3->Get("phiMu__22_HLT_HIL3Mu5_v1");
  TEfficiency *h3L3Mu7 = (TEfficiency*) f3->Get("phiMu__23_HLT_HIL3Mu7_v1");
  TEfficiency *h3L3Mu12 = (TEfficiency*) f3->Get("phiMu__24_HLT_HIL3Mu12_v1");
  TEfficiency *h3L3Mu15 = (TEfficiency*) f3->Get("phiMu__25_HLT_HIL3Mu15_v1");
  TEfficiency *h3L3Mu20 = (TEfficiency*) f3->Get("phiMu__26_HLT_HIL3Mu20_v1");

  TEfficiency *h1L1Mu3 = (TEfficiency*) f1->Get("ptMu_10_HLT_HIL1Mu3_v1");
  TEfficiency *h1L1Mu5 = (TEfficiency*) f1->Get("ptMu_11_HLT_HIL1Mu5_v1");
  TEfficiency *h1L1Mu7 = (TEfficiency*) f1->Get("ptMu_12_HLT_HIL1Mu7_v1");
  TEfficiency *h1L1Mu12 = (TEfficiency*) f1->Get("ptMu_13_HLT_HIL1Mu12_v1");
  TEfficiency *h1L1Mu16 = (TEfficiency*) f1->Get("ptMu_14_HLT_HIL1Mu16_v1");

  TEfficiency *h2L1Mu3 = (TEfficiency*) f2->Get("etaMu_10_HLT_HIL1Mu3_v1");
  TEfficiency *h2L1Mu5 = (TEfficiency*) f2->Get("etaMu_11_HLT_HIL1Mu5_v1");
  TEfficiency *h2L1Mu7 = (TEfficiency*) f2->Get("etaMu_12_HLT_HIL1Mu7_v1");
  TEfficiency *h2L1Mu12 = (TEfficiency*) f2->Get("etaMu_13_HLT_HIL1Mu12_v1");
  TEfficiency *h2L1Mu16 = (TEfficiency*) f2->Get("etaMu_14_HLT_HIL1Mu16_v1");

  TEfficiency *h3L1Mu3 = (TEfficiency*) f3->Get("phiMu__10_HLT_HIL1Mu3_v1");
  TEfficiency *h3L1Mu5 = (TEfficiency*) f3->Get("phiMu__11_HLT_HIL1Mu5_v1");
  TEfficiency *h3L1Mu7 = (TEfficiency*) f3->Get("phiMu__12_HLT_HIL1Mu7_v1");
  TEfficiency *h3L1Mu12 = (TEfficiency*) f3->Get("phiMu__13_HLT_HIL1Mu12_v1");
  TEfficiency *h3L1Mu16 = (TEfficiency*) f3->Get("phiMu__14_HLT_HIL1Mu16_v1");

  TEfficiency *h1L2Mu3 = (TEfficiency*) f1->Get("ptMu_15_HLT_HIL2Mu3_v1");
  TEfficiency *h1L2Mu5 = (TEfficiency*) f1->Get("ptMu_16_HLT_HIL2Mu5_v1");
  TEfficiency *h1L2Mu12 = (TEfficiency*) f1->Get("ptMu_18_HLT_HIL2Mu12_v1");

  TEfficiency *h2L2Mu3 = (TEfficiency*) f2->Get("etaMu_15_HLT_HIL2Mu3_v1");
  TEfficiency *h2L2Mu5 = (TEfficiency*) f2->Get("etaMu_16_HLT_HIL2Mu5_v1");
  TEfficiency *h2L2Mu12 = (TEfficiency*) f2->Get("etaMu_18_HLT_HIL2Mu12_v1");

  TEfficiency *h3L2Mu3 = (TEfficiency*) f3->Get("phiMu__15_HLT_HIL2Mu3_v1");
  TEfficiency *h3L2Mu5 = (TEfficiency*) f3->Get("phiMu__16_HLT_HIL2Mu5_v1");
  TEfficiency *h3L2Mu12 = (TEfficiency*) f3->Get("phiMu__18_HLT_HIL2Mu12_v1");

  gStyle->SetOptStat(0);
  TCanvas *c1 = new TCanvas ("c1", "", 1000, 800);

  ////////////// LXMuX ///////////
  h1L3Mu3->SetMarkerColor(kRed);
  h1L3Mu3->SetMarkerStyle(33);
  h1L3Mu5->SetMarkerColor(kBlue);
  h1L3Mu5->SetMarkerStyle(33);
  h1L3Mu7->SetMarkerColor(kGreen);
  h1L3Mu7->SetMarkerStyle(33);
  h1L3Mu12->SetMarkerColor(kYellow+1);
  h1L3Mu12->SetMarkerStyle(33);
  h1L3Mu15->SetMarkerColor(6);
  h1L3Mu15->SetMarkerStyle(33);
  h1L3Mu20->SetMarkerColor(7);
  h1L3Mu20->SetMarkerStyle(33);

  h2L3Mu3->SetMarkerColor(kRed);
  h2L3Mu3->SetMarkerStyle(33);
  h2L3Mu5->SetMarkerColor(kBlue);
  h2L3Mu5->SetMarkerStyle(33);
  h2L3Mu7->SetMarkerColor(kGreen);
  h2L3Mu7->SetMarkerStyle(33);
  h2L3Mu12->SetMarkerColor(kYellow+1);
  h2L3Mu12->SetMarkerStyle(33);
  h2L3Mu15->SetMarkerColor(6);
  h2L3Mu15->SetMarkerStyle(33);
  h2L3Mu20->SetMarkerColor(7);
  h2L3Mu20->SetMarkerStyle(33);

  h3L3Mu3->SetMarkerColor(kRed);
  h3L3Mu3->SetMarkerStyle(33);
  h3L3Mu5->SetMarkerColor(kBlue);
  h3L3Mu5->SetMarkerStyle(33);
  h3L3Mu7->SetMarkerColor(kGreen);
  h3L3Mu7->SetMarkerStyle(33);
  h3L3Mu12->SetMarkerColor(kYellow+1);
  h3L3Mu12->SetMarkerStyle(33);
  h3L3Mu15->SetMarkerColor(6);
  h3L3Mu15->SetMarkerStyle(33);
  h3L3Mu20->SetMarkerColor(7);
  h3L3Mu20->SetMarkerStyle(33);


  h1L1Mu3->SetMarkerColor(kRed);
  h1L1Mu3->SetMarkerStyle(33);
  h1L1Mu5->SetMarkerColor(kBlue);
  h1L1Mu5->SetMarkerStyle(33);
  h1L1Mu7->SetMarkerColor(kGreen);
  h1L1Mu7->SetMarkerStyle(33);
  h1L1Mu12->SetMarkerColor(kYellow+1);
  h1L1Mu12->SetMarkerStyle(33);
  h1L1Mu16->SetMarkerColor(6);
  h1L1Mu16->SetMarkerStyle(33);

  h2L1Mu3->SetMarkerColor(kRed);
  h2L1Mu3->SetMarkerStyle(33);
  h2L1Mu5->SetMarkerColor(kBlue);
  h2L1Mu5->SetMarkerStyle(33);
  h2L1Mu7->SetMarkerColor(kGreen);
  h2L1Mu7->SetMarkerStyle(33);
  h2L1Mu12->SetMarkerColor(kYellow+1);
  h2L1Mu12->SetMarkerStyle(33);
  h2L1Mu16->SetMarkerColor(6);
  h2L1Mu16->SetMarkerStyle(33);

  h3L1Mu3->SetMarkerColor(kRed);
  h3L1Mu3->SetMarkerStyle(33);
  h3L1Mu5->SetMarkerColor(kBlue);
  h3L1Mu5->SetMarkerStyle(33);
  h3L1Mu7->SetMarkerColor(kGreen);
  h3L1Mu7->SetMarkerStyle(33);
  h3L1Mu12->SetMarkerColor(kYellow+1);
  h3L1Mu12->SetMarkerStyle(33);
  h3L1Mu16->SetMarkerColor(6);
  h3L1Mu16->SetMarkerStyle(33);


  TLegend* l = new TLegend (0.8,0.2,1,0.4);
  l->AddEntry(h1L3Mu3, "HLT_HIL3Mu3", "lep");
  l->AddEntry(h1L3Mu5, "HLT_HIL3Mu5", "lep");
  l->AddEntry(h1L3Mu7, "HLT_HIL3Mu7", "lep");
  l->AddEntry(h1L3Mu12, "HLT_HIL3Mu12", "lep");
  l->AddEntry(h1L3Mu15, "HLT_HIL3Mu15", "lep");
  l->AddEntry(h1L3Mu20, "HLT_HIL3Mu20", "lep");
  l->SetBorderSize(0);

  TLegend* l1 = new TLegend (0.8,0.2,1,0.4);
  l1->AddEntry(h1L1Mu3, "HLT_HIL1Mu3", "lep");
  l1->AddEntry(h1L1Mu5, "HLT_HIL1Mu5", "lep");
  l1->AddEntry(h1L1Mu7, "HLT_HIL1Mu7", "lep");
  l1->AddEntry(h1L1Mu12, "HLT_HIL1Mu12", "lep");
  l1->AddEntry(h1L1Mu16, "HLT_HIL1Mu16", "lep");
  l1->SetBorderSize(0);

  TLine * lptx3 = new TLine (3, 0, 3, 1);
  lptx3->SetLineColor(kRed);
  lptx3->SetLineStyle(2);

  TLine * lptx5 = new TLine (5, 0, 5, 1);
  lptx5->SetLineColor(kBlue);
  lptx5->SetLineStyle(2);

  TLine * lptx7 = new TLine (7, 0, 7, 1);
  lptx7->SetLineColor(kGreen);
  lptx7->SetLineStyle(2);

  TLine * lptx12 = new TLine (12, 0, 12, 1);
  lptx12->SetLineColor(kYellow+1);
  lptx12->SetLineStyle(2);

  TLine * lptx15 = new TLine (15, 0, 15, 1);
  lptx15->SetLineColor(6);
  lptx15->SetLineStyle(2);

  TLine * lptx16 = new TLine (16, 0, 16, 1);
  lptx16->SetLineColor(6);
  lptx16->SetLineStyle(2);

  TLine * lptx20 = new TLine (20, 0, 20, 1);
  lptx20->SetLineColor(7);
  lptx20->SetLineStyle(2);

  TLine * lpty1 = new TLine (0,1,100,1);
  lpty1->SetLineColor(kRed);
  lpty1->SetLineStyle(2);
  lpty1->SetLineWidth(2);

  TLine * lpty2 = new TLine (-2.4,1,2.4,1);
  lpty2->SetLineColor(kRed);
  lpty2->SetLineStyle(2);
  lpty2->SetLineWidth(2);

  TLine * lpty3 = new TLine (-3.2,1,3.2,1);
  lpty3->SetLineColor(kRed);
  lpty3->SetLineStyle(2);
  lpty3->SetLineWidth(2);
  
  TLine * lpty4 = new TLine (massmin,1,massmax,1);
  lpty4->SetLineColor(kRed);
  lpty4->SetLineStyle(2);
  lpty4->SetLineWidth(2);
  ////////////// L3MuX ///////////
  c1->cd();
  h01->Draw();
  lpty1->Draw("same");
  lptx3->Draw("same");
  lptx5->Draw("same");
  lptx7->Draw("same");
  lptx12->Draw("same");
  lptx15->Draw("same");
  lptx20->Draw("same");
  h1L3Mu3->Draw("same");
  h1L3Mu5->Draw("same");
  h1L3Mu7->Draw("same");
  h1L3Mu12->Draw("same");
  h1L3Mu15->Draw("same");
  h1L3Mu20->Draw("same");
  l->Draw("same");
  c1->SaveAs(Form("%s_MuX_L3_pt.png", sampleName[ns-1].c_str()));

  h02->Draw();
  lpty2->Draw("same");
  h2L3Mu3->Draw("same");
  h2L3Mu5->Draw("same");
  h2L3Mu7->Draw("same");
  h2L3Mu12->Draw("same");
  h2L3Mu15->Draw("same");
  h2L3Mu20->Draw("same");
  l->Draw("same");
  c1->SaveAs(Form("%s_MuX_L3_eta.png", sampleName[ns-1].c_str()));

  h03->Draw();
  lpty3->Draw("same");
  h3L3Mu3->Draw("same");
  h3L3Mu5->Draw("same");
  h3L3Mu7->Draw("same");
  h3L3Mu12->Draw("same");
  h3L3Mu15->Draw("same");
  h3L3Mu20->Draw("same");
  l->Draw("same");
  c1->SaveAs(Form("%s_MuX_L3_phi.png", sampleName[ns-1].c_str()));


  ////////////// L1MuX ///////////
  h01->Draw();
  lpty1->Draw("same");
  lptx3->Draw("same");
  lptx5->Draw("same");
  lptx7->Draw("same");
  lptx12->Draw("same");
  lptx16->Draw("same");
  h1L1Mu3->Draw("same");
  h1L1Mu5->Draw("same");
  h1L1Mu7->Draw("same");
  h1L1Mu12->Draw("same");
  h1L1Mu16->Draw("same");
  l1->Draw("same");
  c1->SaveAs(Form("%s_MuX_L1_pt.png", sampleName[ns-1].c_str()));

  h02->Draw();
  lpty2->Draw("same");
  h2L1Mu3->Draw("same");
  h2L1Mu5->Draw("same");
  h2L1Mu7->Draw("same");
  h2L1Mu12->Draw("same");
  h2L1Mu16->Draw("same");
  l1->Draw("same");
  c1->SaveAs(Form("%s_MuX_L1_eta.png", sampleName[ns-1].c_str()));

  h03->Draw();
  lpty3->Draw("same");
  h3L1Mu3->Draw("same");
  h3L1Mu5->Draw("same");
  h3L1Mu7->Draw("same");
  h3L1Mu12->Draw("same");
  h3L1Mu16->Draw("same");
  l1->Draw("same");
  c1->SaveAs(Form("%s_MuX_L1_phi.png", sampleName[ns-1].c_str()));

  ////////////// LXMu12 ///////////
  h1L1Mu12->SetMarkerColor(kRed);
  h1L2Mu12->SetMarkerColor(kBlue);
  h1L2Mu12->SetMarkerStyle(33);
  h1L3Mu12->SetMarkerColor(kGreen);

  h2L1Mu12->SetMarkerColor(kRed);
  h2L2Mu12->SetMarkerColor(kBlue);
  h2L2Mu12->SetMarkerStyle(33);
  h2L3Mu12->SetMarkerColor(kGreen);

  h3L1Mu12->SetMarkerColor(kRed);
  h3L2Mu12->SetMarkerColor(kBlue);
  h3L2Mu12->SetMarkerStyle(33);
  h3L3Mu12->SetMarkerColor(kGreen);

  TLegend* l2 = new TLegend (0.8,0.2,1,0.4);
  l2->AddEntry(h1L1Mu12, "HLT_HIL1Mu12", "lep");
  l2->AddEntry(h1L2Mu12, "HLT_HIL2Mu12", "lep");
  l2->AddEntry(h1L3Mu12, "HLT_HIL3Mu12", "lep");
  l2->SetBorderSize(0);

  h01->Draw();
  lpty1->Draw("same");
  lptx12->Draw("same");
  h1L1Mu12->Draw("same");
  h1L2Mu12->Draw("same");
  h1L3Mu12->Draw("same");
  l2->Draw("same");
  c1->SaveAs(Form("%s_Mu12_L1L2L3_pt.png", sampleName[ns-1].c_str()));

  h02->Draw();
  lpty2->Draw("same");
  h2L1Mu12->Draw("same");
  h2L2Mu12->Draw("same");
  h2L3Mu12->Draw("same");
  l2->Draw("same");
  c1->SaveAs(Form("%s_Mu12_L1L2L3_eta.png", sampleName[ns-1].c_str()));

  h03->Draw();
  lpty3->Draw("same");
  h3L1Mu12->Draw("same");
  h3L2Mu12->Draw("same");
  h3L3Mu12->Draw("same");
  l2->Draw("same");
  c1->SaveAs(Form("%s_Mu12_L1L2L3_phi.png", sampleName[ns-1].c_str()));


  ////////////// LXMu3 ///////////
  h1L1Mu3->SetMarkerColor(kRed);
  h1L2Mu3->SetMarkerColor(kBlue);
  h1L2Mu3->SetMarkerStyle(33);
  h1L3Mu3->SetMarkerColor(kGreen);

  h2L1Mu3->SetMarkerColor(kRed);
  h2L2Mu3->SetMarkerColor(kBlue);
  h2L2Mu3->SetMarkerStyle(33);
  h2L3Mu3->SetMarkerColor(kGreen);

  h3L1Mu3->SetMarkerColor(kRed);
  h3L2Mu3->SetMarkerColor(kBlue);
  h3L2Mu3->SetMarkerStyle(33);
  h3L3Mu3->SetMarkerColor(kGreen);

  TLegend* l3 = new TLegend (0.8,0.2, 1,0.4);
  l3->AddEntry(h1L1Mu3, "HLT_HIL1Mu3", "lep");
  l3->AddEntry(h1L2Mu3, "HLT_HIL2Mu3", "lep");
  l3->AddEntry(h1L3Mu3, "HLT_HIL3Mu3", "lep");
  l3->SetBorderSize(0);

  h01->Draw();
  lpty1->Draw("same");
  lptx3->Draw("same");
  h1L1Mu3->Draw("same");
  h1L2Mu3->Draw("same");
  h1L3Mu3->Draw("same");
  l3->Draw("same");
  c1->SaveAs(Form("%s_Mu3_L1L2L3_pt.png", sampleName[ns-1].c_str()));

  h02->Draw();
  lpty2->Draw("same");
  h2L1Mu3->Draw("same");
  h2L2Mu3->Draw("same");
  h2L3Mu3->Draw("same");
  l3->Draw("same");
  c1->SaveAs(Form("%s_Mu3_L1L2L3_eta.png", sampleName[ns-1].c_str()));

  h03->Draw();
  lpty3->Draw("same");
  h3L1Mu3->Draw("same");
  h3L2Mu3->Draw("same");
  h3L3Mu3->Draw("same");
  l3->Draw("same");
  c1->SaveAs(Form("%s_Mu3_L1L2L3_phi.png", sampleName[ns-1].c_str()));


  ////////////// LXMu5 ///////////
  h1L1Mu5->SetMarkerColor(kRed);
  h1L2Mu5->SetMarkerColor(kBlue);
  h1L2Mu5->SetMarkerStyle(33);
  h1L3Mu5->SetMarkerColor(kGreen);

  h2L1Mu5->SetMarkerColor(kRed);
  h2L2Mu5->SetMarkerColor(kBlue);
  h2L2Mu5->SetMarkerStyle(33);
  h2L3Mu5->SetMarkerColor(kGreen);

  h3L1Mu5->SetMarkerColor(kRed);
  h3L2Mu5->SetMarkerColor(kBlue);
  h3L2Mu5->SetMarkerStyle(33);
  h3L3Mu5->SetMarkerColor(kGreen);

  TLegend* l4 = new TLegend (0.8,0.2,1,0.4);
  l4->AddEntry(h1L1Mu5, "HLT_HIL1Mu5", "lep");
  l4->AddEntry(h1L2Mu5, "HLT_HIL2Mu5", "lep");
  l4->AddEntry(h1L3Mu5, "HLT_HIL3Mu5", "lep");
  l4->SetBorderSize(0);

  h01->Draw();
  lpty1->Draw("same");
  lptx5->Draw("same");
  h1L1Mu5->Draw("same");
  h1L2Mu5->Draw("same");
  h1L3Mu5->Draw("same");
  l4->Draw("same");
  c1->SaveAs(Form("%s_Mu5_L1L2L3_pt.png", sampleName[ns-1].c_str()));

  h02->Draw();
  lpty2->Draw("same");
  h2L1Mu5->Draw("same");
  h2L2Mu5->Draw("same");
  h2L3Mu5->Draw("same");
  l4->Draw("same");
  c1->SaveAs(Form("%s_Mu5_L1L2L3_eta.png", sampleName[ns-1].c_str()));

  h03->Draw();
  lpty3->Draw("same");
  h3L1Mu5->Draw("same");
  h3L2Mu5->Draw("same");
  h3L3Mu5->Draw("same");
  l4->Draw("same");
  c1->SaveAs(Form("%s_Mu5_L1L2L3_phi.png", sampleName[ns-1].c_str()));


  /////////////// diMu ////////////
  if (ns!=2)
    {
      TEfficiency *h100 = (TEfficiency*) f4->Get("ptQQ_0_HLT_HIL1DoubleMuOpen_v1");
      TEfficiency *h101 = (TEfficiency*) f4->Get("ptQQ_1_HLT_HIL1DoubleMuOpen_OS_v1");
      TEfficiency *h102 = (TEfficiency*) f4->Get("ptQQ_2_HLT_HIL1DoubleMuOpen_SS_v1");
      TEfficiency *h103 = (TEfficiency*) f4->Get("ptQQ_3_HLT_HIL1DoubleMu0_v1");
      TEfficiency *h104 = (TEfficiency*) f4->Get("ptQQ_4_HLT_HIL1DoubleMu0_HighQ_v1");
      TEfficiency *h105 = (TEfficiency*) f4->Get("ptQQ_5_HLT_HIL1DoubleMu10_v1");
      TEfficiency *h106 = (TEfficiency*) f4->Get("ptQQ_6_HLT_HIL2DoubleMu0_v1");
      TEfficiency *h107 = (TEfficiency*) f4->Get("ptQQ_7_HLT_HIL2DoubleMu10_v1");
      TEfficiency *h108 = (TEfficiency*) f4->Get("ptQQ_8_HLT_HIL3DoubleMu0_v1");
      TEfficiency *h109 = (TEfficiency*) f4->Get("ptQQ_9_HLT_HIL3DoubleMu10_v1");

      TEfficiency *h110 = (TEfficiency*) f5->Get("rapQQ_0_HLT_HIL1DoubleMuOpen_v1");
      TEfficiency *h111 = (TEfficiency*) f5->Get("rapQQ_1_HLT_HIL1DoubleMuOpen_OS_v1");
      TEfficiency *h112 = (TEfficiency*) f5->Get("rapQQ_2_HLT_HIL1DoubleMuOpen_SS_v1");
      TEfficiency *h113 = (TEfficiency*) f5->Get("rapQQ_3_HLT_HIL1DoubleMu0_v1");
      TEfficiency *h114 = (TEfficiency*) f5->Get("rapQQ_4_HLT_HIL1DoubleMu0_HighQ_v1");
      TEfficiency *h115 = (TEfficiency*) f5->Get("rapQQ_5_HLT_HIL1DoubleMu10_v1");
      TEfficiency *h116 = (TEfficiency*) f5->Get("rapQQ_6_HLT_HIL2DoubleMu0_v1");
      TEfficiency *h117 = (TEfficiency*) f5->Get("rapQQ_7_HLT_HIL2DoubleMu10_v1");
      TEfficiency *h118 = (TEfficiency*) f5->Get("rapQQ_8_HLT_HIL3DoubleMu0_v1");
      TEfficiency *h119 = (TEfficiency*) f5->Get("rapQQ_9_HLT_HIL3DoubleMu10_v1");

      TEfficiency *h120 = (TEfficiency*) f6->Get("massQQ_0_HLT_HIL1DoubleMuOpen_v1");
      TEfficiency *h121 = (TEfficiency*) f6->Get("massQQ_1_HLT_HIL1DoubleMuOpen_OS_v1");
      TEfficiency *h122 = (TEfficiency*) f6->Get("massQQ_2_HLT_HIL1DoubleMuOpen_SS_v1");
      TEfficiency *h123 = (TEfficiency*) f6->Get("massQQ_3_HLT_HIL1DoubleMu0_v1");
      TEfficiency *h124 = (TEfficiency*) f6->Get("massQQ_4_HLT_HIL1DoubleMu0_HighQ_v1");
      TEfficiency *h125 = (TEfficiency*) f6->Get("massQQ_5_HLT_HIL1DoubleMu10_v1");
      TEfficiency *h126 = (TEfficiency*) f6->Get("massQQ_6_HLT_HIL2DoubleMu0_v1");
      TEfficiency *h127 = (TEfficiency*) f6->Get("massQQ_7_HLT_HIL2DoubleMu10_v1");
      TEfficiency *h128 = (TEfficiency*) f6->Get("massQQ_8_HLT_HIL3DoubleMu0_v1");
      TEfficiency *h129 = (TEfficiency*) f6->Get("massQQ_9_HLT_HIL3DoubleMu10_v1");


      h100->SetMarkerColor(kRed);
      h100->SetMarkerStyle(33);
      h103->SetMarkerColor(kBlue);
      h103->SetMarkerStyle(33);
      h104->SetMarkerColor(kGreen);
      h104->SetMarkerStyle(33);

      h110->SetMarkerColor(kRed);
      h110->SetMarkerStyle(33);
      h113->SetMarkerColor(kBlue);
      h113->SetMarkerStyle(33);
      h114->SetMarkerColor(kGreen);
      h114->SetMarkerStyle(33);

      h120->SetMarkerColor(kRed);
      h120->SetMarkerStyle(33);
      h123->SetMarkerColor(kBlue);
      h123->SetMarkerStyle(33);
      h124->SetMarkerColor(kGreen);
      h124->SetMarkerStyle(33);

      TLegend* l5 = new TLegend (0.8,0.4,1,0.6);
      l5->AddEntry(h100, "HLT_HIL1DoubleMuOpen", "lep");
      l5->AddEntry(h103, "HLT_HIL1DoubleMu0", "lep");
      l5->AddEntry(h104, "HLT_HIL1DoubleMu0_HighQ", "lep");
      l5->SetBorderSize(0);

      h01->Draw();
      lpty1->Draw("same");
      h100->Draw("same");
      h103->Draw("same");
      h104->Draw("same");
      l5->Draw("same");
      c1->SaveAs(Form("%s_doubleMu_Open0HighQ_pt.png", sampleName[ns-1].c_str()));
      h04->Draw();
      lpty2->Draw("same");
      h110->Draw("same");
      h113->Draw("same");
      h114->Draw("same");
      l5->Draw("same");
      c1->SaveAs(Form("%s_doubleMu_Open0HighQ_rap.png", sampleName[ns-1].c_str()));
      h05->Draw();
      lpty4->Draw("same");
      h120->Draw("same");
      h123->Draw("same");
      h124->Draw("same");
      l5->Draw("same");
      c1->SaveAs(Form("%s_doubleMu_Open0HighQ_mass.png", sampleName[ns-1].c_str()));
      
      //////////// OS/SS ////////////
      h101->SetMarkerColor(kRed);
      h101->SetMarkerStyle(33);
      h102->SetMarkerColor(kBlue);
      h102->SetMarkerStyle(33);

      h111->SetMarkerColor(kRed);
      h111->SetMarkerStyle(33);
      h112->SetMarkerColor(kBlue);
      h112->SetMarkerStyle(33);

      h121->SetMarkerColor(kRed);
      h121->SetMarkerStyle(33);
      h122->SetMarkerColor(kBlue);
      h122->SetMarkerStyle(33);

      TLegend* l6 = new TLegend (0.8,0.4,1,0.6);
      l6->AddEntry(h101, "HLT_HIL1DoubleMuOpen_OS", "lep");
      l6->AddEntry(h102, "HLT_HIL1DoubleMuOpen_SS", "lep");
      l6->SetBorderSize(0);

      h01->Draw();
      lpty1->Draw("same");
      h101->Draw("same");
      h102->Draw("same");
      l6->Draw("same");
      c1->SaveAs(Form("%s_doubleMu_OSSS_pt.png", sampleName[ns-1].c_str()));

      h04->Draw();
      lpty2->Draw("same");
      h111->Draw("same");
      h112->Draw("same");
      l6->Draw("same");
      c1->SaveAs(Form("%s_doubleMu_OSSS_rap.png", sampleName[ns-1].c_str()));

      h05->Draw();
      lpty4->Draw("same");
      h121->Draw("same");
      h122->Draw("same");
      l6->Draw("same");
      c1->SaveAs(Form("%s_doubleMu_OSSS_mass.png", sampleName[ns-1].c_str()));


      h103->SetMarkerColor(kRed);
      h103->SetMarkerStyle(33);
      h106->SetMarkerColor(kBlue);
      h106->SetMarkerStyle(33);
      h108->SetMarkerColor(kGreen);
      h108->SetMarkerStyle(33);

      h113->SetMarkerColor(kRed);
      h113->SetMarkerStyle(33);
      h116->SetMarkerColor(kBlue);
      h116->SetMarkerStyle(33);
      h118->SetMarkerColor(kGreen);
      h118->SetMarkerStyle(33);

      h123->SetMarkerColor(kRed);
      h123->SetMarkerStyle(33);
      h126->SetMarkerColor(kBlue);
      h126->SetMarkerStyle(33);
      h128->SetMarkerColor(kGreen);
      h128->SetMarkerStyle(33);

      TLegend* l7 = new TLegend (0.8,0.4,1,0.6);
      l7->AddEntry(h103, "HLT_HIL1DoubleMu0", "lep");
      l7->AddEntry(h106, "HLT_HIL2DoubleMu0", "lep");
      l7->AddEntry(h108, "HLT_HIL3DoubleMu0", "lep");
      l7->SetBorderSize(0);

      h01->Draw();
      lpty1->Draw("same");
      h103->Draw("same");
      h106->Draw("same");
      h108->Draw("same");
      l7->Draw("same");
      c1->SaveAs(Form("%s_doubleMu0_L1L2L3_pt.png", sampleName[ns-1].c_str()));
      h04->Draw();
      lpty2->Draw("same");
      h113->Draw("same");
      h116->Draw("same");
      h118->Draw("same");
      l7->Draw("same");
      c1->SaveAs(Form("%s_doubleMu0_L1L2L3_rap.png", sampleName[ns-1].c_str()));
      h05->Draw();
      lpty4->Draw("same");
      h123->Draw("same");
      h126->Draw("same");
      h128->Draw("same");
      l7->Draw("same");
      c1->SaveAs(Form("%s_doubleMu0_L1L2L3_mass.png", sampleName[ns-1].c_str()));

      if (ns == 5)
	{
	  h105->SetMarkerColor(kRed);
	  h105->SetMarkerStyle(33);
	  h107->SetMarkerColor(kBlue);
	  h107->SetMarkerStyle(33);
	  h109->SetMarkerColor(kGreen);
	  h109->SetMarkerStyle(33);

	  h115->SetMarkerColor(kRed);
	  h115->SetMarkerStyle(33);
	  h117->SetMarkerColor(kBlue);
	  h117->SetMarkerStyle(33);
	  h119->SetMarkerColor(kGreen);
	  h119->SetMarkerStyle(33);

	  h125->SetMarkerColor(kRed);
	  h125->SetMarkerStyle(33);
	  h127->SetMarkerColor(kBlue);
	  h127->SetMarkerStyle(33);
	  h129->SetMarkerColor(kGreen);
	  h129->SetMarkerStyle(33);

	  TLegend* l8 = new TLegend (0.8,0.4,1,0.6);
	  l8->AddEntry(h105, "HLT_HIL1DoubleMu10", "lep");
	  l8->AddEntry(h107, "HLT_HIL2DoubleMu10", "lep");
	  l8->AddEntry(h109, "HLT_HIL3DoubleMu10", "lep");
	  l8->SetBorderSize(0);

	  h01->Draw();
	  lpty1->Draw("same");
	  h105->Draw("same");
	  h107->Draw("same");
	  h109->Draw("same");
	  l8->Draw("same");
	  c1->SaveAs(Form("%s_doubleMu10_L1L2L3_pt.png", sampleName[ns-1].c_str()));
	  h04->Draw();
	  lpty2->Draw("same");
	  h115->Draw("same");
	  h117->Draw("same");
	  h119->Draw("same");
	  l8->Draw("same");
	  c1->SaveAs(Form("%s_doubleMu10_L1L2L3_rap.png", sampleName[ns-1].c_str()));
	  h05->Draw();
	  lpty4->Draw("same");
	  h125->Draw("same");
	  h127->Draw("same");
	  h129->Draw("same");
	  l8->Draw("same");
	  c1->SaveAs(Form("%s_doubleMu10_L1L2L3_mass.png", sampleName[ns-1].c_str()));
	}
    }
}
