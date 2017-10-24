#define myTree_cxx
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
using namespace  RooFit;
//using namespace RooPlot;

Int_t ntrig=28;
double ptbins []={0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24, 27, 30, 35, 40, 45, 50};
double etabins []={-2.4, -2.2, -2, -1.8, -1.6, -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4};
double phibins []={-3.2,-2.8,-2.4,-2.,-1.6,-1.2,-0.8,-0.4,0,0.4,0.8,1.2,1.6,2.,2.4,2.8,3.2};

double massbins []={1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 3, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5, 5.1, 5.2, 5.3, 5.4, 5.5};

double massbinsz []={88.5, 88.6, 88.7, 88.8, 88.9, 89.0, 89.1, 89.2, 89.3, 89.4, 89.5, 89.6, 89.7, 89.8, 89.9, 90.0, 90.1, 90.2, 90.3, 90.4, 90.5, 90.6, 90.7, 90.8, 90.9, 91.0, 91.1, 91.2, 91.3, 91.4, 91.5, 91.6, 91.7, 91.8, 91.9, 92.0, 92.1, 92.2, 92.3, 92.4, 92.5, 92.6, 92.7, 92.8, 92.9, 93.0, 93.1, 93.2, 93.3, 93.4, 93.5};

string trig [] = 
  {
    // For 2017 (Latest) 28 total
    //Double
    "HLT_HIL1DoubleMuOpen_v1",//0
    "HLT_HIL1DoubleMuOpen_OS_v1",//1
    "HLT_HIL1DoubleMuOpen_SS_v1",//2
    "HLT_HIL1DoubleMu0_v1",//3
    "HLT_HIL1DoubleMu0_HighQ_v1",//4
    "HLT_HIL1DoubleMu10_v1",//5
    "HLT_HIL2DoubleMu0_v1",//6
    "HLT_HIL2DoubleMu10_v1",//7
    "HLT_HIL3DoubleMu0_v1",//8
    "HLT_HIL3DoubleMu10_v1",//9
    //Single
    "HLT_HIL1Mu3_v1",//10
    "HLT_HIL1Mu5_v1",//11
    "HLT_HIL1Mu7_v1",//12
    "HLT_HIL1Mu12_v1",//13
    "HLT_HIL1Mu16_v1",//14
    "HLT_HIL2Mu3_v1",//15
    "HLT_HIL2Mu5_v1",//16
    "HLT_HIL2Mu7_v1",//17
    "HLT_HIL2Mu12_v1",//18
    "HLT_HIL2Mu15_v1",//19
    "HLT_HIL2Mu20_v1",//20
    "HLT_HIL3Mu3_v1",//21
    "HLT_HIL3Mu5_v1",//22
    "HLT_HIL3Mu7_v1",//23
    "HLT_HIL3Mu12_v1",//24
    "HLT_HIL3Mu15_v1",//25
    "HLT_HIL3Mu20_v1",//26
    "HLT_HIL3Mu3_Track1_Jpsi_v1"//27
  };

Int_t npb = sizeof(ptbins)/sizeof(double);
Int_t netab = sizeof(etabins)/sizeof(double);
Int_t nphib = sizeof(phibins)/sizeof(double);
Int_t nmassb = sizeof(massbins)/sizeof(double);
Int_t nmassbz = sizeof(massbinsz)/sizeof(double);

