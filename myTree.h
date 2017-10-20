//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct 20 12:49:24 2017 by ROOT version 6.02/13
// from TTree myTree/My TTree of dimuons
// found on file: /data_CMS/cms/diab/TrigEffMcSamples/Pythia8_JPsiGun_pp_2017pp502_Onia_20171017_merge.root
//////////////////////////////////////////////////////////

#ifndef myTree_h
#define myTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <iostream>

using namespace std;

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"

class myTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   int             nTree;

   // Declaration of leaf types
   UInt_t          eventNb;
   UInt_t          runNb;
   UInt_t          LS;
   Float_t         zVtx;
   Float_t         nPV;
   Int_t           Centrality;
   Int_t           nTrig;
   Int_t           trigPrescale[100];   //[nTrig]
   ULong64_t       HLTriggers;
   Int_t           Npix;
   Int_t           NpixelTracks;
   Int_t           Ntracks;
   Float_t         SumET_HF;
   Float_t         SumET_HFplus;
   Float_t         SumET_HFminus;
   Float_t         SumET_HFplusEta4;
   Float_t         SumET_HFminusEta4;
   Float_t         SumET_ET;
   Float_t         SumET_EE;
   Float_t         SumET_EB;
   Float_t         SumET_EEplus;
   Float_t         SumET_EEminus;
   Float_t         SumET_ZDC;
   Float_t         SumET_ZDCplus;
   Float_t         SumET_ZDCminus;
   Int_t           Reco_QQ_size;
   Int_t           Reco_QQ_type[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_sign[100];   //[Reco_QQ_size]
   TClonesArray    *Reco_QQ_4mom;
   TClonesArray    *Reco_QQ_mupl_4mom;
   TClonesArray    *Reco_QQ_mumi_4mom;
   ULong64_t       Reco_QQ_trig[100];   //[Reco_QQ_size]
   ULong64_t       Reco_QQ_mupl_trig[100];   //[Reco_QQ_size]
   ULong64_t       Reco_QQ_mumi_trig[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_isCowboy[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_ctau[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_ctauErr[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_ctau3D[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_ctauErr3D[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_ctauTrue[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_ctauTrue3D[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_VtxProb[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_dca[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_MassErr[100];   //[Reco_QQ_size]
   TClonesArray    *Reco_QQ_vtx;
   Int_t           Reco_QQ_Ntrk[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_SelectionType[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_SelectionType[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mupl_isGoodMuon[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mumi_isGoodMuon[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mupl_highPurity[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mumi_highPurity[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mupl_TrkMuArb[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mumi_TrkMuArb[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mupl_TMOneStaTight[100];   //[Reco_QQ_size]
   Bool_t          Reco_QQ_mumi_TMOneStaTight[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_nPixValHits[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_nPixValHits[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_nMuValHits[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_nMuValHits[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_nTrkHits[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_nTrkHits[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_normChi2_inner[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_normChi2_inner[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_normChi2_global[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_normChi2_global[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_nPixWMea[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_nPixWMea[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_nTrkWMea[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_nTrkWMea[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mupl_StationsMatched[100];   //[Reco_QQ_size]
   Int_t           Reco_QQ_mumi_StationsMatched[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_dxy[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_dxy[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_dxyErr[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_dxyErr[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_dz[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_dz[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_dzErr[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_dzErr[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_pt_inner[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_pt_inner[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_pt_global[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_pt_global[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_ptErr_inner[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_ptErr_inner[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mupl_ptErr_global[100];   //[Reco_QQ_size]
   Float_t         Reco_QQ_mumi_ptErr_global[100];   //[Reco_QQ_size]
   Int_t           Reco_mu_size;
   Int_t           Reco_mu_type[100];   //[Reco_mu_size]
   Int_t           Reco_mu_SelectionType[100];   //[Reco_mu_size]
   Int_t           Reco_mu_charge[100];   //[Reco_mu_size]
   TClonesArray    *Reco_mu_4mom;
   ULong64_t       Reco_mu_trig[100];   //[Reco_mu_size]
   Bool_t          Reco_mu_isGoodMuon[100];   //[Reco_mu_size]
   Bool_t          Reco_mu_highPurity[100];   //[Reco_mu_size]
   Bool_t          Reco_mu_TrkMuArb[100];   //[Reco_mu_size]
   Bool_t          Reco_mu_TMOneStaTight[100];   //[Reco_mu_size]
   Int_t           Reco_mu_nPixValHits[100];   //[Reco_mu_size]
   Int_t           Reco_mu_nMuValHits[100];   //[Reco_mu_size]
   Int_t           Reco_mu_nTrkHits[100];   //[Reco_mu_size]
   Float_t         Reco_mu_normChi2_inner[100];   //[Reco_mu_size]
   Float_t         Reco_mu_normChi2_global[100];   //[Reco_mu_size]
   Int_t           Reco_mu_nPixWMea[100];   //[Reco_mu_size]
   Int_t           Reco_mu_nTrkWMea[100];   //[Reco_mu_size]
   Int_t           Reco_mu_StationsMatched[100];   //[Reco_mu_size]
   Float_t         Reco_mu_dxy[100];   //[Reco_mu_size]
   Float_t         Reco_mu_dxyErr[100];   //[Reco_mu_size]
   Float_t         Reco_mu_dz[100];   //[Reco_mu_size]
   Float_t         Reco_mu_dzErr[100];   //[Reco_mu_size]
   Float_t         Reco_mu_pt_inner[100];   //[Reco_mu_size]
   Float_t         Reco_mu_pt_global[100];   //[Reco_mu_size]
   Float_t         Reco_mu_ptErr_inner[100];   //[Reco_mu_size]
   Float_t         Reco_mu_ptErr_global[100];   //[Reco_mu_size]
   Int_t           Gen_QQ_size;
   Int_t           Gen_QQ_type[100];   //[Gen_QQ_size]
   TClonesArray    *Gen_QQ_4mom;
   Int_t           Gen_QQ_momId[100];   //[Gen_QQ_size]
   Float_t         Gen_QQ_ctau[100];   //[Gen_QQ_size]
   Float_t         Gen_QQ_ctau3D[100];   //[Gen_QQ_size]
   TClonesArray    *Gen_QQ_mupl_4mom;
   TClonesArray    *Gen_QQ_mumi_4mom;
   Int_t           Gen_mu_size;
   Int_t           Gen_mu_type[100];   //[Gen_mu_size]
   Int_t           Gen_mu_charge[100];   //[Gen_mu_size]
   TClonesArray    *Gen_mu_4mom;

   // List of branches
   TBranch        *b_eventNb;   //!
   TBranch        *b_runNb;   //!
   TBranch        *b_LS;   //!
   TBranch        *b_zVtx;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_Centrality;   //!
   TBranch        *b_nTrig;   //!
   TBranch        *b_trigPrescale;   //!
   TBranch        *b_HLTriggers;   //!
   TBranch        *b_Npix;   //!
   TBranch        *b_NpixelTracks;   //!
   TBranch        *b_Ntracks;   //!
   TBranch        *b_SumET_HF;   //!
   TBranch        *b_SumET_HFplus;   //!
   TBranch        *b_SumET_HFminus;   //!
   TBranch        *b_SumET_HFplusEta4;   //!
   TBranch        *b_SumET_HFminusEta4;   //!
   TBranch        *b_SumET_ET;   //!
   TBranch        *b_SumET_EE;   //!
   TBranch        *b_SumET_EB;   //!
   TBranch        *b_SumET_EEplus;   //!
   TBranch        *b_SumET_EEminus;   //!
   TBranch        *b_SumET_ZDC;   //!
   TBranch        *b_SumET_ZDCplus;   //!
   TBranch        *b_SumET_ZDCminus;   //!
   TBranch        *b_Reco_QQ_size;   //!
   TBranch        *b_Reco_QQ_type;   //!
   TBranch        *b_Reco_QQ_sign;   //!
   TBranch        *b_Reco_QQ_4mom;   //!
   TBranch        *b_Reco_QQ_mupl_4mom;   //!
   TBranch        *b_Reco_QQ_mumi_4mom;   //!
   TBranch        *b_Reco_QQ_trig;   //!
   TBranch        *b_Reco_QQ_mupl_trig;   //!
   TBranch        *b_Reco_QQ_mumi_trig;   //!
   TBranch        *b_Reco_QQ_isCowboy;   //!
   TBranch        *b_Reco_QQ_ctau;   //!
   TBranch        *b_Reco_QQ_ctauErr;   //!
   TBranch        *b_Reco_QQ_ctau3D;   //!
   TBranch        *b_Reco_QQ_ctauErr3D;   //!
   TBranch        *b_Reco_QQ_ctauTrue;   //!
   TBranch        *b_Reco_QQ_ctauTrue3D;   //!
   TBranch        *b_Reco_QQ_VtxProb;   //!
   TBranch        *b_Reco_QQ_dca;   //!
   TBranch        *b_Reco_QQ_MassErr;   //!
   TBranch        *b_Reco_QQ_vtx;   //!
   TBranch        *b_Reco_QQ_Ntrk;   //!
   TBranch        *b_Reco_QQ_mupl_SelectionType;   //!
   TBranch        *b_Reco_QQ_mumi_SelectionType;   //!
   TBranch        *b_Reco_QQ_mupl_isGoodMuon;   //!
   TBranch        *b_Reco_QQ_mumi_isGoodMuon;   //!
   TBranch        *b_Reco_QQ_mupl_highPurity;   //!
   TBranch        *b_Reco_QQ_mumi_highPurity;   //!
   TBranch        *b_Reco_QQ_mupl_TrkMuArb;   //!
   TBranch        *b_Reco_QQ_mumi_TrkMuArb;   //!
   TBranch        *b_Reco_QQ_mupl_TMOneStaTight;   //!
   TBranch        *b_Reco_QQ_mumi_TMOneStaTight;   //!
   TBranch        *b_Reco_QQ_mupl_nPixValHits;   //!
   TBranch        *b_Reco_QQ_mumi_nPixValHits;   //!
   TBranch        *b_Reco_QQ_mupl_nMuValHits;   //!
   TBranch        *b_Reco_QQ_mumi_nMuValHits;   //!
   TBranch        *b_Reco_QQ_mupl_nTrkHits;   //!
   TBranch        *b_Reco_QQ_mumi_nTrkHits;   //!
   TBranch        *b_Reco_QQ_mupl_normChi2_inner;   //!
   TBranch        *b_Reco_QQ_mumi_normChi2_inner;   //!
   TBranch        *b_Reco_QQ_mupl_normChi2_global;   //!
   TBranch        *b_Reco_QQ_mumi_normChi2_global;   //!
   TBranch        *b_Reco_QQ_mupl_nPixWMea;   //!
   TBranch        *b_Reco_QQ_mumi_nPixWMea;   //!
   TBranch        *b_Reco_QQ_mupl_nTrkWMea;   //!
   TBranch        *b_Reco_QQ_mumi_nTrkWMea;   //!
   TBranch        *b_Reco_QQ_mupl_StationsMatched;   //!
   TBranch        *b_Reco_QQ_mumi_StationsMatched;   //!
   TBranch        *b_Reco_QQ_mupl_dxy;   //!
   TBranch        *b_Reco_QQ_mumi_dxy;   //!
   TBranch        *b_Reco_QQ_mupl_dxyErr;   //!
   TBranch        *b_Reco_QQ_mumi_dxyErr;   //!
   TBranch        *b_Reco_QQ_mupl_dz;   //!
   TBranch        *b_Reco_QQ_mumi_dz;   //!
   TBranch        *b_Reco_QQ_mupl_dzErr;   //!
   TBranch        *b_Reco_QQ_mumi_dzErr;   //!
   TBranch        *b_Reco_QQ_mupl_pt_inner;   //!
   TBranch        *b_Reco_QQ_mumi_pt_inner;   //!
   TBranch        *b_Reco_QQ_mupl_pt_global;   //!
   TBranch        *b_Reco_QQ_mumi_pt_global;   //!
   TBranch        *b_Reco_QQ_mupl_ptErr_inner;   //!
   TBranch        *b_Reco_QQ_mumi_ptErr_inner;   //!
   TBranch        *b_Reco_QQ_mupl_ptErr_global;   //!
   TBranch        *b_Reco_QQ_mumi_ptErr_global;   //!
   TBranch        *b_Reco_mu_size;   //!
   TBranch        *b_Reco_mu_type;   //!
   TBranch        *b_Reco_mu_SelectionType;   //!
   TBranch        *b_Reco_mu_charge;   //!
   TBranch        *b_Reco_mu_4mom;   //!
   TBranch        *b_Reco_mu_trig;   //!
   TBranch        *b_Reco_mu_isGoodMuon;   //!
   TBranch        *b_Reco_mu_highPurity;   //!
   TBranch        *b_Reco_mu_TrkMuArb;   //!
   TBranch        *b_Reco_mu_TMOneStaTight;   //!
   TBranch        *b_Reco_mu_nPixValHits;   //!
   TBranch        *b_Reco_mu_nMuValHits;   //!
   TBranch        *b_Reco_mu_nTrkHits;   //!
   TBranch        *b_Reco_mu_normChi2_inner;   //!
   TBranch        *b_Reco_mu_normChi2_global;   //!
   TBranch        *b_Reco_mu_nPixWMea;   //!
   TBranch        *b_Reco_mu_nTrkWMea;   //!
   TBranch        *b_Reco_mu_StationsMatched;   //!
   TBranch        *b_Reco_mu_dxy;   //!
   TBranch        *b_Reco_mu_dxyErr;   //!
   TBranch        *b_Reco_mu_dz;   //!
   TBranch        *b_Reco_mu_dzErr;   //!
   TBranch        *b_Reco_mu_pt_inner;   //!
   TBranch        *b_Reco_mu_pt_global;   //!
   TBranch        *b_Reco_mu_ptErr_inner;   //!
   TBranch        *b_Reco_mu_ptErr_global;   //!
   TBranch        *b_Gen_QQ_size;   //!
   TBranch        *b_Gen_QQ_type;   //!
   TBranch        *b_Gen_QQ_4mom;   //!
   TBranch        *b_Gen_QQ_momId;   //!
   TBranch        *b_Gen_QQ_ctau;   //!
   TBranch        *b_Gen_QQ_ctau3D;   //!
   TBranch        *b_Gen_QQ_mupl_4mom;   //!
   TBranch        *b_Gen_QQ_mumi_4mom;   //!
   TBranch        *b_Gen_mu_size;   //!
   TBranch        *b_Gen_mu_type;   //!
   TBranch        *b_Gen_mu_charge;   //!
   TBranch        *b_Gen_mu_4mom;   //!




   Int_t           NL1EGamma;
   Float_t         L1Stage2EGammaEt[10];   //[NL1Stage2EGamma]
   Float_t         L1Stage2EGammaE[10];   //[NL1Stage2EGamma]
   Float_t         L1Stage2EGammaEta[10];   //[NL1Stage2EGamma]
   Float_t         L1Stage2EGammaPhi[10];   //[NL1Stage2EGamma]
   Int_t           L1Stage2EGammaIsol[10];   //[NL1Stage2EGamma]
   Int_t           L1Stage2EGammaBx[10];   //[NL1Stage2EGamma]
   Int_t           NL1Stage2Muon;
   Float_t         L1Stage2MuonPt[50];   //[NL1Stage2Muon]
   Float_t         L1Stage2MuonE[50];   //[NL1Stage2Muon]
   Float_t         L1Stage2MuonEta[50];   //[NL1Stage2Muon]
   Float_t         L1Stage2MuonPhi[50];   //[NL1Stage2Muon]
   Float_t         L1Stage2MuonEtaAtVtx[50];   //[NL1Stage2Muon]
   Float_t         L1Stage2MuonPhiAtVtx[50];   //[NL1Stage2Muon]
   Int_t           L1Stage2MuonIsol[50];   //[NL1Stage2Muon]
   Int_t           L1Stage2MuonQual[50];   //[NL1Stage2Muon]
   Int_t           L1Stage2MuonChg[50];   //[NL1Stage2Muon]
   Int_t           L1Stage2MuontfMuonIndex[50];   //[NL1Stage2Muon]
   Int_t           L1Stage2MuontfRegion[50];   //[NL1Stage2Muon]
   Int_t           L1Stage2MuonBx[50];   //[NL1Stage2Muon]
   Int_t           NL1Stage2DiMuon;
   Float_t         L1Stage2DiMuonPt[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonRap[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonPhi[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonInvMass[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuondR[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonPtAtVtx[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonRapAtVtx[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonPhiAtVtx[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuonInvMassAtVtx[100];   //[NL1Stage2DiMuon]
   Float_t         L1Stage2DiMuondRAtVtx[100];   //[NL1Stage2DiMuon]
   Int_t           L1Stage2DiMuonChg[100];   //[NL1Stage2DiMuon]
   Int_t           L1Stage2DiMuonIdx1[100];   //[NL1Stage2DiMuon]
   Int_t           L1Stage2DiMuonIdx2[100];   //[NL1Stage2DiMuon]
   Int_t           NL1Stage2Jet;
   Float_t         L1Stage2JetEt[20];   //[NL1Stage2Jet]
   Float_t         L1Stage2JetE[20];   //[NL1Stage2Jet]
   Float_t         L1Stage2JetEta[20];   //[NL1Stage2Jet]
   Float_t         L1Stage2JetPhi[20];   //[NL1Stage2Jet]
   Int_t           L1Stage2JetBx[20];   //[NL1Stage2Jet]
   Int_t           NL1Stage2Tau;
   Float_t         L1Stage2TauEt[40];   //[NL1Stage2Tau]
   Float_t         L1Stage2TauE[40];   //[NL1Stage2Tau]
   Float_t         L1Stage2TauEta[40];   //[NL1Stage2Tau]
   Float_t         L1Stage2TauPhi[40];   //[NL1Stage2Tau]
   Int_t           L1Stage2TauBx[40];   //[NL1Stage2Tau]
   Int_t           NL1Stage2EtSum;
   Float_t         L1Stage2EtSumEt[120];   //[NL1Stage2EtSum]
   Float_t         L1Stage2EtSumPhi[120];   //[NL1Stage2EtSum]
   Int_t           L1Stage2EtSumHwEt[120];   //[NL1Stage2EtSum]
   Int_t           L1Stage2EtSumHwPhi[120];   //[NL1Stage2EtSum]
   Int_t           L1Stage2EtSumType[120];   //[NL1Stage2EtSum]
   Int_t           L1Stage2EtSumBx[120];   //[NL1Stage2EtSum]
   ULong64_t       Event;
   Int_t           LumiBlock;
   Int_t           Run;
   Int_t           Bx;
   Int_t           Orbit;
   Double_t        AvgInstDelLumi;
   Int_t           HLTriggerFirstPath;
   Int_t           HLTriggerFirstPath_Prescl;
   Int_t           HLT_HIL1DoubleMuOpen_v1;
   Int_t           HLT_HIL1DoubleMuOpen_v1_Prescl;
   Int_t           HLT_HIL1DoubleMuOpen_OS_v1;
   Int_t           HLT_HIL1DoubleMuOpen_OS_v1_Prescl;
   Int_t           HLT_HIL1DoubleMuOpen_SS_v1;
   Int_t           HLT_HIL1DoubleMuOpen_SS_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_v1;
   Int_t           HLT_HIL1DoubleMu0_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu0_HighQ_v1;
   Int_t           HLT_HIL1DoubleMu0_HighQ_v1_Prescl;
   Int_t           HLT_HIL1DoubleMu10_v1;
   Int_t           HLT_HIL1DoubleMu10_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu0_v1;
   Int_t           HLT_HIL2DoubleMu0_v1_Prescl;
   Int_t           HLT_HIL2DoubleMu10_v1;
   Int_t           HLT_HIL2DoubleMu10_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu0_v1;
   Int_t           HLT_HIL3DoubleMu0_v1_Prescl;
   Int_t           HLT_HIL3DoubleMu10_v1;
   Int_t           HLT_HIL3DoubleMu10_v1_Prescl;
   Int_t           HLT_HIL1Mu3_v1;
   Int_t           HLT_HIL1Mu3_v1_Prescl;
   Int_t           HLT_HIL1Mu5_v1;
   Int_t           HLT_HIL1Mu5_v1_Prescl;
   Int_t           HLT_HIL1Mu7_v1;
   Int_t           HLT_HIL1Mu7_v1_Prescl;
   Int_t           HLT_HIL1Mu12_v1;
   Int_t           HLT_HIL1Mu12_v1_Prescl;
   Int_t           HLT_HIL1Mu16_v1;
   Int_t           HLT_HIL1Mu16_v1_Prescl;
   Int_t           HLT_HIL2Mu3_v1;
   Int_t           HLT_HIL2Mu3_v1_Prescl;
   Int_t           HLT_HIL2Mu5_v1;
   Int_t           HLT_HIL2Mu5_v1_Prescl;
   Int_t           HLT_HIL2Mu7_v1;
   Int_t           HLT_HIL2Mu7_v1_Prescl;
   Int_t           HLT_HIL2Mu12_v1;
   Int_t           HLT_HIL2Mu12_v1_Prescl;
   Int_t           HLT_HIL2Mu15_v1;
   Int_t           HLT_HIL2Mu15_v1_Prescl;
   Int_t           HLT_HIL2Mu20_v1;
   Int_t           HLT_HIL2Mu20_v1_Prescl;
   Int_t           HLT_HIL3Mu3_v1;
   Int_t           HLT_HIL3Mu3_v1_Prescl;
   Int_t           HLT_HIL3Mu5_v1;
   Int_t           HLT_HIL3Mu5_v1_Prescl;
   Int_t           HLT_HIL3Mu7_v1;
   Int_t           HLT_HIL3Mu7_v1_Prescl;
   Int_t           HLT_HIL3Mu12_v1;
   Int_t           HLT_HIL3Mu12_v1_Prescl;
   Int_t           HLT_HIL3Mu15_v1;
   Int_t           HLT_HIL3Mu15_v1_Prescl;
   Int_t           HLT_HIL3Mu20_v1;
   Int_t           HLT_HIL3Mu20_v1_Prescl;
   Int_t           HLTriggerFinalPath;
   Int_t           HLTriggerFinalPath_Prescl;
   Int_t           L1_DoubleMu0_Final;
   Int_t           L1_DoubleMu0_Prescl;
   Int_t           L1_DoubleMu0_BptxAND_Final;
   Int_t           L1_DoubleMu0_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_MassGT1_BptxAND_Final;
   Int_t           L1_DoubleMu0_MassGT1_BptxAND_Prescl;
   Int_t           L1_DoubleMu10_BptxAND_Final;
   Int_t           L1_DoubleMu10_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_Final;
   Int_t           L1_DoubleMuOpen_Prescl;
   Int_t           L1_DoubleMuOpen_BptxAND_Final;
   Int_t           L1_DoubleMuOpen_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_MassGT1_BptxAND_Final;
   Int_t           L1_DoubleMuOpen_MassGT1_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_OS_BptxAND_Final;
   Int_t           L1_DoubleMuOpen_OS_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_SS_BptxAND_Final;
   Int_t           L1_DoubleMuOpen_SS_BptxAND_Prescl;
   Int_t           L1_SingleMu0_Final;
   Int_t           L1_SingleMu0_Prescl;
   Int_t           L1_SingleMu0_BptxAND_Final;
   Int_t           L1_SingleMu0_BptxAND_Prescl;
   Int_t           L1_SingleMu10_BptxAND_Final;
   Int_t           L1_SingleMu10_BptxAND_Prescl;
   Int_t           L1_SingleMu12_BptxAND_Final;
   Int_t           L1_SingleMu12_BptxAND_Prescl;
   Int_t           L1_SingleMu16_BptxAND_Final;
   Int_t           L1_SingleMu16_BptxAND_Prescl;
   Int_t           L1_SingleMu3_Final;
   Int_t           L1_SingleMu3_Prescl;
   Int_t           L1_SingleMu3_BptxAND_Final;
   Int_t           L1_SingleMu3_BptxAND_Prescl;
   Int_t           L1_SingleMu5_Final;
   Int_t           L1_SingleMu5_Prescl;
   Int_t           L1_SingleMu5_BptxAND_Final;
   Int_t           L1_SingleMu5_BptxAND_Prescl;
   Int_t           L1_SingleMu7_Final;
   Int_t           L1_SingleMu7_Prescl;
   Int_t           L1_SingleMu7_BptxAND_Final;
   Int_t           L1_SingleMu7_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_Final;
   Int_t           L1_SingleMuOpen_Prescl;
   Int_t           L1_SingleMuOpen_BptxAND_Final;
   Int_t           L1_SingleMuOpen_BptxAND_Prescl;

   // List of branches
   TBranch        *b_NL1Stage2EGamma;   //!
   TBranch        *b_L1Stage2EGammaEt;   //!
   TBranch        *b_L1Stage2EGammaE;   //!
   TBranch        *b_L1Stage2EGammaEta;   //!
   TBranch        *b_L1Stage2EGammaPhi;   //!
   TBranch        *b_L1Stage2EGammaIsol;   //!
   TBranch        *b_L1Stage2EGammaBx;   //!
   TBranch        *b_NL1Stage2Muon;   //!
   TBranch        *b_L1Stage2MuonPt;   //!
   TBranch        *b_L1Stage2MuonE;   //!
   TBranch        *b_L1Stage2MuonEta;   //!
   TBranch        *b_L1Stage2MuonPhi;   //!
   TBranch        *b_L1Stage2MuonEtaAtVtx;   //!
   TBranch        *b_L1Stage2MuonPhiAtVtx;   //!
   TBranch        *b_L1Stage2MuonIsol;   //!
   TBranch        *b_L1Stage2MuonQual;   //!
   TBranch        *b_L1Stage2MuonChg;   //!
   TBranch        *b_L1Stage2MuontfMuonIndex;   //!
   TBranch        *b_L1Stage2MuontfRegion;   //!
   TBranch        *b_L1Stage2MuonBx;   //!
   TBranch        *b_NL1Stage2DiMuon;   //!
   TBranch        *b_L1Stage2DiMuonPt;   //!
   TBranch        *b_L1Stage2DiMuonRap;   //!
   TBranch        *b_L1Stage2DiMuonPhi;   //!
   TBranch        *b_L1Stage2DiMuonInvMass;   //!
   TBranch        *b_L1Stage2DiMuondR;   //!
   TBranch        *b_L1Stage2DiMuonPtAtVtx;   //!
   TBranch        *b_L1Stage2DiMuonRapAtVtx;   //!
   TBranch        *b_L1Stage2DiMuonPhiAtVtx;   //!
   TBranch        *b_L1Stage2DiMuonInvMassAtVtx;   //!
   TBranch        *b_L1Stage2DiMuondRAtVtx;   //!
   TBranch        *b_L1Stage2DiMuonChg;   //!
   TBranch        *b_L1Stage2DiMuonIdx1;   //!
   TBranch        *b_L1Stage2DiMuonIdx2;   //!
   TBranch        *b_NL1Stage2Jet;   //!
   TBranch        *b_L1Stage2JetEt;   //!
   TBranch        *b_L1Stage2JetE;   //!
   TBranch        *b_L1Stage2JetEta;   //!
   TBranch        *b_L1Stage2JetPhi;   //!
   TBranch        *b_L1Stage2JetBx;   //!
   TBranch        *b_NL1Stage2Tau;   //!
   TBranch        *b_L1Stage2TauEt;   //!
   TBranch        *b_L1Stage2TauE;   //!
   TBranch        *b_L1Stage2TauEta;   //!
   TBranch        *b_L1Stage2TauPhi;   //!
   TBranch        *b_L1Stage2TauBx;   //!
   TBranch        *b_NL1Stage2EtSum;   //!
   TBranch        *b_L1Stage2EtSumEt;   //!
   TBranch        *b_L1Stage2EtSumPhi;   //!
   TBranch        *b_L1Stage2EtSumHwEt;   //!
   TBranch        *b_L1Stage2EtSumHwPhi;   //!
   TBranch        *b_L1Stage2EtSumType;   //!
   TBranch        *b_L1Stage2EtSumBx;   //!
   TBranch        *b_Event;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_Orbit;   //!
   TBranch        *b_AvgInstDelLumi;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLTriggerFirstPath_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMuOpen_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMuOpen_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMuOpen_OS_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMuOpen_OS_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMuOpen_SS_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMuOpen_SS_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_HighQ_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu0_HighQ_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1DoubleMu10_v1;   //!
   TBranch        *b_HLT_HIL1DoubleMu10_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2DoubleMu10_v1;   //!
   TBranch        *b_HLT_HIL2DoubleMu10_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu0_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3DoubleMu10_v1;   //!
   TBranch        *b_HLT_HIL3DoubleMu10_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Mu3_v1;   //!
   TBranch        *b_HLT_HIL1Mu3_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Mu5_v1;   //!
   TBranch        *b_HLT_HIL1Mu5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Mu7_v1;   //!
   TBranch        *b_HLT_HIL1Mu7_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Mu12_v1;   //!
   TBranch        *b_HLT_HIL1Mu12_v1_Prescl;   //!
   TBranch        *b_HLT_HIL1Mu16_v1;   //!
   TBranch        *b_HLT_HIL1Mu16_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu3_v1;   //!
   TBranch        *b_HLT_HIL2Mu3_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu5_v1;   //!
   TBranch        *b_HLT_HIL2Mu5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu7_v1;   //!
   TBranch        *b_HLT_HIL2Mu7_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu12_v1;   //!
   TBranch        *b_HLT_HIL2Mu12_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu15_v1;   //!
   TBranch        *b_HLT_HIL2Mu15_v1_Prescl;   //!
   TBranch        *b_HLT_HIL2Mu20_v1;   //!
   TBranch        *b_HLT_HIL2Mu20_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3_v1;   //!
   TBranch        *b_HLT_HIL3Mu3_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5_v1;   //!
   TBranch        *b_HLT_HIL3Mu5_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu7_v1;   //!
   TBranch        *b_HLT_HIL3Mu7_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu12_v1;   //!
   TBranch        *b_HLT_HIL3Mu12_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu15_v1;   //!
   TBranch        *b_HLT_HIL3Mu15_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu20_v1;   //!
   TBranch        *b_HLT_HIL3Mu20_v1_Prescl;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_HLTriggerFinalPath_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_Final;   //!
   TBranch        *b_L1_DoubleMu0_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMu0_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_MassGT1_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMu0_MassGT1_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu10_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMu10_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_Final;   //!
   TBranch        *b_L1_DoubleMuOpen_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_MassGT1_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMuOpen_MassGT1_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_OS_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMuOpen_OS_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_SS_BptxAND_Final;   //!
   TBranch        *b_L1_DoubleMuOpen_SS_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu0_Final;   //!
   TBranch        *b_L1_SingleMu0_Prescl;   //!
   TBranch        *b_L1_SingleMu0_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu10_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu10_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu12_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu16_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_Final;   //!
   TBranch        *b_L1_SingleMu3_Prescl;   //!
   TBranch        *b_L1_SingleMu3_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu3_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu5_Final;   //!
   TBranch        *b_L1_SingleMu5_Prescl;   //!
   TBranch        *b_L1_SingleMu5_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu5_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu7_Final;   //!
   TBranch        *b_L1_SingleMu7_Prescl;   //!
   TBranch        *b_L1_SingleMu7_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMu7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_Final;   //!
   TBranch        *b_L1_SingleMuOpen_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_BptxAND_Final;   //!
   TBranch        *b_L1_SingleMuOpen_BptxAND_Prescl;   //!




   myTree(int nTr = 1);
   virtual ~myTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   //virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   virtual void     diMuTrigEff();
   virtual void     singleMuTrigEff();

   virtual Bool_t   isTriggerMatch (Int_t iReco, Int_t TriggerBit, Int_t MuNb);
   virtual Bool_t   isGlobalMuonInAccept2015 (TLorentzVector* Muon);
   virtual Bool_t   areMuonsInAcceptance2015 (Int_t iRecoQQ);
   virtual Bool_t   areGenMuonsInAcceptance2015 (Int_t iGenQQ);
   virtual Bool_t   passSoftQualityCuts2015 (Int_t iReco, Int_t MuNb);
   virtual Bool_t   passTightQualityCuts2015 (Int_t iReco, Int_t MuNb);
   virtual Double_t deltaR (TLorentzVector* GenMuon, TLorentzVector* RecoMuon);
};

#endif

#ifdef myTree_cxx
myTree::myTree(int nTr = 1) : fChain(0) 
{
  TFile* f(0x0);
  if (nTr ==0 || nTr>5)
    nTr=1;
  nTree = nTr;
  if (nTree == 1)
    f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_JPsiGun_pp_2017pp502_Onia_20171017_merge.root");
  else if (nTree ==2)
    f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_MuGun_pp_2017pp502_Onia_20171017_merge.root");
  else if (nTree ==3)
    f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_NonPrJPsi_pp_2017pp502_Onia_20171017_merge.root");
  else if (nTree ==4)
    f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_PrJPsi_pp_2017pp502_Onia_20171017_merge.root");
  else if (nTree ==5)
    f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_Zm10m10_pp_2017pp502_Onia_20171017_merge.root");

  if (!f || !f->IsOpen()) 
    {
      if (nTree == 1)
	f = new TFile ("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_JPsiGun_pp_2017pp502_Onia_20171017_merge.root");
      else if (nTree ==2)
	f = new TFile ("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_MuGun_pp_2017pp502_Onia_20171017_merge.root");
      else if (nTree ==3)
	f = new TFile ("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_NonPrJPsi_pp_2017pp502_Onia_20171017_merge.root");
      else if (nTree ==4)
	f = new TFile("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_PrJPsi_pp_2017pp502_Onia_20171017_merge.root");
      else if (nTree ==5)
	f = new TFile ("/data_CMS/cms/diab/TrigEffMcSamples/Pythia8_Zm10m10_pp_2017pp502_Onia_20171017_merge.root");
    }

  if (nTree == 1)
    cout<<endl<<"-----JPsi Gun-----"<<endl;
  else if (nTree == 2)
    cout<<endl<<"-----Mu Gun-----"<<endl;
  else if (nTree == 3)
    cout<<endl<<"-----NonPr JPsi-----"<<endl;
  else if (nTree == 4)
    cout<<endl<<"-----Pr JPsi-----"<<endl;
  else if (nTree == 5)
    cout<<endl<<"-----Z-----"<<endl;

  TTree * tree (0x0);
  TTree *hlttree(0x0);

  TDirectory * dir = (TDirectory*)f->Get("hionia");
  dir->GetObject("myTree",tree);
  if(!tree)
	cout <<"error in the onia tree"<<endl;
  TDirectory * dirhlt = (TDirectory*)f->Get("hltbitanalysis");
  dirhlt->GetObject("HltTree",hlttree);
  if (!hlttree)
    cout <<"error in the HLT tree"<<endl;

  tree -> AddFriend(hlttree);

   Init(tree);
}

myTree::~myTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t myTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t myTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void myTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Reco_QQ_4mom = 0;
   Reco_QQ_mupl_4mom = 0;
   Reco_QQ_mumi_4mom = 0;
   Reco_QQ_vtx = 0;
   Reco_mu_4mom = 0;
   Gen_QQ_4mom = 0;
   Gen_QQ_mupl_4mom = 0;
   Gen_QQ_mumi_4mom = 0;
   Gen_mu_4mom = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("eventNb", &eventNb, &b_eventNb);
   fChain->SetBranchAddress("runNb", &runNb, &b_runNb);
   fChain->SetBranchAddress("LS", &LS, &b_LS);
   fChain->SetBranchAddress("zVtx", &zVtx, &b_zVtx);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("Centrality", &Centrality, &b_Centrality);
   fChain->SetBranchAddress("nTrig", &nTrig, &b_nTrig);
   fChain->SetBranchAddress("trigPrescale", trigPrescale, &b_trigPrescale);
   fChain->SetBranchAddress("HLTriggers", &HLTriggers, &b_HLTriggers);
   fChain->SetBranchAddress("Npix", &Npix, &b_Npix);
   fChain->SetBranchAddress("NpixelTracks", &NpixelTracks, &b_NpixelTracks);
   fChain->SetBranchAddress("Ntracks", &Ntracks, &b_Ntracks);
   fChain->SetBranchAddress("SumET_HF", &SumET_HF, &b_SumET_HF);
   fChain->SetBranchAddress("SumET_HFplus", &SumET_HFplus, &b_SumET_HFplus);
   fChain->SetBranchAddress("SumET_HFminus", &SumET_HFminus, &b_SumET_HFminus);
   fChain->SetBranchAddress("SumET_HFplusEta4", &SumET_HFplusEta4, &b_SumET_HFplusEta4);
   fChain->SetBranchAddress("SumET_HFminusEta4", &SumET_HFminusEta4, &b_SumET_HFminusEta4);
   fChain->SetBranchAddress("SumET_ET", &SumET_ET, &b_SumET_ET);
   fChain->SetBranchAddress("SumET_EE", &SumET_EE, &b_SumET_EE);
   fChain->SetBranchAddress("SumET_EB", &SumET_EB, &b_SumET_EB);
   fChain->SetBranchAddress("SumET_EEplus", &SumET_EEplus, &b_SumET_EEplus);
   fChain->SetBranchAddress("SumET_EEminus", &SumET_EEminus, &b_SumET_EEminus);
   fChain->SetBranchAddress("SumET_ZDC", &SumET_ZDC, &b_SumET_ZDC);
   fChain->SetBranchAddress("SumET_ZDCplus", &SumET_ZDCplus, &b_SumET_ZDCplus);
   fChain->SetBranchAddress("SumET_ZDCminus", &SumET_ZDCminus, &b_SumET_ZDCminus);
   fChain->SetBranchAddress("Reco_QQ_size", &Reco_QQ_size, &b_Reco_QQ_size);
   fChain->SetBranchAddress("Reco_QQ_type", Reco_QQ_type, &b_Reco_QQ_type);
   fChain->SetBranchAddress("Reco_QQ_sign", Reco_QQ_sign, &b_Reco_QQ_sign);
   fChain->SetBranchAddress("Reco_QQ_4mom", &Reco_QQ_4mom, &b_Reco_QQ_4mom);
   fChain->SetBranchAddress("Reco_QQ_mupl_4mom", &Reco_QQ_mupl_4mom, &b_Reco_QQ_mupl_4mom);
   fChain->SetBranchAddress("Reco_QQ_mumi_4mom", &Reco_QQ_mumi_4mom, &b_Reco_QQ_mumi_4mom);
   fChain->SetBranchAddress("Reco_QQ_trig", Reco_QQ_trig, &b_Reco_QQ_trig);
   fChain->SetBranchAddress("Reco_QQ_mupl_trig", Reco_QQ_mupl_trig, &b_Reco_QQ_mupl_trig);
   fChain->SetBranchAddress("Reco_QQ_mumi_trig", Reco_QQ_mumi_trig, &b_Reco_QQ_mumi_trig);
   fChain->SetBranchAddress("Reco_QQ_isCowboy", Reco_QQ_isCowboy, &b_Reco_QQ_isCowboy);
   fChain->SetBranchAddress("Reco_QQ_ctau", Reco_QQ_ctau, &b_Reco_QQ_ctau);
   fChain->SetBranchAddress("Reco_QQ_ctauErr", Reco_QQ_ctauErr, &b_Reco_QQ_ctauErr);
   fChain->SetBranchAddress("Reco_QQ_ctau3D", Reco_QQ_ctau3D, &b_Reco_QQ_ctau3D);
   fChain->SetBranchAddress("Reco_QQ_ctauErr3D", Reco_QQ_ctauErr3D, &b_Reco_QQ_ctauErr3D);
   fChain->SetBranchAddress("Reco_QQ_ctauTrue", Reco_QQ_ctauTrue, &b_Reco_QQ_ctauTrue);
   fChain->SetBranchAddress("Reco_QQ_ctauTrue3D", Reco_QQ_ctauTrue3D, &b_Reco_QQ_ctauTrue3D);
   fChain->SetBranchAddress("Reco_QQ_VtxProb", Reco_QQ_VtxProb, &b_Reco_QQ_VtxProb);
   fChain->SetBranchAddress("Reco_QQ_dca", Reco_QQ_dca, &b_Reco_QQ_dca);
   fChain->SetBranchAddress("Reco_QQ_MassErr", Reco_QQ_MassErr, &b_Reco_QQ_MassErr);
   fChain->SetBranchAddress("Reco_QQ_vtx", &Reco_QQ_vtx, &b_Reco_QQ_vtx);
   fChain->SetBranchAddress("Reco_QQ_Ntrk", Reco_QQ_Ntrk, &b_Reco_QQ_Ntrk);
   fChain->SetBranchAddress("Reco_QQ_mupl_SelectionType", Reco_QQ_mupl_SelectionType, &b_Reco_QQ_mupl_SelectionType);
   fChain->SetBranchAddress("Reco_QQ_mumi_SelectionType", Reco_QQ_mumi_SelectionType, &b_Reco_QQ_mumi_SelectionType);
   fChain->SetBranchAddress("Reco_QQ_mupl_isGoodMuon", Reco_QQ_mupl_isGoodMuon, &b_Reco_QQ_mupl_isGoodMuon);
   fChain->SetBranchAddress("Reco_QQ_mumi_isGoodMuon", Reco_QQ_mumi_isGoodMuon, &b_Reco_QQ_mumi_isGoodMuon);
   fChain->SetBranchAddress("Reco_QQ_mupl_highPurity", Reco_QQ_mupl_highPurity, &b_Reco_QQ_mupl_highPurity);
   fChain->SetBranchAddress("Reco_QQ_mumi_highPurity", Reco_QQ_mumi_highPurity, &b_Reco_QQ_mumi_highPurity);
   fChain->SetBranchAddress("Reco_QQ_mupl_TrkMuArb", Reco_QQ_mupl_TrkMuArb, &b_Reco_QQ_mupl_TrkMuArb);
   fChain->SetBranchAddress("Reco_QQ_mumi_TrkMuArb", Reco_QQ_mumi_TrkMuArb, &b_Reco_QQ_mumi_TrkMuArb);
   fChain->SetBranchAddress("Reco_QQ_mupl_TMOneStaTight", Reco_QQ_mupl_TMOneStaTight, &b_Reco_QQ_mupl_TMOneStaTight);
   fChain->SetBranchAddress("Reco_QQ_mumi_TMOneStaTight", Reco_QQ_mumi_TMOneStaTight, &b_Reco_QQ_mumi_TMOneStaTight);
   fChain->SetBranchAddress("Reco_QQ_mupl_nPixValHits", Reco_QQ_mupl_nPixValHits, &b_Reco_QQ_mupl_nPixValHits);
   fChain->SetBranchAddress("Reco_QQ_mumi_nPixValHits", Reco_QQ_mumi_nPixValHits, &b_Reco_QQ_mumi_nPixValHits);
   fChain->SetBranchAddress("Reco_QQ_mupl_nMuValHits", Reco_QQ_mupl_nMuValHits, &b_Reco_QQ_mupl_nMuValHits);
   fChain->SetBranchAddress("Reco_QQ_mumi_nMuValHits", Reco_QQ_mumi_nMuValHits, &b_Reco_QQ_mumi_nMuValHits);
   fChain->SetBranchAddress("Reco_QQ_mupl_nTrkHits", Reco_QQ_mupl_nTrkHits, &b_Reco_QQ_mupl_nTrkHits);
   fChain->SetBranchAddress("Reco_QQ_mumi_nTrkHits", Reco_QQ_mumi_nTrkHits, &b_Reco_QQ_mumi_nTrkHits);
   fChain->SetBranchAddress("Reco_QQ_mupl_normChi2_inner", Reco_QQ_mupl_normChi2_inner, &b_Reco_QQ_mupl_normChi2_inner);
   fChain->SetBranchAddress("Reco_QQ_mumi_normChi2_inner", Reco_QQ_mumi_normChi2_inner, &b_Reco_QQ_mumi_normChi2_inner);
   fChain->SetBranchAddress("Reco_QQ_mupl_normChi2_global", Reco_QQ_mupl_normChi2_global, &b_Reco_QQ_mupl_normChi2_global);
   fChain->SetBranchAddress("Reco_QQ_mumi_normChi2_global", Reco_QQ_mumi_normChi2_global, &b_Reco_QQ_mumi_normChi2_global);
   fChain->SetBranchAddress("Reco_QQ_mupl_nPixWMea", Reco_QQ_mupl_nPixWMea, &b_Reco_QQ_mupl_nPixWMea);
   fChain->SetBranchAddress("Reco_QQ_mumi_nPixWMea", Reco_QQ_mumi_nPixWMea, &b_Reco_QQ_mumi_nPixWMea);
   fChain->SetBranchAddress("Reco_QQ_mupl_nTrkWMea", Reco_QQ_mupl_nTrkWMea, &b_Reco_QQ_mupl_nTrkWMea);
   fChain->SetBranchAddress("Reco_QQ_mumi_nTrkWMea", Reco_QQ_mumi_nTrkWMea, &b_Reco_QQ_mumi_nTrkWMea);
   fChain->SetBranchAddress("Reco_QQ_mupl_StationsMatched", Reco_QQ_mupl_StationsMatched, &b_Reco_QQ_mupl_StationsMatched);
   fChain->SetBranchAddress("Reco_QQ_mumi_StationsMatched", Reco_QQ_mumi_StationsMatched, &b_Reco_QQ_mumi_StationsMatched);
   fChain->SetBranchAddress("Reco_QQ_mupl_dxy", Reco_QQ_mupl_dxy, &b_Reco_QQ_mupl_dxy);
   fChain->SetBranchAddress("Reco_QQ_mumi_dxy", Reco_QQ_mumi_dxy, &b_Reco_QQ_mumi_dxy);
   fChain->SetBranchAddress("Reco_QQ_mupl_dxyErr", Reco_QQ_mupl_dxyErr, &b_Reco_QQ_mupl_dxyErr);
   fChain->SetBranchAddress("Reco_QQ_mumi_dxyErr", Reco_QQ_mumi_dxyErr, &b_Reco_QQ_mumi_dxyErr);
   fChain->SetBranchAddress("Reco_QQ_mupl_dz", Reco_QQ_mupl_dz, &b_Reco_QQ_mupl_dz);
   fChain->SetBranchAddress("Reco_QQ_mumi_dz", Reco_QQ_mumi_dz, &b_Reco_QQ_mumi_dz);
   fChain->SetBranchAddress("Reco_QQ_mupl_dzErr", Reco_QQ_mupl_dzErr, &b_Reco_QQ_mupl_dzErr);
   fChain->SetBranchAddress("Reco_QQ_mumi_dzErr", Reco_QQ_mumi_dzErr, &b_Reco_QQ_mumi_dzErr);
   fChain->SetBranchAddress("Reco_QQ_mupl_pt_inner", Reco_QQ_mupl_pt_inner, &b_Reco_QQ_mupl_pt_inner);
   fChain->SetBranchAddress("Reco_QQ_mumi_pt_inner", Reco_QQ_mumi_pt_inner, &b_Reco_QQ_mumi_pt_inner);
   fChain->SetBranchAddress("Reco_QQ_mupl_pt_global", Reco_QQ_mupl_pt_global, &b_Reco_QQ_mupl_pt_global);
   fChain->SetBranchAddress("Reco_QQ_mumi_pt_global", Reco_QQ_mumi_pt_global, &b_Reco_QQ_mumi_pt_global);
   fChain->SetBranchAddress("Reco_QQ_mupl_ptErr_inner", Reco_QQ_mupl_ptErr_inner, &b_Reco_QQ_mupl_ptErr_inner);
   fChain->SetBranchAddress("Reco_QQ_mumi_ptErr_inner", Reco_QQ_mumi_ptErr_inner, &b_Reco_QQ_mumi_ptErr_inner);
   fChain->SetBranchAddress("Reco_QQ_mupl_ptErr_global", Reco_QQ_mupl_ptErr_global, &b_Reco_QQ_mupl_ptErr_global);
   fChain->SetBranchAddress("Reco_QQ_mumi_ptErr_global", Reco_QQ_mumi_ptErr_global, &b_Reco_QQ_mumi_ptErr_global);
   fChain->SetBranchAddress("Reco_mu_size", &Reco_mu_size, &b_Reco_mu_size);
   fChain->SetBranchAddress("Reco_mu_type", Reco_mu_type, &b_Reco_mu_type);
   fChain->SetBranchAddress("Reco_mu_SelectionType", Reco_mu_SelectionType, &b_Reco_mu_SelectionType);
   fChain->SetBranchAddress("Reco_mu_charge", Reco_mu_charge, &b_Reco_mu_charge);
   fChain->SetBranchAddress("Reco_mu_4mom", &Reco_mu_4mom, &b_Reco_mu_4mom);
   fChain->SetBranchAddress("Reco_mu_trig", Reco_mu_trig, &b_Reco_mu_trig);
   fChain->SetBranchAddress("Reco_mu_isGoodMuon", Reco_mu_isGoodMuon, &b_Reco_mu_isGoodMuon);
   fChain->SetBranchAddress("Reco_mu_highPurity", Reco_mu_highPurity, &b_Reco_mu_highPurity);
   fChain->SetBranchAddress("Reco_mu_TrkMuArb", Reco_mu_TrkMuArb, &b_Reco_mu_TrkMuArb);
   fChain->SetBranchAddress("Reco_mu_TMOneStaTight", Reco_mu_TMOneStaTight, &b_Reco_mu_TMOneStaTight);
   fChain->SetBranchAddress("Reco_mu_nPixValHits", Reco_mu_nPixValHits, &b_Reco_mu_nPixValHits);
   fChain->SetBranchAddress("Reco_mu_nMuValHits", Reco_mu_nMuValHits, &b_Reco_mu_nMuValHits);
   fChain->SetBranchAddress("Reco_mu_nTrkHits", Reco_mu_nTrkHits, &b_Reco_mu_nTrkHits);
   fChain->SetBranchAddress("Reco_mu_normChi2_inner", Reco_mu_normChi2_inner, &b_Reco_mu_normChi2_inner);
   fChain->SetBranchAddress("Reco_mu_normChi2_global", Reco_mu_normChi2_global, &b_Reco_mu_normChi2_global);
   fChain->SetBranchAddress("Reco_mu_nPixWMea", Reco_mu_nPixWMea, &b_Reco_mu_nPixWMea);
   fChain->SetBranchAddress("Reco_mu_nTrkWMea", Reco_mu_nTrkWMea, &b_Reco_mu_nTrkWMea);
   fChain->SetBranchAddress("Reco_mu_StationsMatched", Reco_mu_StationsMatched, &b_Reco_mu_StationsMatched);
   fChain->SetBranchAddress("Reco_mu_dxy", Reco_mu_dxy, &b_Reco_mu_dxy);
   fChain->SetBranchAddress("Reco_mu_dxyErr", Reco_mu_dxyErr, &b_Reco_mu_dxyErr);
   fChain->SetBranchAddress("Reco_mu_dz", Reco_mu_dz, &b_Reco_mu_dz);
   fChain->SetBranchAddress("Reco_mu_dzErr", Reco_mu_dzErr, &b_Reco_mu_dzErr);
   fChain->SetBranchAddress("Reco_mu_pt_inner", Reco_mu_pt_inner, &b_Reco_mu_pt_inner);
   fChain->SetBranchAddress("Reco_mu_pt_global", Reco_mu_pt_global, &b_Reco_mu_pt_global);
   fChain->SetBranchAddress("Reco_mu_ptErr_inner", Reco_mu_ptErr_inner, &b_Reco_mu_ptErr_inner);
   fChain->SetBranchAddress("Reco_mu_ptErr_global", Reco_mu_ptErr_global, &b_Reco_mu_ptErr_global);
   fChain->SetBranchAddress("Gen_QQ_size", &Gen_QQ_size, &b_Gen_QQ_size);
   fChain->SetBranchAddress("Gen_QQ_type", Gen_QQ_type, &b_Gen_QQ_type);
   fChain->SetBranchAddress("Gen_QQ_4mom", &Gen_QQ_4mom, &b_Gen_QQ_4mom);
   fChain->SetBranchAddress("Gen_QQ_momId", Gen_QQ_momId, &b_Gen_QQ_momId);
   fChain->SetBranchAddress("Gen_QQ_ctau", Gen_QQ_ctau, &b_Gen_QQ_ctau);
   fChain->SetBranchAddress("Gen_QQ_ctau3D", Gen_QQ_ctau3D, &b_Gen_QQ_ctau3D);
   fChain->SetBranchAddress("Gen_QQ_mupl_4mom", &Gen_QQ_mupl_4mom, &b_Gen_QQ_mupl_4mom);
   fChain->SetBranchAddress("Gen_QQ_mumi_4mom", &Gen_QQ_mumi_4mom, &b_Gen_QQ_mumi_4mom);
   fChain->SetBranchAddress("Gen_mu_size", &Gen_mu_size, &b_Gen_mu_size);
   fChain->SetBranchAddress("Gen_mu_type", Gen_mu_type, &b_Gen_mu_type);
   fChain->SetBranchAddress("Gen_mu_charge", Gen_mu_charge, &b_Gen_mu_charge);
   fChain->SetBranchAddress("Gen_mu_4mom", &Gen_mu_4mom, &b_Gen_mu_4mom);



   fChain->SetBranchAddress("NL1EGamma", &NL1EGamma, &b_NL1Stage2EGamma);
   fChain->SetBranchAddress("L1Stage2EGammaEt", L1Stage2EGammaEt, &b_L1Stage2EGammaEt);
   fChain->SetBranchAddress("L1Stage2EGammaE", L1Stage2EGammaE, &b_L1Stage2EGammaE);
   fChain->SetBranchAddress("L1Stage2EGammaEta", L1Stage2EGammaEta, &b_L1Stage2EGammaEta);
   fChain->SetBranchAddress("L1Stage2EGammaPhi", L1Stage2EGammaPhi, &b_L1Stage2EGammaPhi);
   fChain->SetBranchAddress("L1Stage2EGammaIsol", L1Stage2EGammaIsol, &b_L1Stage2EGammaIsol);
   fChain->SetBranchAddress("L1Stage2EGammaBx", L1Stage2EGammaBx, &b_L1Stage2EGammaBx);
   fChain->SetBranchAddress("NL1Stage2Muon", &NL1Stage2Muon, &b_NL1Stage2Muon);
   fChain->SetBranchAddress("L1Stage2MuonPt", L1Stage2MuonPt, &b_L1Stage2MuonPt);
   fChain->SetBranchAddress("L1Stage2MuonE", L1Stage2MuonE, &b_L1Stage2MuonE);
   fChain->SetBranchAddress("L1Stage2MuonEta", L1Stage2MuonEta, &b_L1Stage2MuonEta);
   fChain->SetBranchAddress("L1Stage2MuonPhi", L1Stage2MuonPhi, &b_L1Stage2MuonPhi);
   fChain->SetBranchAddress("L1Stage2MuonEtaAtVtx", L1Stage2MuonEtaAtVtx, &b_L1Stage2MuonEtaAtVtx);
   fChain->SetBranchAddress("L1Stage2MuonPhiAtVtx", L1Stage2MuonPhiAtVtx, &b_L1Stage2MuonPhiAtVtx);
   fChain->SetBranchAddress("L1Stage2MuonIsol", L1Stage2MuonIsol, &b_L1Stage2MuonIsol);
   fChain->SetBranchAddress("L1Stage2MuonQual", L1Stage2MuonQual, &b_L1Stage2MuonQual);
   fChain->SetBranchAddress("L1Stage2MuonChg", L1Stage2MuonChg, &b_L1Stage2MuonChg);
   fChain->SetBranchAddress("L1Stage2MuontfMuonIndex", L1Stage2MuontfMuonIndex, &b_L1Stage2MuontfMuonIndex);
   fChain->SetBranchAddress("L1Stage2MuontfRegion", L1Stage2MuontfRegion, &b_L1Stage2MuontfRegion);
   fChain->SetBranchAddress("L1Stage2MuonBx", L1Stage2MuonBx, &b_L1Stage2MuonBx);
   fChain->SetBranchAddress("NL1Stage2DiMuon", &NL1Stage2DiMuon, &b_NL1Stage2DiMuon);
   fChain->SetBranchAddress("L1Stage2DiMuonPt", L1Stage2DiMuonPt, &b_L1Stage2DiMuonPt);
   fChain->SetBranchAddress("L1Stage2DiMuonRap", L1Stage2DiMuonRap, &b_L1Stage2DiMuonRap);
   fChain->SetBranchAddress("L1Stage2DiMuonPhi", L1Stage2DiMuonPhi, &b_L1Stage2DiMuonPhi);
   fChain->SetBranchAddress("L1Stage2DiMuonInvMass", L1Stage2DiMuonInvMass, &b_L1Stage2DiMuonInvMass);
   fChain->SetBranchAddress("L1Stage2DiMuondR", L1Stage2DiMuondR, &b_L1Stage2DiMuondR);
   fChain->SetBranchAddress("L1Stage2DiMuonPtAtVtx", L1Stage2DiMuonPtAtVtx, &b_L1Stage2DiMuonPtAtVtx);
   fChain->SetBranchAddress("L1Stage2DiMuonRapAtVtx", L1Stage2DiMuonRapAtVtx, &b_L1Stage2DiMuonRapAtVtx);
   fChain->SetBranchAddress("L1Stage2DiMuonPhiAtVtx", L1Stage2DiMuonPhiAtVtx, &b_L1Stage2DiMuonPhiAtVtx);
   fChain->SetBranchAddress("L1Stage2DiMuonInvMassAtVtx", L1Stage2DiMuonInvMassAtVtx, &b_L1Stage2DiMuonInvMassAtVtx);
   fChain->SetBranchAddress("L1Stage2DiMuondRAtVtx", L1Stage2DiMuondRAtVtx, &b_L1Stage2DiMuondRAtVtx);
   fChain->SetBranchAddress("L1Stage2DiMuonChg", L1Stage2DiMuonChg, &b_L1Stage2DiMuonChg);
   fChain->SetBranchAddress("L1Stage2DiMuonIdx1", L1Stage2DiMuonIdx1, &b_L1Stage2DiMuonIdx1);
   fChain->SetBranchAddress("L1Stage2DiMuonIdx2", L1Stage2DiMuonIdx2, &b_L1Stage2DiMuonIdx2);
   fChain->SetBranchAddress("NL1Stage2Jet", &NL1Stage2Jet, &b_NL1Stage2Jet);
   fChain->SetBranchAddress("L1Stage2JetEt", L1Stage2JetEt, &b_L1Stage2JetEt);
   fChain->SetBranchAddress("L1Stage2JetE", L1Stage2JetE, &b_L1Stage2JetE);
   fChain->SetBranchAddress("L1Stage2JetEta", L1Stage2JetEta, &b_L1Stage2JetEta);
   fChain->SetBranchAddress("L1Stage2JetPhi", L1Stage2JetPhi, &b_L1Stage2JetPhi);
   fChain->SetBranchAddress("L1Stage2JetBx", L1Stage2JetBx, &b_L1Stage2JetBx);
   fChain->SetBranchAddress("NL1Stage2Tau", &NL1Stage2Tau, &b_NL1Stage2Tau);
   fChain->SetBranchAddress("L1Stage2TauEt", L1Stage2TauEt, &b_L1Stage2TauEt);
   fChain->SetBranchAddress("L1Stage2TauE", L1Stage2TauE, &b_L1Stage2TauE);
   fChain->SetBranchAddress("L1Stage2TauEta", L1Stage2TauEta, &b_L1Stage2TauEta);
   fChain->SetBranchAddress("L1Stage2TauPhi", L1Stage2TauPhi, &b_L1Stage2TauPhi);
   fChain->SetBranchAddress("L1Stage2TauBx", L1Stage2TauBx, &b_L1Stage2TauBx);
   fChain->SetBranchAddress("NL1Stage2EtSum", &NL1Stage2EtSum, &b_NL1Stage2EtSum);
   fChain->SetBranchAddress("L1Stage2EtSumEt", L1Stage2EtSumEt, &b_L1Stage2EtSumEt);
   fChain->SetBranchAddress("L1Stage2EtSumPhi", L1Stage2EtSumPhi, &b_L1Stage2EtSumPhi);
   fChain->SetBranchAddress("L1Stage2EtSumHwEt", L1Stage2EtSumHwEt, &b_L1Stage2EtSumHwEt);
   fChain->SetBranchAddress("L1Stage2EtSumHwPhi", L1Stage2EtSumHwPhi, &b_L1Stage2EtSumHwPhi);
   fChain->SetBranchAddress("L1Stage2EtSumType", L1Stage2EtSumType, &b_L1Stage2EtSumType);
   fChain->SetBranchAddress("L1Stage2EtSumBx", L1Stage2EtSumBx, &b_L1Stage2EtSumBx);
   fChain->SetBranchAddress("Event", &Event, &b_Event);
   fChain->SetBranchAddress("LumiBlock", &LumiBlock, &b_LumiBlock);
   fChain->SetBranchAddress("Run", &Run, &b_Run);
   fChain->SetBranchAddress("Bx", &Bx, &b_Bx);
   fChain->SetBranchAddress("Orbit", &Orbit, &b_Orbit);
   fChain->SetBranchAddress("AvgInstDelLumi", &AvgInstDelLumi, &b_AvgInstDelLumi);
   fChain->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
   fChain->SetBranchAddress("HLTriggerFirstPath_Prescl", &HLTriggerFirstPath_Prescl, &b_HLTriggerFirstPath_Prescl);
   fChain->SetBranchAddress("HLT_HIL1DoubleMuOpen_v1", &HLT_HIL1DoubleMuOpen_v1, &b_HLT_HIL1DoubleMuOpen_v1);
   fChain->SetBranchAddress("HLT_HIL1DoubleMuOpen_v1_Prescl", &HLT_HIL1DoubleMuOpen_v1_Prescl, &b_HLT_HIL1DoubleMuOpen_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1DoubleMuOpen_OS_v1", &HLT_HIL1DoubleMuOpen_OS_v1, &b_HLT_HIL1DoubleMuOpen_OS_v1);
   fChain->SetBranchAddress("HLT_HIL1DoubleMuOpen_OS_v1_Prescl", &HLT_HIL1DoubleMuOpen_OS_v1_Prescl, &b_HLT_HIL1DoubleMuOpen_OS_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1DoubleMuOpen_SS_v1", &HLT_HIL1DoubleMuOpen_SS_v1, &b_HLT_HIL1DoubleMuOpen_SS_v1);
   fChain->SetBranchAddress("HLT_HIL1DoubleMuOpen_SS_v1_Prescl", &HLT_HIL1DoubleMuOpen_SS_v1_Prescl, &b_HLT_HIL1DoubleMuOpen_SS_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1DoubleMu0_v1", &HLT_HIL1DoubleMu0_v1, &b_HLT_HIL1DoubleMu0_v1);
   fChain->SetBranchAddress("HLT_HIL1DoubleMu0_v1_Prescl", &HLT_HIL1DoubleMu0_v1_Prescl, &b_HLT_HIL1DoubleMu0_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1DoubleMu0_HighQ_v1", &HLT_HIL1DoubleMu0_HighQ_v1, &b_HLT_HIL1DoubleMu0_HighQ_v1);
   fChain->SetBranchAddress("HLT_HIL1DoubleMu0_HighQ_v1_Prescl", &HLT_HIL1DoubleMu0_HighQ_v1_Prescl, &b_HLT_HIL1DoubleMu0_HighQ_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1DoubleMu10_v1", &HLT_HIL1DoubleMu10_v1, &b_HLT_HIL1DoubleMu10_v1);
   fChain->SetBranchAddress("HLT_HIL1DoubleMu10_v1_Prescl", &HLT_HIL1DoubleMu10_v1_Prescl, &b_HLT_HIL1DoubleMu10_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2DoubleMu0_v1", &HLT_HIL2DoubleMu0_v1, &b_HLT_HIL2DoubleMu0_v1);
   fChain->SetBranchAddress("HLT_HIL2DoubleMu0_v1_Prescl", &HLT_HIL2DoubleMu0_v1_Prescl, &b_HLT_HIL2DoubleMu0_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2DoubleMu10_v1", &HLT_HIL2DoubleMu10_v1, &b_HLT_HIL2DoubleMu10_v1);
   fChain->SetBranchAddress("HLT_HIL2DoubleMu10_v1_Prescl", &HLT_HIL2DoubleMu10_v1_Prescl, &b_HLT_HIL2DoubleMu10_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3DoubleMu0_v1", &HLT_HIL3DoubleMu0_v1, &b_HLT_HIL3DoubleMu0_v1);
   fChain->SetBranchAddress("HLT_HIL3DoubleMu0_v1_Prescl", &HLT_HIL3DoubleMu0_v1_Prescl, &b_HLT_HIL3DoubleMu0_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3DoubleMu10_v1", &HLT_HIL3DoubleMu10_v1, &b_HLT_HIL3DoubleMu10_v1);
   fChain->SetBranchAddress("HLT_HIL3DoubleMu10_v1_Prescl", &HLT_HIL3DoubleMu10_v1_Prescl, &b_HLT_HIL3DoubleMu10_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1Mu3_v1", &HLT_HIL1Mu3_v1, &b_HLT_HIL1Mu3_v1);
   fChain->SetBranchAddress("HLT_HIL1Mu3_v1_Prescl", &HLT_HIL1Mu3_v1_Prescl, &b_HLT_HIL1Mu3_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1Mu5_v1", &HLT_HIL1Mu5_v1, &b_HLT_HIL1Mu5_v1);
   fChain->SetBranchAddress("HLT_HIL1Mu5_v1_Prescl", &HLT_HIL1Mu5_v1_Prescl, &b_HLT_HIL1Mu5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1Mu7_v1", &HLT_HIL1Mu7_v1, &b_HLT_HIL1Mu7_v1);
   fChain->SetBranchAddress("HLT_HIL1Mu7_v1_Prescl", &HLT_HIL1Mu7_v1_Prescl, &b_HLT_HIL1Mu7_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1Mu12_v1", &HLT_HIL1Mu12_v1, &b_HLT_HIL1Mu12_v1);
   fChain->SetBranchAddress("HLT_HIL1Mu12_v1_Prescl", &HLT_HIL1Mu12_v1_Prescl, &b_HLT_HIL1Mu12_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL1Mu16_v1", &HLT_HIL1Mu16_v1, &b_HLT_HIL1Mu16_v1);
   fChain->SetBranchAddress("HLT_HIL1Mu16_v1_Prescl", &HLT_HIL1Mu16_v1_Prescl, &b_HLT_HIL1Mu16_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2Mu3_v1", &HLT_HIL2Mu3_v1, &b_HLT_HIL2Mu3_v1);
   fChain->SetBranchAddress("HLT_HIL2Mu3_v1_Prescl", &HLT_HIL2Mu3_v1_Prescl, &b_HLT_HIL2Mu3_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2Mu5_v1", &HLT_HIL2Mu5_v1, &b_HLT_HIL2Mu5_v1);
   fChain->SetBranchAddress("HLT_HIL2Mu5_v1_Prescl", &HLT_HIL2Mu5_v1_Prescl, &b_HLT_HIL2Mu5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2Mu7_v1", &HLT_HIL2Mu7_v1, &b_HLT_HIL2Mu7_v1);
   fChain->SetBranchAddress("HLT_HIL2Mu7_v1_Prescl", &HLT_HIL2Mu7_v1_Prescl, &b_HLT_HIL2Mu7_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2Mu12_v1", &HLT_HIL2Mu12_v1, &b_HLT_HIL2Mu12_v1);
   fChain->SetBranchAddress("HLT_HIL2Mu12_v1_Prescl", &HLT_HIL2Mu12_v1_Prescl, &b_HLT_HIL2Mu12_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2Mu15_v1", &HLT_HIL2Mu15_v1, &b_HLT_HIL2Mu15_v1);
   fChain->SetBranchAddress("HLT_HIL2Mu15_v1_Prescl", &HLT_HIL2Mu15_v1_Prescl, &b_HLT_HIL2Mu15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL2Mu20_v1", &HLT_HIL2Mu20_v1, &b_HLT_HIL2Mu20_v1);
   fChain->SetBranchAddress("HLT_HIL2Mu20_v1_Prescl", &HLT_HIL2Mu20_v1_Prescl, &b_HLT_HIL2Mu20_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3_v1", &HLT_HIL3Mu3_v1, &b_HLT_HIL3Mu3_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3_v1_Prescl", &HLT_HIL3Mu3_v1_Prescl, &b_HLT_HIL3Mu3_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5_v1", &HLT_HIL3Mu5_v1, &b_HLT_HIL3Mu5_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5_v1_Prescl", &HLT_HIL3Mu5_v1_Prescl, &b_HLT_HIL3Mu5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu7_v1", &HLT_HIL3Mu7_v1, &b_HLT_HIL3Mu7_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu7_v1_Prescl", &HLT_HIL3Mu7_v1_Prescl, &b_HLT_HIL3Mu7_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu12_v1", &HLT_HIL3Mu12_v1, &b_HLT_HIL3Mu12_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu12_v1_Prescl", &HLT_HIL3Mu12_v1_Prescl, &b_HLT_HIL3Mu12_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu15_v1", &HLT_HIL3Mu15_v1, &b_HLT_HIL3Mu15_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu15_v1_Prescl", &HLT_HIL3Mu15_v1_Prescl, &b_HLT_HIL3Mu15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu20_v1", &HLT_HIL3Mu20_v1, &b_HLT_HIL3Mu20_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu20_v1_Prescl", &HLT_HIL3Mu20_v1_Prescl, &b_HLT_HIL3Mu20_v1_Prescl);
   fChain->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
   fChain->SetBranchAddress("HLTriggerFinalPath_Prescl", &HLTriggerFinalPath_Prescl, &b_HLTriggerFinalPath_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_Final", &L1_DoubleMu0_Final, &b_L1_DoubleMu0_Final);
   fChain->SetBranchAddress("L1_DoubleMu0_Prescl", &L1_DoubleMu0_Prescl, &b_L1_DoubleMu0_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_BptxAND_Final", &L1_DoubleMu0_BptxAND_Final, &b_L1_DoubleMu0_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMu0_BptxAND_Prescl", &L1_DoubleMu0_BptxAND_Prescl, &b_L1_DoubleMu0_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_MassGT1_BptxAND_Final", &L1_DoubleMu0_MassGT1_BptxAND_Final, &b_L1_DoubleMu0_MassGT1_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMu0_MassGT1_BptxAND_Prescl", &L1_DoubleMu0_MassGT1_BptxAND_Prescl, &b_L1_DoubleMu0_MassGT1_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu10_BptxAND_Final", &L1_DoubleMu10_BptxAND_Final, &b_L1_DoubleMu10_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMu10_BptxAND_Prescl", &L1_DoubleMu10_BptxAND_Prescl, &b_L1_DoubleMu10_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_Final", &L1_DoubleMuOpen_Final, &b_L1_DoubleMuOpen_Final);
   fChain->SetBranchAddress("L1_DoubleMuOpen_Prescl", &L1_DoubleMuOpen_Prescl, &b_L1_DoubleMuOpen_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_BptxAND_Final", &L1_DoubleMuOpen_BptxAND_Final, &b_L1_DoubleMuOpen_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMuOpen_BptxAND_Prescl", &L1_DoubleMuOpen_BptxAND_Prescl, &b_L1_DoubleMuOpen_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_MassGT1_BptxAND_Final", &L1_DoubleMuOpen_MassGT1_BptxAND_Final, &b_L1_DoubleMuOpen_MassGT1_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMuOpen_MassGT1_BptxAND_Prescl", &L1_DoubleMuOpen_MassGT1_BptxAND_Prescl, &b_L1_DoubleMuOpen_MassGT1_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_OS_BptxAND_Final", &L1_DoubleMuOpen_OS_BptxAND_Final, &b_L1_DoubleMuOpen_OS_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMuOpen_OS_BptxAND_Prescl", &L1_DoubleMuOpen_OS_BptxAND_Prescl, &b_L1_DoubleMuOpen_OS_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_SS_BptxAND_Final", &L1_DoubleMuOpen_SS_BptxAND_Final, &b_L1_DoubleMuOpen_SS_BptxAND_Final);
   fChain->SetBranchAddress("L1_DoubleMuOpen_SS_BptxAND_Prescl", &L1_DoubleMuOpen_SS_BptxAND_Prescl, &b_L1_DoubleMuOpen_SS_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu0_Final", &L1_SingleMu0_Final, &b_L1_SingleMu0_Final);
   fChain->SetBranchAddress("L1_SingleMu0_Prescl", &L1_SingleMu0_Prescl, &b_L1_SingleMu0_Prescl);
   fChain->SetBranchAddress("L1_SingleMu0_BptxAND_Final", &L1_SingleMu0_BptxAND_Final, &b_L1_SingleMu0_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu0_BptxAND_Prescl", &L1_SingleMu0_BptxAND_Prescl, &b_L1_SingleMu0_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu10_BptxAND_Final", &L1_SingleMu10_BptxAND_Final, &b_L1_SingleMu10_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu10_BptxAND_Prescl", &L1_SingleMu10_BptxAND_Prescl, &b_L1_SingleMu10_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu12_BptxAND_Final", &L1_SingleMu12_BptxAND_Final, &b_L1_SingleMu12_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu12_BptxAND_Prescl", &L1_SingleMu12_BptxAND_Prescl, &b_L1_SingleMu12_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu16_BptxAND_Final", &L1_SingleMu16_BptxAND_Final, &b_L1_SingleMu16_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu16_BptxAND_Prescl", &L1_SingleMu16_BptxAND_Prescl, &b_L1_SingleMu16_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_Final", &L1_SingleMu3_Final, &b_L1_SingleMu3_Final);
   fChain->SetBranchAddress("L1_SingleMu3_Prescl", &L1_SingleMu3_Prescl, &b_L1_SingleMu3_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_BptxAND_Final", &L1_SingleMu3_BptxAND_Final, &b_L1_SingleMu3_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu3_BptxAND_Prescl", &L1_SingleMu3_BptxAND_Prescl, &b_L1_SingleMu3_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu5_Final", &L1_SingleMu5_Final, &b_L1_SingleMu5_Final);
   fChain->SetBranchAddress("L1_SingleMu5_Prescl", &L1_SingleMu5_Prescl, &b_L1_SingleMu5_Prescl);
   fChain->SetBranchAddress("L1_SingleMu5_BptxAND_Final", &L1_SingleMu5_BptxAND_Final, &b_L1_SingleMu5_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu5_BptxAND_Prescl", &L1_SingleMu5_BptxAND_Prescl, &b_L1_SingleMu5_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu7_Final", &L1_SingleMu7_Final, &b_L1_SingleMu7_Final);
   fChain->SetBranchAddress("L1_SingleMu7_Prescl", &L1_SingleMu7_Prescl, &b_L1_SingleMu7_Prescl);
   fChain->SetBranchAddress("L1_SingleMu7_BptxAND_Final", &L1_SingleMu7_BptxAND_Final, &b_L1_SingleMu7_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMu7_BptxAND_Prescl", &L1_SingleMu7_BptxAND_Prescl, &b_L1_SingleMu7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_Final", &L1_SingleMuOpen_Final, &b_L1_SingleMuOpen_Final);
   fChain->SetBranchAddress("L1_SingleMuOpen_Prescl", &L1_SingleMuOpen_Prescl, &b_L1_SingleMuOpen_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_BptxAND_Final", &L1_SingleMuOpen_BptxAND_Final, &b_L1_SingleMuOpen_BptxAND_Final);
   fChain->SetBranchAddress("L1_SingleMuOpen_BptxAND_Prescl", &L1_SingleMuOpen_BptxAND_Prescl, &b_L1_SingleMuOpen_BptxAND_Prescl);

   Notify();
}

Bool_t myTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void myTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t myTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef myTree_cxx