void myTree::diMuTrigEff()
{
  if (nTree == 2)
    cout<<endl<<"this is a Mu Gun MC sample.. diMu don't have a meaning"<<endl;
  else
    {
      if (nTree ==1)
	{
	  gSystem->mkdir("JPsiGunTrigEff",1);
	  gSystem->cd("JPsiGunTrigEff");
	}
      else if (nTree ==2)
	{
	  gSystem->mkdir("MuGunTrigEff",1);
	  gSystem->cd("MuGunTrigEff");
	}
      else if (nTree ==3)
	{
	  gSystem->mkdir("NonPrJPsiTrigEff");
	  gSystem->cd("NonPrJPsiTrigEff");
	}
      else if (nTree ==4)
	{
	  gSystem->mkdir("PrJPsiTrigEff");
	  gSystem->cd("PrJPsiTrigEff");
	}
      else if (nTree ==5)
	{
	  gSystem->mkdir("ZTrigEff");
	  gSystem->cd("ZTrigEff");
	}

      gSystem->mkdir("diMuTrigEff");
      gSystem->cd("diMuTrigEff");

      TCanvas *canp[ntrig];
      TCanvas *cany[ntrig];
      TCanvas *canm[ntrig];
      TH1F *pnume[ntrig];
      TH1F *pdeno[ntrig];
      TH1F *rapnume[ntrig];
      TH1F *rapdeno[ntrig];
      TH1F *massnume[ntrig];
      TH1F *massdeno[ntrig];
      TPaveText* tbp[ntrig];
      TPaveText* tby[ntrig];
      TPaveText* tbm[ntrig];

      Bool_t ptCond = true;
      Bool_t massCond = true;
      Bool_t qualityCond = false;


      for (int i=0; i<ntrig; i++)
	{
	  pnume[i]= new TH1F (Form("pnume%d",i), Form("%s; p_{t}^{#mu#mu}(GeV/c); Efficiency",trig[i].c_str()), npb-1, ptbins);
	  pdeno[i]= new TH1F (Form("pdeno%d",i), Form("%s; p_{t}^{#mu#mu}(GeV/c); Efficiency",trig[i].c_str()), npb-1, ptbins);
	  rapnume[i]= new TH1F (Form("rapnume%d",i), Form("%s; y^{#mu#mu}; Efficiency",trig[i].c_str()), netab-1, etabins);
	  rapdeno[i]= new TH1F (Form("rapdeno%d",i), Form("%s; y^{#mu#mu}; Efficiency",trig[i].c_str()), netab-1, etabins);
	  if (nTree == 5)
	    {
	      massnume[i]= new TH1F (Form("massnume%d",i), Form("%s; mass^{#mu#mu} (GeV/c^{2}); Efficiency",trig[i].c_str()), nmassbz-1, massbinsz);
	      massdeno[i]= new TH1F (Form("massdeno%d",i), Form("%s; mass^{#mu#mu} (GeV/c^{2}); Efficiency",trig[i].c_str()), nmassbz-1, massbinsz);
	    }
	  else
	    {
	      massnume[i]= new TH1F (Form("massnume%d",i), Form("%s; mass^{#mu#mu} (GeV/c^{2}); Efficiency",trig[i].c_str()), nmassb-1, massbins);
	      massdeno[i]= new TH1F (Form("massdeno%d",i), Form("%s; mass^{#mu#mu} (GeV/c^{2}); Efficiency",trig[i].c_str()), nmassb-1, massbins);
	    }
	  //canp[i] = new TCanvas (Form("canp%d", i), Form("canp%d", i), 1000, 750);
	  //cany[i] = new TCanvas (Form("cany%d", i), Form("cany%d", i), 1000, 750);
	  //canm[i] = new TCanvas (Form("canm%d", i), Form("canm%d", i), 1000, 750);
	}
      Long64_t nentries = fChain->GetEntries();
      Long64_t nbytes = 0, nb = 0;
      for (Long64_t jentry=0; jentry<nentries;jentry++) 
	{
	  Long64_t ientry = LoadTree(jentry);
	  if (ientry < 0) break;
	  nb = fChain->GetEntry(jentry);   nbytes += nb;
	  for (int iQQ=0; iQQ<Reco_QQ_size; iQQ++)
	    {
	      TLorentzVector *RecoQQ4mom = (TLorentzVector*) Reco_QQ_4mom->At(iQQ);
	      TLorentzVector *RecoQQmupl4mom = (TLorentzVector*) Reco_QQ_mupl_4mom->At(iQQ);
	      TLorentzVector *RecoQQmumi4mom = (TLorentzVector*) Reco_QQ_mumi_4mom->At(iQQ);
	      //mass cut
	      if (nTree == 5)
		{
		  if (RecoQQ4mom->M() < 89 || RecoQQ4mom->M() > 93)
		    massCond = false;
		  qualityCond = passTightQualityCuts2015(iQQ, 2);
		}
	      else if (nTree == 1 || nTree == 3 || nTree ==4)
		{
		  if (RecoQQ4mom->M() < 2 || RecoQQ4mom->M() > 5)
		    massCond = false;
		  qualityCond = passSoftQualityCuts2015(iQQ, 2);
		}


	      if (Reco_QQ_sign[iQQ]==0) 
		{
		  for (int j=0; j<ntrig; j++)
		    {
		      ptCond = true;
		      if(j==5 && ((RecoQQmupl4mom->Pt()< 10) || (RecoQQmumi4mom->Pt()< 10))) ptCond=false;
		      if(j==7 && ((RecoQQmupl4mom->Pt()< 10) || (RecoQQmumi4mom->Pt()< 10))) ptCond=false;
		      if(j==9 && ((RecoQQmupl4mom->Pt()< 10) || (RecoQQmumi4mom->Pt()< 10))) ptCond=false;
		      if(j==10 && ((RecoQQmupl4mom->Pt()< 3) && (RecoQQmumi4mom->Pt()< 3))) ptCond=false;
		      if(j==11 && ((RecoQQmupl4mom->Pt()< 5) && (RecoQQmumi4mom->Pt()< 5))) ptCond=false;
		      if(j==12 && ((RecoQQmupl4mom->Pt()< 7) && (RecoQQmumi4mom->Pt()< 7))) ptCond=false;
		      if(j==13 && ((RecoQQmupl4mom->Pt()< 12) && (RecoQQmumi4mom->Pt()< 12))) ptCond=false;
		      if(j==14 && ((RecoQQmupl4mom->Pt()< 16) && (RecoQQmumi4mom->Pt()< 16))) ptCond=false;
		      if(j==15 && ((RecoQQmupl4mom->Pt()< 3) && (RecoQQmumi4mom->Pt()< 3))) ptCond=false;
		      if(j==16 && ((RecoQQmupl4mom->Pt()< 5) && (RecoQQmumi4mom->Pt()< 5))) ptCond=false;
		      if(j==17 && ((RecoQQmupl4mom->Pt()< 7) && (RecoQQmumi4mom->Pt()< 7))) ptCond=false;
		      if(j==18 && ((RecoQQmupl4mom->Pt()< 12) && (RecoQQmumi4mom->Pt()< 12))) ptCond=false;
		      if(j==19 && ((RecoQQmupl4mom->Pt()< 15) && (RecoQQmumi4mom->Pt()< 15))) ptCond=false;
		      if(j==20 && ((RecoQQmupl4mom->Pt()< 20) && (RecoQQmumi4mom->Pt()< 20))) ptCond=false;
		      if(j==21 && ((RecoQQmupl4mom->Pt()< 3) && (RecoQQmumi4mom->Pt()< 3))) ptCond=false;
		      if(j==22 && ((RecoQQmupl4mom->Pt()< 5) && (RecoQQmumi4mom->Pt()< 5))) ptCond=false;
		      if(j==23 && ((RecoQQmupl4mom->Pt()< 7) && (RecoQQmumi4mom->Pt()< 7))) ptCond=false;
		      if(j==24 && ((RecoQQmupl4mom->Pt()< 12) && (RecoQQmumi4mom->Pt()< 12))) ptCond=false;
		      if(j==25 && ((RecoQQmupl4mom->Pt()< 15) && (RecoQQmumi4mom->Pt()< 15))) ptCond=false;
		      if(j==26 && ((RecoQQmupl4mom->Pt()< 20) && (RecoQQmumi4mom->Pt()< 20))) ptCond=false;
		      if(j==27 && ((RecoQQmupl4mom->Pt()< 3) && (RecoQQmumi4mom->Pt()< 3))) ptCond=false;
		      

		      if (qualityCond && ptCond)
			{
			  pdeno[j]->Fill(RecoQQ4mom->Pt());
			      rapdeno[j]->Fill(RecoQQ4mom->Rapidity());
			      massdeno[j]->Fill(RecoQQ4mom->M());
			  if(isTriggerMatch(iQQ, j, 2))
			    {
			      pnume[j]->Fill(RecoQQ4mom->Pt());
			      rapnume[j]->Fill(RecoQQ4mom->Rapidity());
			      massnume[j]->Fill(RecoQQ4mom->M());
			    }
			}				

		    }			    
		}
	    }
	}
      TEfficiency* peff[ntrig];
      TEfficiency* rapeff[ntrig];
      TEfficiency* masseff[ntrig];
      TFile *ptTrigEff = new TFile("diMuPtTrigEff.root", "RECREATE");
      TFile *rapTrigEff = new TFile("diMuRapTrigEff.root", "RECREATE");
      TFile *massTrigEff = new TFile("diMuMassTrigEff.root", "RECREATE");
      TLine *lpty1 [ntrig];
      TLine *lyy1 [nTrig];

      for(int i=0; i<ntrig;i++)
	{
	  peff[i] = new TEfficiency(Form("peff%d",i), "; p_{t}^{#mu#mu}(GeV/c); Efficiency", npb-1, ptbins);
	  if(TEfficiency::CheckConsistency(*pnume[i],*pdeno[i]))
	    peff[i] = new TEfficiency (*pnume[i],*pdeno[i]);
	  else 
	    cout<<"inconsistent histograms for trigger efficiency in fct of pt"<<i<<endl;
	  lpty1[i] = new TLine (0, 1, 50, 1);
	  lpty1[i]->SetLineStyle(2);
	  lpty1[i]->SetLineColor(kRed);
	  ptTrigEff->cd();
	  peff[i]->Write(Form("ptQQ_%d_%s", i, trig[i].c_str()));
	  //canp[i]->cd();
	  //peff[i]->Draw("alp");
	  //lpty1[i]->Draw("sames");
	  //tbp[i]= new TPaveText(0.15,0.9,0.5,0.95, "BRNDC");
	  //tbp[i]-> AddText(Form("%s",trig[i].c_str()));
	  //tbp[i]->SetBorderSize(1);
	  //tbp[i]->SetFillColor(0);
	  //tbp[i]->Draw("same");
	  //canp[i]->SaveAs(Form("ptQQ_%s.png",trig[i].c_str()));

	  rapeff[i] = new TEfficiency(Form("rapeff%d",i), ";y^{#mu#mu}; Efficiency", netab-1, etabins);
	  if(TEfficiency::CheckConsistency(*rapnume[i],*rapdeno[i]))
	    rapeff[i] = new TEfficiency (*rapnume[i],*rapdeno[i]);
	  else 
	    cout<<"inconsistent histograms for trigger efficiency in function of rapidity"<<i<<endl;
	  rapTrigEff->cd();
	  rapeff[i]->Write(Form("rapQQ_%d_%s", i, trig[i].c_str()));
	  //cany[i]->cd();
	  //rapeff[i]->Draw("alp");
	  tby[i]= new TPaveText(0.15,0.9,0.5,0.95, "BRNDC");
	  tby[i]-> AddText(Form("%s",trig[i].c_str()));
	  tby[i]->SetBorderSize(1);
	  tby[i]->SetFillColor(0);
	  //tby[i]->Draw("same");
	  //cany[i]->SaveAs(Form("rapQQ_%s.png",trig[i].c_str()));

	  if (nTree ==5)
	    masseff[i] = new TEfficiency(Form("masseff%d",i), "; mass^{#mu#mu} (GeV/c^{2}); Efficiency", nmassbz-1, massbinsz);
	  else
	    masseff[i] = new TEfficiency(Form("masseff%d",i), "; mass^{#mu#mu} (GeV/c^{2}); Efficiency", nmassb-1, massbins);
	  if(TEfficiency::CheckConsistency(*massnume[i],*massdeno[i]))
	    masseff[i] = new TEfficiency (*massnume[i],*massdeno[i]);
	  else 
	    cout<<"inconsistent histograms for trigger efficiency in function of mass"<<i<<endl;
	  massTrigEff->cd();
	  masseff[i]->Write(Form("massQQ_%d_%s", i, trig[i].c_str()));
	  //canm[i]->cd();
	  //masseff[i]->Draw("alp");
	  tbm[i]= new TPaveText(0.15,0.9,0.5,0.95, "BRNDC");
	  tbm[i]-> AddText(Form("%s",trig[i].c_str()));
	  tbm[i]->SetBorderSize(1);
	  tbm[i]->SetFillColor(0);
	  //tbm[i]->Draw("same");
	  //canm[i]->SaveAs(Form("massQQ_%s.png",trig[i].c_str()));
	}
      gSystem->cd("../..");
      ptTrigEff->Close();
      rapTrigEff->Close();
      massTrigEff->Close();

    }
}




void myTree::singleMuTrigEff()
{

 if (nTree ==1)
	{
	  gSystem->mkdir("JPsiGunTrigEff",1);
	  gSystem->cd("JPsiGunTrigEff");
	}
      else if (nTree ==2)
	{
	  gSystem->mkdir("MuGunTrigEff",1);
	  gSystem->cd("MuGunTrigEff");
	}
      else if (nTree ==3)
	{
	  gSystem->mkdir("NonPrJPsiTrigEff");
	  gSystem->cd("NonPrJPsiTrigEff");
	}
      else if (nTree ==4)
	{
	  gSystem->mkdir("PrJPsiTrigEff");
	  gSystem->cd("PrJPsiTrigEff");
	}
      else if (nTree ==5)
	{
	  gSystem->mkdir("ZTrigEff");
	  gSystem->cd("ZTrigEff");
	}

      gSystem->mkdir("singleMuTrigEff");
      gSystem->cd("singleMuTrigEff");

      //gStyle->SetLineColor(kBlue+2);
      //TCanvas *canp[ntrig];
      //TCanvas *cane[ntrig];
      //TCanvas *canph[ntrig];
      TH1F *pnume[ntrig];
      TH1F *pdeno[ntrig];
      TH1F *etanume[ntrig];
      TH1F *etadeno[ntrig];
      TH1F *phinume[ntrig];
      TH1F *phideno[ntrig];
      TPaveText* tbp[ntrig];
      TPaveText* tbe[ntrig];
      TPaveText* tbph[ntrig];

      Bool_t ptCond = true;
      Bool_t qualityCond = false;

      for (int i=0; i<ntrig; i++)
	{
	  pnume[i]= new TH1F (Form("pnume%d",i), ";p_{t}^{#mu+}(GeV/c); Efficiencyvents", npb-1, ptbins);
	  pdeno[i]= new TH1F (Form("pdeno%d",i), ";p_{t}^{#mu+}(GeV/c); Efficiency", npb-1, ptbins);
	  etanume[i]= new TH1F (Form("etanume%d",i), ";#eta^{#mu+}; Efficiency", netab-1, etabins);
	  etadeno[i]= new TH1F (Form("etadeno%d",i), ";#eta^{#mu+}; Efficiency", netab-1, etabins);
	  phinume[i]= new TH1F (Form("phinume%d",i), ";#phi^{#mu+}; Efficiency", nphib-1, phibins);
	  phideno[i]= new TH1F (Form("phideno%d",i), ";#phi^{#mu+}; Efficiency", nphib-1, phibins);
	  //canp[i] = new TCanvas (Form("canp%d", i), Form("canp%d", i), 1000, 750);
	  //cane[i] = new TCanvas (Form("cane%d", i), Form("cane%d", i), 1000, 750);
	  //canph[i] = new TCanvas (Form("canph%d", i), Form("canph%d", i), 1000, 750);
	}

      Long64_t nentries = fChain->GetEntries();
      Long64_t nbytes = 0, nb = 0;
      for (Long64_t jentry=0; jentry<nentries;jentry++) 
	{
	  Long64_t ientry = LoadTree(jentry);
	  if (ientry < 0) break;
	  nb = fChain->GetEntry(jentry);   nbytes += nb;
	  for (int iMu=0; iMu<Reco_mu_size; iMu++)
	    {
	      TLorentzVector *RecoMu4mom = (TLorentzVector*) Reco_mu_4mom->At(iMu);
	      if (nTree ==5)
		qualityCond = passTightQualityCuts2015(iMu, 1);
	      else
		qualityCond = passSoftQualityCuts2015(iMu, 1);
	      for (int j=0; j<ntrig; j++)
		{
		  ptCond = true;
		  if(j==5 && (RecoMu4mom->Pt()< 10)) ptCond=false;
		  if(j==7 && (RecoMu4mom->Pt()< 10)) ptCond=false;
		  if(j==9 && (RecoMu4mom->Pt()< 10)) ptCond=false;
		  if(j==10 && (RecoMu4mom->Pt()< 3)) ptCond=false;
		  if(j==11 && (RecoMu4mom->Pt()< 5)) ptCond=false;
		  if(j==12 && (RecoMu4mom->Pt()< 7)) ptCond=false;
		  if(j==13 && (RecoMu4mom->Pt()< 12)) ptCond=false;
		  if(j==14 && (RecoMu4mom->Pt()< 16)) ptCond=false;
		  if(j==15 && (RecoMu4mom->Pt()< 3)) ptCond=false;
		  if(j==16 && (RecoMu4mom->Pt()< 5)) ptCond=false;
		  if(j==17 && (RecoMu4mom->Pt()< 7)) ptCond=false;
		  if(j==18 && (RecoMu4mom->Pt()< 12)) ptCond=false;
		  if(j==19 && (RecoMu4mom->Pt()< 15)) ptCond=false;
		  if(j==20 && (RecoMu4mom->Pt()< 20)) ptCond=false;
		  if(j==21 && (RecoMu4mom->Pt()< 3)) ptCond=false;
		  if(j==22 && (RecoMu4mom->Pt()< 5)) ptCond=false;
		  if(j==23 && (RecoMu4mom->Pt()< 7)) ptCond=false;
		  if(j==24 && (RecoMu4mom->Pt()< 12)) ptCond=false;
		  if(j==25 && (RecoMu4mom->Pt()< 15)) ptCond=false;
		  if(j==26 && (RecoMu4mom->Pt()< 20)) ptCond=false;
		  if(j==27 && (RecoMu4mom->Pt()< 3)) ptCond=false;

		  if (qualityCond && Reco_mu_charge[iMu]>0)
		    {
		      pdeno[j]->Fill(RecoMu4mom->Pt());
		      if (ptCond)
			{
			  etadeno[j]->Fill(RecoMu4mom->Eta());
			  phideno[j]->Fill(RecoMu4mom->Phi());
			}
		      if(isTriggerMatch(iMu, j, 1))
			{
			  pnume[j]->Fill(RecoMu4mom->Pt());
			  if (ptCond)
			    {
			      etanume[j]->Fill(RecoMu4mom->Eta());
			      phinume[j]->Fill(RecoMu4mom->Phi());
			    }
			}
		    }
		    
		}			    
			
	    }
	}
      TEfficiency* peff[ntrig];
      TEfficiency* etaeff[ntrig];
      TEfficiency* phieff[ntrig];
      TFile *ptTrigEff = new TFile("muPtTrigEff.root", "RECREATE");
      TFile *etaTrigEff = new TFile("muEtaTrigEff.root", "RECREATE");
      TFile *phiTrigEff = new TFile("muPhiTrigEff.root", "RECREATE");
      for(int i=0; i<ntrig;i++)
	{
	  peff[i] = new TEfficiency(Form("peff%d",i), Form("%s; p_{t}^{#mu+}(GeV/c); Efficiency",trig[i].c_str()), npb-1, ptbins);
	  if(TEfficiency::CheckConsistency(*pnume[i],*pdeno[i]))
	    peff[i] = new TEfficiency (*pnume[i],*pdeno[i]);
	  else 
	    cout<<"inconsistent histograms for trigger efficiency in fct of pt"<<i<<endl;
	  ptTrigEff->cd();
	  peff[i]->Write(Form("ptMu_%d_%s",i, trig[i].c_str()));
	  //canp[i]->cd();
	  //peff[i]->Draw("alp");
	  tbp[i]= new TPaveText(0.15,0.9,0.5,0.99, "BRNDC");
	  tbp[i]-> AddText(Form("%s",trig[i].c_str()));
	  tbp[i]->SetBorderSize(1);
	  tbp[i]->SetFillColor(0);
	  //tbp[i]->Draw("same");
	  //canp[i]->SaveAs(Form("ptMu_%s.png",trig[i].c_str()));

	  etaeff[i] = new TEfficiency(Form("etaeff%d",i), Form("%s;#eta^{#mu+}; Efficiency",trig[i].c_str()), netab-1, etabins);
	  if(TEfficiency::CheckConsistency(*etanume[i],*etadeno[i]))
	    etaeff[i] = new TEfficiency (*etanume[i],*etadeno[i]);
	  else 
	    cout<<"inconsistent histograms for trigger efficiency in function of eta"<<i<<endl;
	  etaTrigEff->cd();
	  etaeff[i]->Write(Form("etaMu_%d_%s",i,trig[i].c_str()));
	  //cane[i]->cd();
	  //etaeff[i]->Draw("alp");
	  tbe[i]= new TPaveText(0.15,0.9,0.5,0.99, "BRNDC");
	  tbe[i]-> AddText(Form("%s",trig[i].c_str()));
	  //tbe[i]->AddText("");
	  tbe[i]->SetBorderSize(1);
	  tbe[i]->SetFillColor(0);
	  //tbe[i]->Draw("same");
	  //cane[i]->SaveAs(Form("etaMu_%s.png",trig[i].c_str()));

	  phieff[i] = new TEfficiency(Form("phieff%d",i), Form("%s; #phi^{#mu+}; Efficiency",trig[i].c_str()), nphib-1, phibins);
	  if(TEfficiency::CheckConsistency(*phinume[i],*phideno[i]))
	    phieff[i] = new TEfficiency (*phinume[i],*phideno[i]);
	  else 
	    cout<<"inconsistent histograms for trigger efficiency in function of phi"<<i<<endl;
	  phiTrigEff->cd();
	  phieff[i]->Write(Form("phiMu__%d_%s",i,trig[i].c_str()));
	  //canph[i]->cd();
	  //phieff[i]->Draw("alp");
	  tbph[i]= new TPaveText(0.15,0.9,0.5,0.99, "BRNDC");
	  tbph[i]-> AddText(Form("%s",trig[i].c_str()));
	  tbph[i]->SetBorderSize(1);
	  tbph[i]->SetFillColor(0);
	  //tbph[i]->Draw("same");
	  //canph[i]->SaveAs(Form("phiMu_%s.png",trig[i].c_str()));
	}



      gSystem->cd("../..");
      ptTrigEff->Close();
      etaTrigEff->Close();
      phiTrigEff->Close();
}




Bool_t myTree::isTriggerMatch (Int_t iReco, Int_t TriggerBit, Int_t MuNb) 
{
  Bool_t cond = true;

  cond = cond && ( (HLTriggers&((ULong64_t)pow(2, TriggerBit))) == ((ULong64_t)pow(2, TriggerBit)) ); 
  if (MuNb==2)
    cond = cond && ( (Reco_QQ_trig[iReco]&((ULong64_t)pow(2, TriggerBit))) == ((ULong64_t)pow(2, TriggerBit)) );
  if (MuNb==1)
    cond = cond &&  ( (Reco_mu_trig[iReco]&((ULong64_t)pow(2, TriggerBit))) == ((ULong64_t)pow(2, TriggerBit)) );
  return cond;
};

Bool_t myTree::isGlobalMuonInAccept2015 (TLorentzVector* Muon) 
  {
  return (fabs(Muon->Eta()) < 2.4 &&
          ((fabs(Muon->Eta()) < 1.2 && Muon->Pt() >= 3.5) ||
           (1.2 <= fabs(Muon->Eta()) && fabs(Muon->Eta()) < 2.1 && Muon->Pt() >= 5.77-1.89*fabs(Muon->Eta())) ||
           (2.1 <= fabs(Muon->Eta()) && Muon->Pt() >= 1.8)));
  };

Bool_t myTree::areMuonsInAcceptance2015 (Int_t iRecoQQ)
  {
    TLorentzVector *RecoQQmupl = (TLorentzVector*) Reco_QQ_mupl_4mom->At(iRecoQQ);
    TLorentzVector *RecoQQmumi = (TLorentzVector*) Reco_QQ_mumi_4mom->At(iRecoQQ);
    return ( isGlobalMuonInAccept2015(RecoQQmupl) && isGlobalMuonInAccept2015(RecoQQmumi) );
  };

Bool_t myTree::areGenMuonsInAcceptance2015 (Int_t iGenQQ)
  {
    TLorentzVector *GenQQmupl = (TLorentzVector*) Gen_QQ_mupl_4mom->At(iGenQQ);
    TLorentzVector *GenQQmumi = (TLorentzVector*) Gen_QQ_mumi_4mom->At(iGenQQ);
    return (isGlobalMuonInAccept2015(GenQQmupl) && isGlobalMuonInAccept2015(GenQQmumi));
  };  
  
Bool_t myTree::passSoftQualityCuts2015 (Int_t iReco, Int_t MuNb) 
  {
    Bool_t cond = true;
    if (MuNb==2)
      {
	cond = cond && (Reco_QQ_mumi_highPurity[iReco]);
	cond = cond && (Reco_QQ_mumi_isGoodMuon[iReco]==1);
	cond = cond && (Reco_QQ_mumi_nTrkWMea[iReco] > 5);
	cond = cond && (Reco_QQ_mumi_nPixWMea[iReco] > 0);
	cond = cond && (fabs(Reco_QQ_mumi_dxy[iReco]) < 0.3);
	cond = cond && (fabs(Reco_QQ_mumi_dz[iReco]) < 20.);
    
	cond = cond && (Reco_QQ_mupl_highPurity[iReco]);
	cond = cond && (Reco_QQ_mupl_isGoodMuon[iReco]==1);
	cond = cond && (Reco_QQ_mupl_nTrkWMea[iReco] > 5);
	cond = cond && (Reco_QQ_mupl_nPixWMea[iReco] > 0);
	cond = cond && (fabs(Reco_QQ_mupl_dxy[iReco]) < 0.3);
	cond = cond && (fabs(Reco_QQ_mupl_dz[iReco]) < 20.);    
	cond = cond && (Reco_QQ_VtxProb[iReco] > 0.01);
      }
    if (MuNb==1)
      {
	cond = cond && (Reco_mu_highPurity[iReco]);
	cond = cond && (Reco_mu_isGoodMuon[iReco]==1);
	cond = cond && (Reco_mu_nTrkWMea[iReco] > 5);
	cond = cond && (Reco_mu_nPixWMea[iReco] > 0);
	cond = cond && (fabs(Reco_mu_dxy[iReco]) < 0.3);
	cond = cond && (fabs(Reco_mu_dz[iReco]) < 20.);
      }
    return cond;
  };
Bool_t myTree::passTightQualityCuts2015 (Int_t iReco, Int_t MuNb) 
  {
    Bool_t cond = true;

    if (MuNb==1)
      {
	cond = cond && ((Reco_mu_SelectionType[iReco]&(ULong64_t)(pow(2,1))) == (ULong64_t) pow(2,1)); // 1---> global
	cond = cond && (Reco_mu_normChi2_global[iReco]<10);
	cond = cond && (Reco_mu_nMuValHits[iReco] >0);
	cond = cond && (Reco_mu_StationsMatched[iReco] >1);
	cond = cond && (Reco_mu_nPixValHits[iReco]>0);

	//cond = cond && (Reco_mu_isGoodMuon[iRecoMu]==1);
	cond = cond && (Reco_mu_nTrkWMea[iReco] > 5);/////
	cond = cond && (fabs(Reco_mu_dxy[iReco]) < 0.2); /////
	cond = cond && (fabs(Reco_mu_dz[iReco]) < 0.5); ////   
      }
    if (MuNb==2)
      {
	cond = cond && ((Reco_QQ_mupl_SelectionType[iReco]&(ULong64_t)(pow(2,1))) == (ULong64_t) pow(2,1)); // 1---> global
	cond = cond && (Reco_QQ_mupl_normChi2_global[iReco]<10);
	cond = cond && (Reco_QQ_mupl_nMuValHits[iReco] >0);
	cond = cond && (Reco_QQ_mupl_StationsMatched[iReco] >1);
	cond = cond && (Reco_QQ_mupl_nPixValHits[iReco]>0);
	//cond = cond && (Reco_QQ_mupl_isGoodMuon[iRecoMu]==1);
	cond = cond && (Reco_QQ_mupl_nTrkWMea[iReco] > 5);/////
	cond = cond && (fabs(Reco_QQ_mupl_dxy[iReco]) < 0.2); /////
	cond = cond && (fabs(Reco_QQ_mupl_dz[iReco]) < 0.5); ////

	cond = cond && ((Reco_QQ_mumi_SelectionType[iReco]&(ULong64_t)(pow(2,1))) == (ULong64_t) pow(2,1)); // 1---> global
	cond = cond && (Reco_QQ_mumi_normChi2_global[iReco]<10);
	cond = cond && (Reco_QQ_mumi_nMuValHits[iReco] >0);
	cond = cond && (Reco_QQ_mumi_StationsMatched[iReco] >1);
	cond = cond && (Reco_QQ_mumi_nPixValHits[iReco]>0);
	//cond = cond && (Reco_QQ_mumi_isGoodMuon[iRecoMu]==1);
	cond = cond && (Reco_QQ_mumi_nTrkWMea[iReco] > 5);/////
	cond = cond && (fabs(Reco_QQ_mumi_dxy[iReco]) < 0.2); /////
	cond = cond && (fabs(Reco_QQ_mumi_dz[iReco]) < 0.5); ////

   
      }
    return cond;
  };

Double_t myTree::deltaR(TLorentzVector* GenMuon, TLorentzVector* RecoMuon)
{
  double dEta = RecoMuon->Eta() - GenMuon->Eta();
  double dPhi = TVector2::Phi_mpi_pi(RecoMuon->Phi() - GenMuon->Phi());
  return ((double) TMath::Sqrt( (dEta*dEta) + (dPhi*dPhi) ) );
};
