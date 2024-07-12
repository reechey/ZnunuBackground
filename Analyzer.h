//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep  3 16:34:46 2019 by ROOT version 6.14/04
// from TTree Events/Events
// found on file: 88877510-EB32-DD4C-ACAB-A8B99C65E6A3.root
//////////////////////////////////////////////////////////

// Standard C++ libraries
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <iostream>
#include <typeinfo>
// ROOT libraries
#include "TChain.h"
#include "TChainElement.h"
#include "TCanvas.h"
#include "TStopwatch.h"
#include "TBenchmark.h"
#include "TFile.h"
#include "TEfficiency.h"
#include "TLorentzVector.h"
#include <TRandom3.h>
//BTagSF
#include "input/BTCalibrationStandalone.cpp"
#include "correctionlib/correction.h"

#ifndef Analyzer_h
#define Analyzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TKey.h>
#include <TH2.h>
#include <TH3.h>
#include <THn.h>
#include <TGraph.h>

using namespace std;
using namespace correction;

// Header file for the classes stored in the TTree if any.

class Analyzer {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   Float_t         CaloMET_phi;
   Float_t         CaloMET_pt;
   Float_t         CaloMET_sumEt;
   Float_t         ChsMET_phi;
   Float_t         ChsMET_pt;
   Float_t         ChsMET_sumEt;
   UInt_t          nCorrT1METJet;
   Float_t         CorrT1METJet_area[99];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_eta[99];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_muonSubtrFactor[99];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_phi[99];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_rawPt[99];   //[nCorrT1METJet]
   UInt_t          nElectron;
   Float_t         Electron_deltaEtaSC[99];   //[nElectron]
   Float_t         Electron_dr03EcalRecHitSumEt[99];   //[nElectron]
   Float_t         Electron_dr03HcalDepth1TowerSumEt[99];   //[nElectron]
   Float_t         Electron_dr03TkSumPt[99];   //[nElectron]
   Float_t         Electron_dr03TkSumPtHEEP[99];   //[nElectron]
   Float_t         Electron_dxy[99];   //[nElectron]
   Float_t         Electron_dxyErr[99];   //[nElectron]
   Float_t         Electron_dz[99];   //[nElectron]
   Float_t         Electron_dzErr[99];   //[nElectron]
   Float_t         Electron_eCorr[99];   //[nElectron]
   Float_t         Electron_eInvMinusPInv[99];   //[nElectron]
   Float_t         Electron_energyErr[99];   //[nElectron]
   Float_t         Electron_eta[99];   //[nElectron]
   Float_t         Electron_hoe[99];   //[nElectron]
   Float_t         Electron_ip3d[99];   //[nElectron]
   Float_t         Electron_jetPtRelv2[99];   //[nElectron]
   Float_t         Electron_jetRelIso[99];   //[nElectron]
   Float_t         Electron_mass[99];   //[nElectron]
   Float_t         Electron_miniPFRelIso_all[99];   //[nElectron]
   Float_t         Electron_miniPFRelIso_chg[99];   //[nElectron]
   Float_t         Electron_mvaSpring16GP[99];   //[nElectron]
   Float_t         Electron_mvaSpring16HZZ[99];   //[nElectron]
   Float_t         Electron_pfRelIso03_all[99];   //[nElectron]
   Float_t         Electron_pfRelIso03_chg[99];   //[nElectron]
   Float_t         Electron_phi[99];   //[nElectron]
   Float_t         Electron_pt[99];   //[nElectron]
   Float_t         Electron_r9[99];   //[nElectron]
   Float_t         Electron_sieie[99];   //[nElectron]
   Float_t         Electron_sip3d[99];   //[nElectron]
   Float_t         Electron_mvaTTH[99];   //[nElectron]
   Int_t           Electron_charge[99];   //[nElectron]
   Int_t           Electron_cutBased[99];   //[nElectron]
   Int_t           Electron_cutBased_HLTPreSel[99];   //[nElectron]
   Int_t           Electron_cutBased_Spring15[99];   //[nElectron]
   Int_t           Electron_cutBased_Sum16[99];   //[nElectron]
   Int_t           Electron_jetIdx[99];   //[nElectron]
   Int_t           Electron_pdgId[99];   //[nElectron]
   Int_t           Electron_photonIdx[99];   //[nElectron]
   Int_t           Electron_tightCharge[99];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmap[99];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmapSpring15[99];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmapSum16[99];   //[nElectron]
   Bool_t          Electron_convVeto[99];   //[nElectron]
   Bool_t          Electron_cutBased_HEEP[99];   //[nElectron]
   Bool_t          Electron_isPFcand[99];   //[nElectron]
   UChar_t         Electron_lostHits[99];   //[nElectron]
   Bool_t          Electron_mvaSpring16GP_WP80[99];   //[nElectron]
   Bool_t          Electron_mvaSpring16GP_WP90[99];   //[nElectron]
   Bool_t          Electron_mvaSpring16HZZ_WPL[99];   //[nElectron]
   UChar_t         Electron_seedGain[99];   //[nElectron]
   UInt_t          nFatJet;
   Float_t         FatJet_area[99];   //[nFatJet]
   Float_t         FatJet_btagCSVV2[99];   //[nFatJet]
   Float_t         FatJet_btagDDBvLV2[99];   //[nFatJet]
   Float_t         FatJet_btagDDCvBV2[99];   //[nFatJet]
   Float_t         FatJet_btagDDCvLV2[99];   //[nFatJet]
   Float_t         FatJet_btagDeepB[99];   //[nFatJet]
   Float_t         FatJet_btagHbb[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_H4qvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_HbbvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_TvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_WvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHbbvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHccvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZbbvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_bbvsLight[99];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ccvsLight[99];   //[nFatJet]
   Float_t         FatJet_deepTag_H[99];   //[nFatJet]
   Float_t         FatJet_deepTag_QCD[99];   //[nFatJet]
   Float_t         FatJet_deepTag_QCDothers[99];   //[nFatJet]
   Float_t         FatJet_deepTag_TvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTag_WvsQCD[99];   //[nFatJet]
   Float_t         FatJet_deepTag_ZvsQCD[99];   //[nFatJet]
   Float_t         FatJet_eta[99];   //[nFatJet]
   Float_t         FatJet_mass[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_nom[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jerUp[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jerDown[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalUp[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalDown[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmrUp[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmrDown[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmsUp[99];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmsDown[99];   //[nFatJet]
   Float_t         FatJet_n2b1[99];   //[nFatJet]
   Float_t         FatJet_n3b1[99];   //[nFatJet]
   Float_t         FatJet_particleNetMD_Xbb[99];   //[nFatJet]
   Float_t         FatJet_particleNetMD_Xcc[99];   //[nFatJet]
   Float_t         FatJet_particleNetMD_QCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_H4qvsQCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_HbbvsQCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_HccvsQCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_QCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_TvsQCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_WvsQCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_ZvsQCD[99];   //[nFatJet]
   Float_t         FatJet_particleNet_mass[99];   //[nFatJet]
   Float_t         FatJet_phi[99];   //[nFatJet]
   Float_t         FatJet_pt[99];   //[nFatJet]
   Float_t         FatJet_pt_nom[99];   //[nJet]
   Float_t         FatJet_pt_jerUp[99];   //[nJet]
   Float_t         FatJet_pt_jerDown[99];   //[nJet]
   Float_t         FatJet_pt_jesTotalUp[99];   //[nJet]
   Float_t         FatJet_pt_jesTotalDown[99];   //[nJet]
   Float_t         FatJet_rawFactor[99];   //[nFatJet]
   Float_t         FatJet_tau1[99];   //[nFatJet]
   Float_t         FatJet_tau2[99];   //[nFatJet]
   Float_t         FatJet_tau3[99];   //[nFatJet]
   Float_t         FatJet_tau4[99];   //[nFatJet]
   Int_t           FatJet_jetId[99];   //[nFatJet]
   Int_t           FatJet_subJetIdx1[99];   //[nFatJet]
   Int_t           FatJet_subJetIdx2[99];   //[nFatJet]
   Int_t           FatJet_genJetAK8Idx[99];   //[nFatJet]
   Int_t           FatJet_hadronFlavour[99];   //[nFatJet]
   UInt_t          nGenJetAK8;
   Float_t         GenJetAK8_eta[99];   //[nGenJetAK8]
   Float_t         GenJetAK8_mass[99];   //[nGenJetAK8]
   Float_t         GenJetAK8_phi[99];   //[nGenJetAK8]
   Float_t         GenJetAK8_pt[99];   //[nGenJetAK8]
   UInt_t          nGenJet;
   Float_t         GenJet_eta[99];   //[nGenJet]
   Float_t         GenJet_mass[99];   //[nGenJet]
   Float_t         GenJet_phi[99];   //[nGenJet]
   Float_t         GenJet_pt[99];   //[nGenJet]
   UInt_t          nGenPart;
   Float_t         GenPart_eta[999];   //[nGenPart]
   Float_t         GenPart_mass[999];   //[nGenPart]
   Float_t         GenPart_phi[999];   //[nGenPart]
   Float_t         GenPart_pt[999];   //[nGenPart]
   Int_t           GenPart_genPartIdxMother[999];   //[nGenPart]
   Int_t           GenPart_pdgId[999];   //[nGenPart]
   Int_t           GenPart_status[999];   //[nGenPart]
   Int_t           GenPart_statusFlags[999];   //[nGenPart]
   UInt_t          nSubGenJetAK8;
   Float_t         SubGenJetAK8_eta[99];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_mass[99];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_phi[99];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_pt[99];   //[nSubGenJetAK8]
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   UInt_t          nGenVisTau;
   Float_t         GenVisTau_eta[99];   //[nGenVisTau]
   Float_t         GenVisTau_mass[99];   //[nGenVisTau]
   Float_t         GenVisTau_phi[99];   //[nGenVisTau]
   Float_t         GenVisTau_pt[99];   //[nGenVisTau]
   Int_t           GenVisTau_charge[99];   //[nGenVisTau]
   Int_t           GenVisTau_genPartIdxMother[99];   //[nGenVisTau]
   Int_t           GenVisTau_status[99];   //[nGenVisTau]
   Float_t         genWeight;
   Float_t         puAutoWeight;
   Float_t         puAutoWeightUp;
   Float_t         puAutoWeightDown;
   Float_t         puWeight;
   Float_t         puWeightUp;
   Float_t         puWeightDown;
   UInt_t          nPSWeight;
   Float_t         PSWeight[99];   //[nPSWeight]
   UInt_t          nIsoTrack;
   Float_t         IsoTrack_dxy[99];   //[nIsoTrack]
   Float_t         IsoTrack_dz[99];   //[nIsoTrack]
   Float_t         IsoTrack_eta[99];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_all[99];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_chg[99];   //[nIsoTrack]
   Float_t         IsoTrack_phi[99];   //[nIsoTrack]
   Float_t         IsoTrack_pt[99];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_all[99];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_chg[99];   //[nIsoTrack]
   Int_t           IsoTrack_fromPV[99];   //[nIsoTrack]
   Int_t           IsoTrack_pdgId[99];   //[nIsoTrack]
   Bool_t          IsoTrack_isHighPurityTrack[99];   //[nIsoTrack]
   Bool_t          IsoTrack_isPFcand[99];   //[nIsoTrack]
   Bool_t          IsoTrack_isFromLostTrack[99];   //[nIsoTrack]
   UInt_t          nJet;
   Float_t         Jet_area[99];   //[nJet]
   Float_t         Jet_btagCSVV2[99];   //[nJet]
   Float_t         Jet_btagDeepB[99];   //[nJet]
   Float_t         Jet_btagDeepC[99];   //[nJet]
   Float_t         Jet_btagDeepFlavB[99];   //[nJet]
   Float_t         Jet_chEmEF[99];   //[nJet]
   Float_t         Jet_chHEF[99];   //[nJet]
   Float_t         Jet_eta[99];   //[nJet]
   Float_t         Jet_mass[99];   //[nJet]
   Float_t         Jet_mass_nom[99];//[nJet]
   Float_t         Jet_mass_jerUp[99];   //[nJet]
   Float_t         Jet_mass_jerDown[99];  //[nJet]
   Float_t         Jet_mass_jesTotalUp[99];   //[nJet]
   Float_t         Jet_mass_jesTotalDown[99];   //[nJet]
   Float_t         Jet_muEF[99];   //[nJet]
   Float_t         Jet_muonSubtrFactor[99];   //[nJet]
   Float_t         Jet_neEmEF[99];   //[nJet]
   Float_t         Jet_neHEF[99];   //[nJet]
   Float_t         Jet_phi[99];   //[nJet]
   Float_t         Jet_pt[99];   //[nJet]
   Float_t         Jet_pt_nom[99];   //[nJet]
   Float_t         Jet_pt_raw[99];   //[nJet]
   Float_t         Jet_pt_jerUp[99];   //[nJet]
   Float_t         Jet_pt_jerDown[99];   //[nJet]
   Float_t         Jet_pt_jesTotalUp[99];   //[nJet]
   Float_t         Jet_pt_jesTotalDown[99];   //[nJet]
   Float_t         Jet_qgl[99];   //[nJet]
   Float_t         Jet_rawFactor[99];   //[nJet]
   Float_t         Jet_bRegCorr[99];   //[nJet]
   Float_t         Jet_bRegRes[99];   //[nJet]
   Int_t           Jet_electronIdx1[99];   //[nJet]
   Int_t           Jet_electronIdx2[99];   //[nJet]
   Int_t           Jet_jetId[99];   //[nJet]
   Int_t           Jet_muonIdx1[99];   //[nJet]
   Int_t           Jet_muonIdx2[99];   //[nJet]
   Int_t           Jet_nConstituents[99];   //[nJet]
   Int_t           Jet_nElectrons[99];   //[nJet]
   Int_t           Jet_nMuons[99];   //[nJet]
   Int_t           Jet_puId[99];   //[nJet]
   Float_t         L1PreFiringWeight_Dn;
   Float_t         L1PreFiringWeight_Nom;
   Float_t         L1PreFiringWeight_Up;
   Float_t         GenMET_phi;
   Float_t         GenMET_pt;
   Float_t         MET_MetUnclustEnUpDeltaX;
   Float_t         MET_MetUnclustEnUpDeltaY;
   Float_t         MET_covXX;
   Float_t         MET_covXY;
   Float_t         MET_covYY;
   Float_t         MET_phi;
   Float_t         MET_T1_phi;
   Float_t         MET_T1_phi_jerUp;
   Float_t         MET_T1_phi_jerDown;
   Float_t         MET_T1_phi_jesTotalUp;
   Float_t         MET_T1_phi_jesTotalDown;
   Float_t         MET_T1_phi_unclustEnUp;
   Float_t         MET_T1_phi_unclustEnDown;
   Float_t         MET_pt;
   Float_t         MET_T1_pt;
   Float_t         MET_T1_pt_jerUp;
   Float_t         MET_T1_pt_jerDown;
   Float_t         MET_T1_pt_jesTotalUp;
   Float_t         MET_T1_pt_jesTotalDown;
   Float_t         MET_T1_pt_unclustEnUp;
   Float_t         MET_T1_pt_unclustEnDown;
   Float_t         MET_significance;
   Float_t         MET_sumEt;
   UInt_t          nMuon;
   Float_t         Muon_dxy[99];   //[nMuon]
   Float_t         Muon_dxyErr[99];   //[nMuon]
   Float_t         Muon_dz[99];   //[nMuon]
   Float_t         Muon_dzErr[99];   //[nMuon]
   Float_t         Muon_eta[99];   //[nMuon]
   Float_t         Muon_ip3d[99];   //[nMuon]
   Float_t         Muon_jetPtRelv2[99];   //[nMuon]
   Float_t         Muon_jetRelIso[99];   //[nMuon]
   Float_t         Muon_mass[99];   //[nMuon]
   Float_t         Muon_miniPFRelIso_all[99];   //[nMuon]
   Float_t         Muon_miniPFRelIso_chg[99];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[99];   //[nMuon]
   Float_t         Muon_pfRelIso03_chg[99];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[99];   //[nMuon]
   Float_t         Muon_phi[99];   //[nMuon]
   Float_t         Muon_pt[99];   //[nMuon]
   Float_t         Muon_ptErr[99];   //[nMuon]
   Float_t         Muon_segmentComp[99];   //[nMuon]
   Float_t         Muon_sip3d[99];   //[nMuon]
   Float_t         Muon_tkRelIso[99];   //[nMuon]
   Float_t         Muon_tunepRelPt[99];   //[nMuon]
   Float_t         Muon_mvaLowPt[99];   //[nMuon]
   Float_t         Muon_mvaTTH[99];   //[nMuon]
   Int_t           Muon_charge[99];   //[nMuon]
   Int_t           Muon_jetIdx[99];   //[nMuon]
   Int_t           Muon_nStations[99];   //[nMuon]
   Int_t           Muon_nTrackerLayers[99];   //[nMuon]
   Int_t           Muon_pdgId[99];   //[nMuon]
   Int_t           Muon_tightCharge[99];   //[nMuon]
   UChar_t         Muon_highPtId[99];   //[nMuon]
   Bool_t          Muon_inTimeMuon[99];   //[nMuon]
   Bool_t          Muon_isGlobal[99];   //[nMuon]
   Bool_t          Muon_isPFcand[99];   //[nMuon]
   Bool_t          Muon_isTracker[99];   //[nMuon]
   Bool_t          Muon_looseId[99];   //[nMuon]
   Bool_t          Muon_mediumId[99];   //[nMuon]
   Bool_t          Muon_mediumPromptId[99];   //[nMuon]
   UChar_t         Muon_miniIsoId[99];   //[nMuon]
   UChar_t         Muon_multiIsoId[99];   //[nMuon]
   UChar_t         Muon_mvaId[99];   //[nMuon]
   UChar_t         Muon_pfIsoId[99];   //[nMuon]
   Bool_t          Muon_softId[99];   //[nMuon]
   Bool_t          Muon_softMvaId[99];   //[nMuon]
   Bool_t          Muon_tightId[99];   //[nMuon]
   UChar_t         Muon_tkIsoId[99];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[99];   //[nMuon]
   UInt_t          nPhoton;
   Float_t         Photon_dEscaleUp[99];   //[nPhoton]
   Float_t         Photon_dEscaleDown[99];   //[nPhoton]
   Float_t         Photon_dEsigmaUp[99];   //[nPhoton]
   Float_t         Photon_dEsigmaDown[99];   //[nPhoton]
   Float_t         Photon_eCorr[99];   //[nPhoton]
   Float_t         Photon_energyErr[99];   //[nPhoton]
   Float_t         Photon_eta[99];   //[nPhoton]
   Float_t         Photon_hoe[99];   //[nPhoton]
   Float_t         Photon_mass[99];   //[nPhoton]
   Float_t         Photon_mvaID[99];   //[nPhoton]
   Float_t         Photon_mvaID17[99];   //[nPhoton]
   Float_t         Photon_pfRelIso03_all[99];   //[nPhoton]
   Float_t         Photon_pfRelIso03_chg[99];   //[nPhoton]
   Float_t         Photon_phi[99];   //[nPhoton]
   Float_t         Photon_pt[99];   //[nPhoton]
   Float_t         Photon_r9[99];   //[nPhoton]
   Float_t         Photon_sieie[99];   //[nPhoton]
   Int_t           Photon_charge[99];   //[nPhoton]
   Int_t           Photon_cutBased[99];   //[nPhoton]
   Int_t           Photon_electronIdx[99];   //[nPhoton]
   Int_t           Photon_jetIdx[99];   //[nPhoton]
   Int_t           Photon_pdgId[99];   //[nPhoton]
   Int_t           Photon_vidNestedWPBitmap[99];   //[nPhoton]
   Bool_t          Photon_electronVeto[99];   //[nPhoton]
   Bool_t          Photon_isScEtaEB[99];   //[nPhoton]
   Bool_t          Photon_isScEtaEE[99];   //[nPhoton]
   Bool_t          Photon_mvaID17_WP80[99];   //[nPhoton]
   Bool_t          Photon_mvaID17_WP90[99];   //[nPhoton]
   Bool_t          Photon_mvaID_WP80[99];   //[nPhoton]
   Bool_t          Photon_mvaID_WP90[99];   //[nPhoton]
   Bool_t          Photon_pixelSeed[99];   //[nPhoton]
   UChar_t         Photon_seedGain[99];   //[nPhoton]
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         PuppiMET_phi;
   Float_t         PuppiMET_pt;
   Float_t         PuppiMET_sumEt;
   Float_t         RawMET_phi;
   Float_t         RawMET_pt;
   Float_t         RawMET_sumEt;
   Float_t         fixedGridRhoFastjetAll;
   Float_t         fixedGridRhoFastjetCentral;
   Float_t         fixedGridRhoFastjetCentralCalo;
   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         fixedGridRhoFastjetCentralNeutral;
   UInt_t          nGenDressedLepton;
   Float_t         GenDressedLepton_eta[99];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_mass[99];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_phi[99];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_pt[99];   //[nGenDressedLepton]
   Int_t           GenDressedLepton_pdgId[99];   //[nGenDressedLepton]
   Bool_t          GenDressedLepton_hasTauAnc[99];   //[nGenDressedLepton]
   UInt_t          nSoftActivityJet;
   Float_t         SoftActivityJet_eta[99];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_phi[99];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_pt[99];   //[nSoftActivityJet]
   Float_t         SoftActivityJetHT;
   Float_t         SoftActivityJetHT10;
   Float_t         SoftActivityJetHT2;
   Float_t         SoftActivityJetHT5;
   Int_t           SoftActivityJetNjets10;
   Int_t           SoftActivityJetNjets2;
   Int_t           SoftActivityJetNjets5;
   UInt_t          nSubJet;
   Float_t         SubJet_btagCSVV2[99];   //[nSubJet]
   Float_t         SubJet_btagDeepB[99];   //[nSubJet]
   Float_t         SubJet_eta[99];   //[nSubJet]
   Float_t         SubJet_mass[99];   //[nSubJet]
   Float_t         SubJet_n2b1[99];   //[nSubJet]
   Float_t         SubJet_n3b1[99];   //[nSubJet]
   Float_t         SubJet_phi[99];   //[nSubJet]
   Float_t         SubJet_pt[99];   //[nSubJet]
   Float_t         SubJet_rawFactor[99];   //[nSubJet]
   Float_t         SubJet_tau1[99];   //[nSubJet]
   Float_t         SubJet_tau2[99];   //[nSubJet]
   Float_t         SubJet_tau3[99];   //[nSubJet]
   Float_t         SubJet_tau4[99];   //[nSubJet]
   UInt_t          nTau;
   Float_t         Tau_chargedIso[99];   //[nTau]
   Float_t         Tau_dxy[99];   //[nTau]
   Float_t         Tau_dz[99];   //[nTau]
   Float_t         Tau_eta[99];   //[nTau]
   Float_t         Tau_leadTkDeltaEta[99];   //[nTau]
   Float_t         Tau_leadTkDeltaPhi[99];   //[nTau]
   Float_t         Tau_leadTkPtOverTauPt[99];   //[nTau]
   Float_t         Tau_mass[99];   //[nTau]
   Float_t         Tau_neutralIso[99];   //[nTau]
   Float_t         Tau_phi[99];   //[nTau]
   Float_t         Tau_photonsOutsideSignalCone[99];   //[nTau]
   Float_t         Tau_pt[99];   //[nTau]
   Float_t         Tau_puCorr[99];   //[nTau]
   Int_t           Tau_charge[99];   //[nTau]
   Int_t           Tau_decayMode[99];   //[nTau]
   Int_t           Tau_jetIdx[99];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSe[99];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSjet[99];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSmu[99];   //[nTau]
   Float_t         TkMET_phi;
   Float_t         TkMET_pt;
   Float_t         TkMET_sumEt;
   UInt_t          nTrigObj;
   Float_t         TrigObj_pt[99];   //[nTrigObj]
   Float_t         TrigObj_eta[99];   //[nTrigObj]
   Float_t         TrigObj_phi[99];   //[nTrigObj]
   Float_t         TrigObj_l1pt[99];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[99];   //[nTrigObj]
   Float_t         TrigObj_l2pt[99];   //[nTrigObj]
   Int_t           TrigObj_id[99];   //[nTrigObj]
   Int_t           TrigObj_l1iso[99];   //[nTrigObj]
   Int_t           TrigObj_l1charge[99];   //[nTrigObj]
   Int_t           TrigObj_filterBits[99];   //[nTrigObj]
   Int_t           genTtbarId;
   UInt_t          nOtherPV;
   Float_t         OtherPV_z[99];   //[nOtherPV]
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           PV_npvs;
   Int_t           PV_npvsGood;
   UInt_t          nSV;
   Float_t         SV_dlen[99];   //[nSV]
   Float_t         SV_dlenSig[99];   //[nSV]
   Float_t         SV_pAngle[99];   //[nSV]
   Int_t           Electron_genPartIdx[99];   //[nElectron]
   UChar_t         Electron_genPartFlav[99];   //[nElectron]
   Int_t           GenJetAK8_partonFlavour[99];   //[nGenJetAK8]
   UChar_t         GenJetAK8_hadronFlavour[99];   //[nGenJetAK8]
   Int_t           GenJet_partonFlavour[99];   //[nGenJet]
   UChar_t         GenJet_hadronFlavour[99];   //[nGenJet]
   Int_t           Jet_genJetIdx[99];   //[nJet]
   Int_t           Jet_hadronFlavour[99];   //[nJet]
   Int_t           Jet_partonFlavour[99];   //[nJet]
   Int_t           Muon_genPartIdx[99];   //[nMuon]
   UChar_t         Muon_genPartFlav[99];   //[nMuon]
   Int_t           Photon_genPartIdx[99];   //[nPhoton]
   UChar_t         Photon_genPartFlav[99];   //[nPhoton]
   Float_t         MET_fiducialGenPhi;
   Float_t         MET_fiducialGenPt;
   UChar_t         Electron_cleanmask[99];   //[nElectron]
   UChar_t         Jet_cleanmask[99];   //[nJet]
   UChar_t         Muon_cleanmask[99];   //[nMuon]
   UChar_t         Photon_cleanmask[99];   //[nPhoton]
   UChar_t         Tau_cleanmask[99];   //[nTau]
   Float_t         SV_chi2[99];   //[nSV]
   Float_t         SV_eta[99];   //[nSV]
   Float_t         SV_mass[99];   //[nSV]
   Float_t         SV_ndof[99];   //[nSV]
   Float_t         SV_phi[99];   //[nSV]
   Float_t         SV_pt[99];   //[nSV]
   Float_t         SV_x[99];   //[nSV]
   Float_t         SV_y[99];   //[nSV]
   Float_t         SV_z[99];   //[nSV]
   Int_t           Tau_genPartIdx[99];   //[nTau]
   UChar_t         Tau_genPartFlav[99];   //[nTau]
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_HBHENoiseIsoFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
   Bool_t          Flag_CSCTightHalo2015Filter;
   Bool_t          Flag_globalTightHalo2016Filter;
   Bool_t          Flag_globalSuperTightHalo2016Filter;
   Bool_t          Flag_HcalStripHaloFilter;
   Bool_t          Flag_hcalLaserEventFilter;
   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
   Bool_t          Flag_ecalBadCalibFilter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_ecalLaserCorrFilter;
   Bool_t          Flag_trkPOGFilters;
   Bool_t          Flag_chargedHadronTrackResolutionFilter;
   Bool_t          Flag_muonBadTrackFilter;
   Bool_t          Flag_BadChargedCandidateFilter;
   Bool_t          Flag_BadPFMuonFilter;
   Bool_t          Flag_BadPFMuonDzFilter;
   Bool_t          Flag_hfNoisyHitsFilter;
   Bool_t          Flag_BadChargedCandidateSummer16Filter;
   Bool_t          Flag_BadPFMuonSummer16Filter;
   Bool_t          Flag_trkPOG_manystripclus53X;
   Bool_t          Flag_trkPOG_toomanystripclus53X;
   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
   Bool_t          Flag_METFilters;
   Bool_t          HLT_Ele27_WPTight_Gsf;
   Bool_t          HLT_ECALHT800;
   Bool_t          HLT_Photon110EB_TightID_TightIso;
   Bool_t          HLT_Photon165_HE10;
   Bool_t          HLT_Photon165_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon175;
   Bool_t          HLT_Photon200;
   Bool_t          HLT_Photon250_NoHE;
   Bool_t          HLT_Photon300_NoHE;
   Bool_t          HLT_Photon500;
   Bool_t          HLT_Photon600;
   //Bool_t          HLT_AK8PFJet360_TrimMass30;
   //Bool_t          HLT_AK8PFJet400_TrimMass30;
   Bool_t          HLT_AK8PFJet500;
   Bool_t          HLT_PFJet450;
   Bool_t          HLT_PFJet500;
   Bool_t          HLT_PFHT900;
   Bool_t          HLT_PFMET170_HBHECleaned;
   Bool_t          HLT_PFMET170_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMET200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          L1Reco_step;
   Bool_t          L1_AlwaysTrue;
   Float_t         Gluino_mass;
   Float_t         Neutralino_mass;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_CaloMET_phi;   //!
   TBranch        *b_CaloMET_pt;   //!
   TBranch        *b_CaloMET_sumEt;   //!
   TBranch        *b_ChsMET_phi;   //!
   TBranch        *b_ChsMET_pt;   //!
   TBranch        *b_ChsMET_sumEt;   //!
   TBranch        *b_nCorrT1METJet;   //!
   TBranch        *b_CorrT1METJet_area;   //!
   TBranch        *b_CorrT1METJet_eta;   //!
   TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
   TBranch        *b_CorrT1METJet_phi;   //!
   TBranch        *b_CorrT1METJet_rawPt;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_deltaEtaSC;   //!
   TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_Electron_dr03TkSumPt;   //!
   TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_eCorr;   //!
   TBranch        *b_Electron_eInvMinusPInv;   //!
   TBranch        *b_Electron_energyErr;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_hoe;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_jetPtRelv2;   //!
   TBranch        *b_Electron_jetRelIso;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_miniPFRelIso_all;   //!
   TBranch        *b_Electron_miniPFRelIso_chg;   //!
   TBranch        *b_Electron_mvaSpring16GP;   //!
   TBranch        *b_Electron_mvaSpring16HZZ;   //!
   TBranch        *b_Electron_pfRelIso03_all;   //!
   TBranch        *b_Electron_pfRelIso03_chg;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_r9;   //!
   TBranch        *b_Electron_sieie;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_mvaTTH;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_cutBased;   //!
   TBranch        *b_Electron_cutBased_HLTPreSel;   //!
   TBranch        *b_Electron_cutBased_Spring15;   //!
   TBranch        *b_Electron_cutBased_Sum16;   //!
   TBranch        *b_Electron_jetIdx;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_photonIdx;   //!
   TBranch        *b_Electron_tightCharge;   //!
   TBranch        *b_Electron_vidNestedWPBitmap;   //!
   TBranch        *b_Electron_vidNestedWPBitmapSpring15;   //!
   TBranch        *b_Electron_vidNestedWPBitmapSum16;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_cutBased_HEEP;   //!
   TBranch        *b_Electron_isPFcand;   //!
   TBranch        *b_Electron_lostHits;   //!
   TBranch        *b_Electron_mvaSpring16GP_WP80;   //!
   TBranch        *b_Electron_mvaSpring16GP_WP90;   //!
   TBranch        *b_Electron_mvaSpring16HZZ_WPL;   //!
   TBranch        *b_Electron_seedGain;   //!
   TBranch        *b_nFatJet;   //!
   TBranch        *b_FatJet_area;   //!
   TBranch        *b_FatJet_btagCSVV2;   //!
   TBranch        *b_FatJet_btagDDBvLV2;   //!
   TBranch        *b_FatJet_btagDDCvBV2;   //!
   TBranch        *b_FatJet_btagDDCvLV2;   //!
   TBranch        *b_FatJet_btagDeepB;   //!
   TBranch        *b_FatJet_btagHbb;   //!
   TBranch        *b_FatJet_deepTagMD_H4qvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_HbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_TvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_WvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHccvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_bbvsLight;   //!
   TBranch        *b_FatJet_deepTagMD_ccvsLight;   //!
   TBranch        *b_FatJet_deepTag_H;   //!
   TBranch        *b_FatJet_deepTag_QCD;   //!
   TBranch        *b_FatJet_deepTag_QCDothers;   //!
   TBranch        *b_FatJet_deepTag_TvsQCD;   //!
   TBranch        *b_FatJet_deepTag_WvsQCD;   //!
   TBranch        *b_FatJet_deepTag_ZvsQCD;   //!
   TBranch        *b_FatJet_eta;   //!
   TBranch        *b_FatJet_mass;   //!
   TBranch        *b_FatJet_msoftdrop;   //!
   TBranch        *b_FatJet_msoftdrop_nom;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jerUp;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jerDown;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jesTotalUp;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jesTotalDown;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jmrUp;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jmrDown;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jmsUp;   //[nFatJet]
   TBranch        *b_FatJet_msoftdrop_jmsDown;   //[nFatJet]
   TBranch        *b_FatJet_n2b1;   //!
   TBranch        *b_FatJet_n3b1;   //!
   TBranch        *b_FatJet_particleNetMD_Xbb;
   TBranch        *b_FatJet_particleNetMD_Xcc;   //[nFatJet]
   TBranch        *b_FatJet_particleNetMD_QCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_H4qvsQCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_HbbvsQCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_HccvsQCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_QCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_TvsQCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_WvsQCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_ZvsQCD;   //[nFatJet]
   TBranch        *b_FatJet_particleNet_mass;
   TBranch        *b_FatJet_phi;   //!
   TBranch        *b_FatJet_pt;   //!
   TBranch        *b_FatJet_pt_nom;   //[nJet]
   TBranch        *b_FatJet_pt_jerUp;   //[nJet]
   TBranch        *b_FatJet_pt_jerDown;   //[nJet]
   TBranch        *b_FatJet_pt_jesTotalUp;   //[nJet]
   TBranch        *b_FatJet_pt_jesTotalDown;   //[nJet]
   TBranch        *b_FatJet_rawFactor;   //!
   TBranch        *b_FatJet_tau1;   //!
   TBranch        *b_FatJet_tau2;   //!
   TBranch        *b_FatJet_tau3;   //!
   TBranch        *b_FatJet_tau4;   //!
   TBranch        *b_FatJet_jetId;   //!
   TBranch        *b_FatJet_subJetIdx1;   //!
   TBranch        *b_FatJet_subJetIdx2;   //!
   TBranch        *b_FatJet_genJetAK8Idx;   //!
   TBranch        *b_FatJet_hadronFlavour;   //!
   TBranch        *b_nGenJetAK8;   //!
   TBranch        *b_GenJetAK8_eta;   //!
   TBranch        *b_GenJetAK8_mass;   //!
   TBranch        *b_GenJetAK8_phi;   //!
   TBranch        *b_GenJetAK8_pt;   //!
   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_pt;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_nSubGenJetAK8;   //!
   TBranch        *b_SubGenJetAK8_eta;   //!
   TBranch        *b_SubGenJetAK8_mass;   //!
   TBranch        *b_SubGenJetAK8_phi;   //!
   TBranch        *b_SubGenJetAK8_pt;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_nGenVisTau;   //!
   TBranch        *b_GenVisTau_eta;   //!
   TBranch        *b_GenVisTau_mass;   //!
   TBranch        *b_GenVisTau_phi;   //!
   TBranch        *b_GenVisTau_pt;   //!
   TBranch        *b_GenVisTau_charge;   //!
   TBranch        *b_GenVisTau_genPartIdxMother;   //!
   TBranch        *b_GenVisTau_status;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_puAutoWeight;
   TBranch        *b_puAutoWeightUp;
   TBranch        *b_puAutoWeightDown;
   TBranch        *b_puWeight;
   TBranch        *b_puWeightUp;
   TBranch        *b_puWeightDown;
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nIsoTrack;   //!
   TBranch        *b_IsoTrack_dxy;   //!
   TBranch        *b_IsoTrack_dz;   //!
   TBranch        *b_IsoTrack_eta;   //!
   TBranch        *b_IsoTrack_pfRelIso03_all;   //!
   TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
   TBranch        *b_IsoTrack_phi;   //!
   TBranch        *b_IsoTrack_pt;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
   TBranch        *b_IsoTrack_fromPV;   //!
   TBranch        *b_IsoTrack_pdgId;   //!
   TBranch        *b_IsoTrack_isHighPurityTrack;   //!
   TBranch        *b_IsoTrack_isPFcand;   //!
   TBranch        *b_IsoTrack_isFromLostTrack;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_btagCSVV2;   //!
   TBranch        *b_Jet_btagDeepB;   //!
   TBranch        *b_Jet_btagDeepFlavB;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_mass_nom;   //!
   TBranch        *b_Jet_mass_jerUp;   //[nJet]
   TBranch        *b_Jet_mass_jerDown;   //[nJet]
   TBranch        *b_Jet_mass_jesTotalUp;   //[nJet]
   TBranch        *b_Jet_mass_jesTotalDown;   //[nJet]
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_muonSubtrFactor;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_pt_nom;   //[nJet]
   TBranch        *b_Jet_pt_raw;   //[nJet]
   TBranch        *b_Jet_pt_jerUp;   //[nJet]
   TBranch        *b_Jet_pt_jerDown;   //[nJet]
   TBranch        *b_Jet_pt_jesTotalUp;   //[nJet]
   TBranch        *b_Jet_pt_jesTotalDown;   //[nJet]
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_rawFactor;   //!
   TBranch        *b_Jet_bRegCorr;   //!
   TBranch        *b_Jet_bRegRes;   //!
   TBranch        *b_Jet_electronIdx1;   //!
   TBranch        *b_Jet_electronIdx2;   //!
   TBranch        *b_Jet_jetId;   //!
   TBranch        *b_Jet_muonIdx1;   //!
   TBranch        *b_Jet_muonIdx2;   //!
   TBranch        *b_Jet_nConstituents;   //!
   TBranch        *b_Jet_nElectrons;   //!
   TBranch        *b_Jet_nMuons;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_L1PreFiringWeight_Dn;   //!
   TBranch        *b_L1PreFiringWeight_Nom;   //!
   TBranch        *b_L1PreFiringWeight_Up;   //!
   TBranch        *b_GenMET_phi;   //!
   TBranch        *b_GenMET_pt;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
   TBranch        *b_MET_covXX;   //!
   TBranch        *b_MET_covXY;   //!
   TBranch        *b_MET_covYY;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_T1_phi;
   TBranch        *b_MET_T1_phi_jerUp;
   TBranch        *b_MET_T1_phi_jerDown;
   TBranch        *b_MET_T1_phi_jesTotalUp;
   TBranch        *b_MET_T1_phi_jesTotalDown;
   TBranch        *b_MET_T1_phi_unclustEnUp;
   TBranch        *b_MET_T1_phi_unclustEnDown;
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_T1_pt;
   TBranch        *b_MET_T1_pt_jerUp;
   TBranch        *b_MET_T1_pt_jerDown;
   TBranch        *b_MET_T1_pt_jesTotalUp;
   TBranch        *b_MET_T1_pt_jesTotalDown;
   TBranch        *b_MET_T1_pt_unclustEnUp;
   TBranch        *b_MET_T1_pt_unclustEnDown;
   TBranch        *b_MET_significance;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_jetPtRelv2;   //!
   TBranch        *b_Muon_jetRelIso;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_miniPFRelIso_all;   //!
   TBranch        *b_Muon_miniPFRelIso_chg;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso03_chg;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_segmentComp;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_tkRelIso;   //!
   TBranch        *b_Muon_tunepRelPt;   //!
   TBranch        *b_Muon_mvaLowPt;   //!
   TBranch        *b_Muon_mvaTTH;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_jetIdx;   //!
   TBranch        *b_Muon_nStations;   //!
   TBranch        *b_Muon_nTrackerLayers;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_tightCharge;   //!
   TBranch        *b_Muon_highPtId;   //!
   TBranch        *b_Muon_inTimeMuon;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_looseId;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_mediumPromptId;   //!
   TBranch        *b_Muon_miniIsoId;   //!
   TBranch        *b_Muon_multiIsoId;   //!
   TBranch        *b_Muon_mvaId;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_softMvaId;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_nPhoton;   //!
   TBranch        *b_Photon_dEscaleUp;   //!
   TBranch        *b_Photon_dEscaleDown;   //!
   TBranch        *b_Photon_dEsigmaUp;   //!
   TBranch        *b_Photon_dEsigmaDown;   //!
   TBranch        *b_Photon_eCorr;   //!
   TBranch        *b_Photon_energyErr;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_hoe;   //!
   TBranch        *b_Photon_mass;   //!
   TBranch        *b_Photon_mvaID;   //!
   TBranch        *b_Photon_mvaID17;   //!
   TBranch        *b_Photon_pfRelIso03_all;   //!
   TBranch        *b_Photon_pfRelIso03_chg;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_r9;   //!
   TBranch        *b_Photon_sieie;   //!
   TBranch        *b_Photon_charge;   //!
   TBranch        *b_Photon_cutBased;   //!
   TBranch        *b_Photon_electronIdx;   //!
   TBranch        *b_Photon_jetIdx;   //!
   TBranch        *b_Photon_pdgId;   //!
   TBranch        *b_Photon_vidNestedWPBitmap;   //!
   TBranch        *b_Photon_electronVeto;   //!
   TBranch        *b_Photon_isScEtaEB;   //!
   TBranch        *b_Photon_isScEtaEE;   //!
   TBranch        *b_Photon_mvaID17_WP80;   //!
   TBranch        *b_Photon_mvaID17_WP90;   //!
   TBranch        *b_Photon_mvaID_WP80;   //!
   TBranch        *b_Photon_mvaID_WP90;   //!
   TBranch        *b_Photon_pixelSeed;   //!
   TBranch        *b_Photon_seedGain;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_PuppiMET_phi;   //!
   TBranch        *b_PuppiMET_pt;   //!
   TBranch        *b_PuppiMET_sumEt;   //!
   TBranch        *b_RawMET_phi;   //!
   TBranch        *b_RawMET_pt;   //!
   TBranch        *b_RawMET_sumEt;   //!
   TBranch        *b_fixedGridRhoFastjetAll;   //!
   TBranch        *b_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nGenDressedLepton;   //!
   TBranch        *b_GenDressedLepton_eta;   //!
   TBranch        *b_GenDressedLepton_mass;   //!
   TBranch        *b_GenDressedLepton_phi;   //!
   TBranch        *b_GenDressedLepton_pt;   //!
   TBranch        *b_GenDressedLepton_pdgId;   //!
   TBranch        *b_GenDressedLepton_hasTauAnc;   //!
   TBranch        *b_nSoftActivityJet;   //!
   TBranch        *b_SoftActivityJet_eta;   //!
   TBranch        *b_SoftActivityJet_phi;   //!
   TBranch        *b_SoftActivityJet_pt;   //!
   TBranch        *b_SoftActivityJetHT;   //!
   TBranch        *b_SoftActivityJetHT10;   //!
   TBranch        *b_SoftActivityJetHT2;   //!
   TBranch        *b_SoftActivityJetHT5;   //!
   TBranch        *b_SoftActivityJetNjets10;   //!
   TBranch        *b_SoftActivityJetNjets2;   //!
   TBranch        *b_SoftActivityJetNjets5;   //!
   TBranch        *b_nSubJet;   //!
   TBranch        *b_SubJet_btagCSVV2;   //!
   TBranch        *b_SubJet_btagDeepB;   //!
   TBranch        *b_SubJet_eta;   //!
   TBranch        *b_SubJet_mass;   //!
   TBranch        *b_SubJet_n2b1;   //!
   TBranch        *b_SubJet_n3b1;   //!
   TBranch        *b_SubJet_phi;   //!
   TBranch        *b_SubJet_pt;   //!
   TBranch        *b_SubJet_rawFactor;   //!
   TBranch        *b_SubJet_tau1;   //!
   TBranch        *b_SubJet_tau2;   //!
   TBranch        *b_SubJet_tau3;   //!
   TBranch        *b_SubJet_tau4;   //!
   TBranch        *b_nTau;   //!
   TBranch        *b_Tau_chargedIso;   //!
   TBranch        *b_Tau_dxy;   //!
   TBranch        *b_Tau_dz;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_leadTkDeltaEta;   //!
   TBranch        *b_Tau_leadTkDeltaPhi;   //!
   TBranch        *b_Tau_leadTkPtOverTauPt;   //!
   TBranch        *b_Tau_mass;   //!
   TBranch        *b_Tau_neutralIso;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_photonsOutsideSignalCone;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_puCorr;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_decayMode;   //!
   TBranch        *b_Tau_jetIdx;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSe;
   TBranch        *b_Tau_idDeepTau2017v2p1VSjet;
   TBranch        *b_Tau_idDeepTau2017v2p1VSmu;
   TBranch        *b_TkMET_phi;   //!
   TBranch        *b_TkMET_pt;   //!
   TBranch        *b_TkMET_sumEt;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_genTtbarId;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_dlen;   //!
   TBranch        *b_SV_dlenSig;   //!
   TBranch        *b_SV_pAngle;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_GenJetAK8_partonFlavour;   //!
   TBranch        *b_GenJetAK8_hadronFlavour;   //!
   TBranch        *b_GenJet_partonFlavour;   //!
   TBranch        *b_GenJet_hadronFlavour;   //!
   TBranch        *b_Jet_genJetIdx;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_Photon_genPartIdx;   //!
   TBranch        *b_Photon_genPartFlav;   //!
   TBranch        *b_MET_fiducialGenPhi;   //!
   TBranch        *b_MET_fiducialGenPt;   //!
   TBranch        *b_Electron_cleanmask;   //!
   TBranch        *b_Jet_cleanmask;   //!
   TBranch        *b_Muon_cleanmask;   //!
   TBranch        *b_Photon_cleanmask;   //!
   TBranch        *b_Tau_cleanmask;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_x;   //!
   TBranch        *b_SV_y;   //!
   TBranch        *b_SV_z;   //!
   TBranch        *b_Tau_genPartIdx;   //!
   TBranch        *b_Tau_genPartFlav;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadPFMuonDzFilter;   //!
   TBranch        *b_Flag_hfNoisyHitsFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf;
   TBranch        *b_HLT_ECALHT800;
   TBranch        *b_HLT_Photon165_HE10;
   TBranch        *b_HLT_Photon110EB_TightID_TightIso;
   TBranch        *b_HLT_Photon165_R9Id90_HE10_IsoM;
   TBranch        *b_HLT_Photon175;
   TBranch        *b_HLT_Photon200;
   TBranch        *b_HLT_Photon250_NoHE;
   TBranch        *b_HLT_Photon300_NoHE;
   TBranch        *b_HLT_Photon500;
   TBranch        *b_HLT_Photon600;
   //TBranch        *b_HLT_AK8PFJet360_TrimMass30;
   //TBranch        *b_HLT_AK8PFJet400_TrimMass30;
   TBranch        *b_HLT_AK8PFJet500;
   TBranch        *b_HLT_PFJet450;
   TBranch        *b_HLT_PFJet500;
   TBranch        *b_HLT_PFHT900;
   TBranch        *b_HLT_PFMET170_HBHECleaned;
   TBranch        *b_HLT_PFMET170_HBHE_BeamHaloCleaned;
   TBranch        *b_HLT_PFMET200_HBHE_BeamHaloCleaned;
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
   TBranch        *b_L1Reco_step;
   TBranch        *b_L1_AlwaysTrue;
   TBranch        *b_Gluino_mass;
   TBranch        *b_Neutralino_mass;

   //Added
   //double BtagDDBvLWP[4][5]={{0.004,0.018,0.158,0.282,0.630},{0.004,0.018,0.158,0.282,0.630},{0.004,0.018,0.158,0.282,0.630},{0.004,0.018,0.158,0.282,0.630}};
   //from v10 version here: https://cms.cern.ch/iCMS/jsp/db_notes/noteInfo.jsp?cmsnoteid=CMS%20AN-2021/005 Table 19, the 2 highest WPs are just arbitrery
   double BtagDDBvLWP[4][5]={{0.0256,0.118,0.2739,0.282,0.630},{0.027,0.1213,0.2786,0.282,0.630},{0.0404,0.1566,0.3154,0.382,0.630},{0.0399,0.1566,0.314,0.382,0.630}};
   double BtagDeepWP[4][3]={{0.0508,0.2598,0.6502},{0.0480,0.2489,0.6377},{0.0532,0.3040,0.7476},{0.0490,0.2783,0.7100}};
   //from v10 version here: https://cms.cern.ch/iCMS/jsp/db_notes/noteInfo.jsp?cmsnoteid=CMS%20AN-2021/005 Table 18
   double BtagParticleNetWP[4][3]={{0.9088,0.9737,0.9883},{0.9137,0.9735,0.9883},{0.9105,0.9714,0.987},{0.9172,0.9734,0.988}};
   std::string output_file="default", btag_file="";
   unsigned int nFiles=0;
   int _ABCD=0;
   bool _fastSim=false;
   int _fakeRate=0;
   int _testRun=0;
   bool isData=true;
   bool is_quiet=false;
   bool is_debug=false;
   bool TopControl=false;//R
   bool OverlapCorrection=false;//R
   bool signalstudy=false;
   bool SignalScan=false;
   bool CountSignal=false;
   int SignalScenario=0;
   bool is_goodpair=false;
   bool _is_signalPointTree=false;
   bool is_treemass =false;
   bool isParticleNet=false;
   vector<string> _cut_variable, _cut_operator;
   vector<double> _cut_value;
   //For cuts
   int nPassPhoL=-1, nPassPhoM=-1, nPassPhoT=-1, nPassPhoMVA80=-1, nPassPhoMVA90=-1;
   int nPassAK4=-1, nPassAK8=-1, nonHiggsJet=-1, noHmass_in_event=0;
   int nPassEleV=-1, nPassEleL=-1, nPassEleM=-1, nPassEleT=-1, nPassEleNO=-1;
   int nPassFREleL=0, nPassFREleM=0, nPassFREleT=0;
   int nPassElePhoL=0, nPassElePhoM=0, nPassElePhoT=0, nPassElePhoMVA80=-1, nPassElePhoMVA90=-1;
   int nPassMuL=-1, nPassMuM=-1, nPassMuT=-1, nPassMuNO=-1;
   int nPassTauL=-1, nPassTauM=-1, nPassTauT=-1, nPassIso=-1;
   int nPassLepL=-1, nPassLepM=-1, nPassLepT=-1;
   int nleadPho=-1, nleadElePho=-1, nleadEle=-1, nleadMu=-1, nleadTau=-1;
   int nleadFREleL=-1, nleadFREleM=-1, nleadFREleT=-1;
   int nleadEleV=-1, nleadEleL=-1, nleadEleM=-1, nleadEleT=-1, nleadEleNO=-1;
   int nleadMuL=-1, nleadMuM=-1, nleadMuT=-1, nleadMuNO=-1;
   int nleadTauL=-1, nleadTauM=-1, nleadTauT=-1, nleadIso=-1;
   int bcounterDDBvL[6]={}, bcounterParticleNet[6]={}, bcounterDeep[4]={};
   int AK8Btag_selected=0, Deep_selected=0, Deep_medium_selected=0;
   bool L1prefire=false;
   bool passBtag=false, passHiggsMass=false;
   bool passAK4Btag1=false, passAK4Btag2=false, passAK4HiggsMass=false;
   bool notAK4=true, OneOr2jet=false;
   bool Hbb=false;
   int mcLeptonFilter=0;
   int SignalHiggs=0, SignalZ=0;
   double HT_before=0, EMHT_before=0, HT_after=0, EMHT_after=0;
   double AK8HT_before=0, AK8EMHT_before=0, AK8HT_after=0, AK8EMHT_after=0;
   double AK8btag_SF[3][3]={{1,1,1},{1,1,1},{1,1,1}};
   double pho_SF[5]={1,1,1,1,1}, ele_SF[4]={1,1,1,1}, mu_SF[3]={1,1,1}, tau_SF[3]={1,1,1};
   double pho_SF_ID[2]={1,1}, pho_SF_pix[2]={1,1};
   double ele_VETOSF=1;
   Double_t TotalEvents=0;
   string year="";
   int AK8btag_whichSF=0, Deep_whichSF=0;
   int JES_whichSF=0, JER_whichSF=0, UES_whichSF=0, JMR_whichSF=0, JMS_whichSF=0, ISR_whichSF=0;
   int phoID_whichSF=0, phoPix_whichSF=0, eleID_whichSF=0, eleRec_whichSF=0, muID_whichSF=0, muISO_whichSF=0, tau_whichSF=0, tauTES_whichSF=0;
   int L1prefire_whichSF=0, genMET_whichSF=0, PUweight_whichSF=0;
   int Egamma_scale_whichSF=0, Egamma_smear_whichSF=0;
   vector<string> evt_wgt_syst;
   unsigned int whichPhoton=0, whichElectron=1, whichMuon=0, whichTau=0;
   unsigned int ISR_MC=0;
   vector<double> phoET;
   double MET=0, ST=0, ST_G=0, MT=0;
   double dphi_met_jet=999, dphi_met_H_candidate=999, dphi_met_Hmin_candidate=999, dphi_met_btag=999, dphi_met_btags=999;
   double newMET=-1, newST=0, newST_G=0, newMT=0, ZMassDiff=1000, trueMET=-1, dphi_newmet_btag=999, dphi_newmet_btags=999; //R
   double e_pt=10, mu_pt=5, tau_pt=20;
   double w=0, xsec=1;
   double nonPrefiringProbability[3]={1,1,1};
   //histograms
   TH1D *h_cuts;
   map< pair<int, int>, TH1D* > m_cuts;
   TH1D *h_PUweight;
   //ABCD distribution histograms
   vector<TH3D*> abcd_histos;
   //histograms needed for SFs
   TH1D *h_ST_SF, *h_AK4_b_discr_SF, *h_AK8_b_discr_SF;
   TH2F *h_pho_EGamma_SF2D[5];
   TH2F *h_ele_EGamma_SF2D[4];
   TH2F *h_ele_EGamma_EffMC2D[4];
   TH2F *h_eleRec_EGamma_SF2D[2];
   TH2D *h_Scaling_Factors_HasPix_R9_high;
   TH2D *h_Scaling_Factors_HasPix_R9_low;
   TH1F *h_PixelSeed_ScaleFactors_2017[4];
   TH2D *h_PixelSeed_ScaleFactors_2018;
   TH2D *h_PixelSeed_ScaleFactors_2018_unc;
   TH2D *h_muID_SF2D[3];
   TH2D *h_muISO_SF2D[3];
   TF1  *tf1_tau_ID_SF[3];
   TH2D *h_L1prefire_phoMap;
   TH2D *h_L1prefire_jetMap;
   TF1 *muon_parametrization[12];
   TEfficiency* eff_b_Deep_L;
   TEfficiency* eff_b_Deep_M;
   TEfficiency* eff_b_Deep_T;
   TEfficiency* eff_c_Deep_L;
   TEfficiency* eff_c_Deep_M;
   TEfficiency* eff_c_Deep_T;
   TEfficiency* eff_l_Deep_L;
   TEfficiency* eff_l_Deep_M;
   TEfficiency* eff_l_Deep_T;
   TH1D *h_ISR_D;
   map< pair<int, int>, TH1D* > m_ISR_D;
   //histogram for Fake Rate
   TH2D *h2_FR;
   //hardcoded values for FR
   double _A=0.0308, _B=0.4942, _C=0.615192;
   vector<string> json_2016, json_2017, json_2018;
   map<pair<int,int>, unsigned long long> TotalEvents_Signal;

   string current_signal_point = "";
   Bool_t bl_current_signal_point = 0;
   TBranch* br_current_signal_point;

   Analyzer(TTree *tree=0);
   virtual ~Analyzer();
   Analyzer(vector<string> arg={"default"}, string outname={"default"}, string btag_fname={""}, double _xsec=0, string _year="", bool fastSim=false, int fakeRate=0, vector<string> cut_variable={}, vector<string> cut_operator={}, vector<double> cut_value={}, bool is_q=0, bool is_d=0, bool is_signalscan=0, bool is_signalstudy=0, bool is_countSignal=0, int testrun=0, map<string,int> systematics={}, map<string,double> leptonpts={}, int ABCD=0, bool _goodpair=0, bool is_signalPointTree=0, bool _isParticleNet=0, bool is_topControl=0, bool is_Overlap=0);
   virtual Int_t    Cut(Long64_t entry,pair<int,int> mass_pair,bool debug);
   map<int,vector<int>> init_scan_histos(TFile *outFile, bool signalstudy, int SignalScenario);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Get_total_sum(TChain *tree, int SignalScenario=0);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   void             Systematics(map<string, int> systematics);
   void             init_syst_histograms(map<string,THnD*>& syst_THn_AK4, map<string,TH1D*>& syst_TH1_AK4, map<string,THnD*>& syst_THn_AK8, map<string,TH1D*>& syst_TH1_AK8);
   void             fill_syst_histo_THn(map<string,THnD*>& syst_THn, const double* fill, double weight);
   void             fill_syst_histo_TH1(map<string,THnD*>& syst_THn, map<string,TH1D*>& syst_TH1);
   double           deltaR(double phi1, double phi2, double eta1, double eta2);
   double           deltaPhi(double phi1, double phi2);
   float            Photon_SCEta(const int);
   float            Photon_SCEta_Zonly(const int);
   void             CalcBtagSF_AK8(double pt, char tag);
   double           UpdateBtags(std::unique_ptr<CorrectionSet> & cset, bool debug, int i, double pt, BTCalibrationReader fastreader_L, BTCalibrationReader fastreader_M, BTCalibrationReader fastreader_T, std::unique_ptr<TRandom3> &gen);
   void             Sort(vector<pair<int,int>> &v, vector<float> *b, vector<float> *bb, unsigned int operation);
   void             SelectAK4(vector<pair<int,int>> v, vector<float> *eta, vector<float> *phi, vector<float> *b, vector<float> *bb, vector<float> en, vector<float> pt, vector<int> ak4_hjets, vector<bool> &ak4selected, vector<int> &ak4trueselected);
   void             FillAK4tagging(vector<bool> ak4selected, vector<int> ak4trueselected, bool (&MassBtagAK4)[6], int (&true_higgsak4jet)[7]);
   virtual Bool_t   IsGoldEvent(UInt_t run, UInt_t LS);
   void             OverFill(TH1D *h, double x, double w);
   void             OverFill(TH2D *h, double x, double y, double w);
   void             set_ABCD_histo(TH1D *h);
   string           GetSignalPoint(Long64_t ientry, bool debug=0);
   double           CalcL1PreFire(int syst=0);
   double           getPrefiringRateMuon(double eta, double phi, double pt, int syst=0);
};

#endif

#ifdef Analyzer_cxx
Analyzer::Analyzer(vector<string> arg, string outname, string btag_fname, double _xsec, string _year, bool fastSim, int fakeRate, vector<string> cut_variable, vector<string> cut_operator, vector<double> cut_value, bool is_q, bool is_d, bool is_signalscan, bool is_signalstudy, bool is_countSignal, int testrun, map<string,int> systematics, map<string,double> leptonpts, int ABCD, bool _goodpair, bool is_signalPointTree, bool _isParticleNet, bool is_topControl, bool is_Overlap) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.

  _cut_variable=cut_variable;
  //determine which WP photons are cut on
  for (auto i : _cut_variable) {
    if (i=="nPassPhoM" || i=="nPassElePhoM") whichPhoton=1;
    if (i=="nPassPhoT" || i=="nPassElePhoT") whichPhoton=2;
    if (i=="nPassPhoMVA80" || i=="nPassElePhoMVA80") whichPhoton=3;
    if (i=="nPassPhoMVA90" || i=="nPassElePhoMVA90") whichPhoton=4;
    if (i=="nPassEleM") whichElectron=2;
    if (i=="nPassEleT") whichElectron=3;
    if (i=="nPassMuM") whichMuon=1;
    if (i=="nPassMuT") whichMuon=2;
    if (i=="nPassTauM") whichTau=1;
    if (i=="nPassTauT") whichTau=2;
    if (i=="nPassLepVLL") {whichElectron=0; whichMuon=0; whichTau=0;}
    if (i=="nPassLepMLL") {whichElectron=2; whichMuon=0; whichTau=0;}
    if (i=="nPassLepLLM") {whichElectron=1; whichMuon=0; whichTau=1;}
    if (i=="nPassLepLML") {whichElectron=1; whichMuon=1; whichTau=0;}
    if (i=="nPassLepMMM") {whichElectron=2; whichMuon=1; whichTau=1;}
    if (i=="nPassLepL") {whichElectron=1; whichMuon=0; whichTau=0;}
    if (i=="nPassLepM") {whichElectron=2; whichMuon=1; whichTau=1;}
    if (i=="nPassLepT") {whichElectron=3; whichMuon=2; whichTau=2;}
  }
  _cut_operator=cut_operator;
  _cut_value=cut_value;
  Systematics(systematics);
  //Determine lepton pt cuts

  for (auto const& x : leptonpts) {
    if (x.first=="e") e_pt=x.second;
    else if (x.first=="m") mu_pt=x.second;
    else if (x.first=="t") tau_pt=x.second;
    else cout<<"Unkown lepton type \""<<x.first<<"\""<<endl;
  }

  is_quiet=is_q;
  is_debug=is_d;
  signalstudy=is_signalstudy;
  SignalScan=is_signalscan;
  CountSignal=is_countSignal;
  TopControl=is_topControl;//R
  OverlapCorrection=is_Overlap;//R
  TTree *tree;
  TChain * ch = new TChain("EventTree","");
  TChain * ch_run = new TChain("Runs","");
  btag_file=btag_fname;
  if (_xsec) xsec=_xsec;
  if (_year!="") year=_year;
  if (fastSim) _fastSim=true;
  if (_isParticleNet) isParticleNet=true;
  if (ABCD) _ABCD=ABCD;
  if (_goodpair) is_goodpair=_goodpair;
  if (is_signalPointTree) _is_signalPointTree=1;
  if (fakeRate) _fakeRate=fakeRate;
  if (testrun) _testRun=testrun;
  if (outname=="" && !is_quiet) std::cout<<"No output filename is defined, using: Analyzer_histos.root"<<std::endl;
  if (outname!="") output_file=outname;
  if (arg.size()==0) {
    const char* fdefault = "/data/SUSYNANO/Nano1June2019/Data/2016/SinglePhoton_Run2016B_ver2/88877510-EB32-DD4C-ACAB-A8B99C65E6A3.root/Events";
    if (!is_quiet) std::cout<<"No input files are defined, using: "<<fdefault<<std::endl;
    ch->Add(fdefault);
    tree = ch;
  }
  else {
    string name=arg.at(0);
    if (name.find("T5qqqqHg_refPoints")!=std::string::npos) SignalScenario=3;//fullsim points
    else if (name.find("NanoAODv6")!=std::string::npos && name.find("T5qqqqHg")!=std::string::npos) SignalScenario=4;//nanoaodv6 fastsim
    else if (name.find("T5qqqqHg")!=std::string::npos) SignalScenario=1;
    else if (name.find("TChiNG_BF50N50G")!=std::string::npos) SignalScenario=5; //EW with all final states
    else if (name.find("TChiNG")!=std::string::npos) SignalScenario=2;
    if (is_debug && SignalScan) cout<<"SignalScenario "<<SignalScenario<<endl; 
    for (auto i : arg) {
      const char* cstr_i=i.c_str();
      std::string temp=i, temp_run=i;
      if (temp.find("*") != std::string::npos) {
        if (!is_quiet) cout<<"Wildcard found in input argument."<<endl;
        temp+="/Events"; temp_run+="/Runs";
        ch->Add(temp.c_str()); ch_run->Add(temp_run.c_str());
        continue;
      }
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(cstr_i);
      if (!f || !f->IsOpen()) f = new TFile(cstr_i);
      temp+="/Events"; temp_run+="/Runs";
      ch->Add(temp.c_str()); ch_run->Add(temp_run.c_str());
      f->Close();
    }
    nFiles=ch->GetNtrees();
    if (!is_quiet) cout<<nFiles<<" trees are read."<<endl; 
    tree = ch;
  }
  Get_total_sum(ch_run,SignalScenario);
  Init(tree);
  
  //Load golden json files
  if (is_debug) cout<<"Loading golden json files"<<endl;
  string json_fname[3]={"input/Cert_271036-284044_13TeV_Legacy2016_Collisions16_JSON.txt",
                        "input/Cert_294927-306462_13TeV_UL2017_Collisions17_GoldenJSON.txt",
                        "input/Cert_314472-325175_13TeV_Legacy2018_Collisions18_JSON.txt"};
 
  for (unsigned int i=0;i<3;i++) {
    ifstream json (json_fname[i]);
    if (json.is_open()) {
      string line;
      while(getline(json, line) ) (i==0) ? json_2016.push_back(line) : (i==1) ? json_2017.push_back(line) : json_2018.push_back(line);
      json.close();
    }
    else cout<<"Couldn't open golden json file "<<json_fname[i]<<endl;
  }
}

Analyzer::~Analyzer()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t Analyzer::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t Analyzer::LoadTree(Long64_t entry)
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

void Analyzer::Get_total_sum(TChain *tree, int SignalScenario){
  if (!SignalScenario) {
    TBranch *b_genEventSumw;
    Double_t sub_TotalEvents=0;
    string eventsum="genEventSumw";
    if (tree->GetBranch(eventsum.c_str())) {
      tree->SetBranchAddress(eventsum.c_str(), &sub_TotalEvents, &b_genEventSumw);
      if (is_debug) cout<<"Looping on Runs Tree to get total number of events"<<endl; 
      for (int i=0; i<tree->GetEntries();i++) {
        int ientry = tree->LoadTree(i);
        b_genEventSumw->GetEntry(ientry);
        TotalEvents+=sub_TotalEvents;
        if (is_debug) cout<<tree->GetCurrentFile()->GetName()<<" "<<i<<" "<<sub_TotalEvents<<endl;
      }
      if (is_debug) cout<<"Total unskimmed Events "<<TotalEvents<<endl;
    }
  }
  else if (_is_signalPointTree) {
    TObjArray *fileElements=tree->GetListOfFiles();
    TIter next(fileElements);
    TChainElement *chEl=0;
    while (( chEl=(TChainElement*)next() )) {
      TFile f(chEl->GetTitle());
      TTree *t = (TTree*)f.Get("Runs");
      int ientry = t->LoadTree(0);
      TIter next(t->GetListOfBranches());
      TKey *key;
      while ((key = (TKey*)next())) {
        string name = key->GetName();
        if (name.find("genEventCount")==string::npos) continue;
        TBranch *b; Long64_t value=0;
        t->SetBranchAddress(name.c_str(), &value, &b);
        int MG_tree=0, MN_tree=0;
        b->GetEntry(ientry);
        bool strong=0, eweak=0;
        if (name.find("T5qqqqHg")!=string::npos) strong =1;
        if (name.find("TChiNG")!=string::npos) eweak =1;
        if (strong) {
          int last = name.find_last_of('_');
          int snd_last = name.find_last_of('_',last-1);
          MG_tree = atoi(name.substr(snd_last+1,last-snd_last-1).c_str());
          MN_tree = atoi(name.substr(last+1,name.size()-last-1).c_str());
          pair<int,int> M(MG_tree,MN_tree);
          TotalEvents_Signal[M] += value;
          //if (is_debug) cout<<tree->GetCurrentFile()->GetName()<<" "<<i<<" mG "<<MG_tree<<" mN "<<MN_tree<<" events "<<value<<endl;
        }
        else if (eweak) {
          int last = name.find_last_of('_');
          MN_tree = 1;
          MG_tree = atoi(name.substr(last+1,name.size()-last-1).c_str());
          pair<int,int> M(MG_tree,MN_tree);
          TotalEvents_Signal[M] += value;
          //if (is_debug) cout<<tree->GetCurrentFile()->GetName()<<" "<<i<<" mG "<<MG_tree<<" mN "<<MN_tree<<" events "<<value<<endl;
        }
      }
      f.Close();
    }
    if (is_debug) {
      cout<<"Total Events for all mass points:"<<endl;
      for (auto& [key, value]: TotalEvents_Signal) cout<<"mG "<<key.first<<" mN "<<key.second<<" events "<<value<<endl;
    }
  }
}

string Analyzer::GetSignalPoint(Long64_t ientry, bool debug){
  string point="";
  bool recalculate = 1;
  if (current_signal_point.size()>0) {
    if (fChain->GetBranch(current_signal_point.c_str())) {
      fChain->SetBranchAddress(current_signal_point.c_str(), &bl_current_signal_point, &br_current_signal_point);
      br_current_signal_point->GetEntry(ientry);
      if (bl_current_signal_point) {
        recalculate = 0;
        point = current_signal_point;
      }
    }
  }
  if (recalculate) {
    TIter next(fChain->GetListOfBranches());
    TKey *key;
    while ((key = (TKey*)next())) {
      string name = key->GetName();
      //Example string: GenModel_T5qqqqHg_2200_2190
      if (name.find("GenModel")==string::npos) continue;
      TBranch *b; Bool_t value=0;
      fChain->SetBranchAddress(name.c_str(), &value, &b);
      b->GetEntry(ientry);
      if (value) {
        point = name;
        current_signal_point = name;
        break;
      }
    }
  }
  return point;
}

double getPrefiringRateEcal(double eta, double pt, TH2D* h_prefmap, int syst=0) {
  //Check pt is not above map overflow
  int nbinsy = h_prefmap->GetNbinsY();
  double maxy = h_prefmap->GetYaxis()->GetBinLowEdge(nbinsy + 1);
  if (pt >= maxy)
    pt = maxy - 0.01;
  int thebin = h_prefmap->FindBin(eta, pt);

  double prefrate = h_prefmap->GetBinContent(thebin);

  double statuncty = h_prefmap->GetBinError(thebin);
  double systuncty = 0.2 * prefrate;

  if (syst==1)
    prefrate = std::min(1., prefrate + sqrt(pow(statuncty, 2) + pow(systuncty, 2)));
  else if (syst==2)
    prefrate = std::max(0., prefrate - sqrt(pow(statuncty, 2) + pow(systuncty, 2)));
  return prefrate;
}

double Analyzer::getPrefiringRateMuon(double eta, double phi, double pt, int syst) {
  double prefrate=1;
  double statuncty;
  if ((year.find("2016") != std::string::npos) && (eta > 1.24 && eta < 1.6) && (phi > 2.44346 && phi < 2.79253)) {
    prefrate = muon_parametrization[11]->Eval(pt);
    statuncty = muon_parametrization[11]->GetParError(2);
  } else if (std::abs(eta) < 0.2) {
    prefrate = muon_parametrization[0]->Eval(pt);
    statuncty = muon_parametrization[0]->GetParError(2);
  } else if (std::abs(eta) < 0.3) {
    prefrate = muon_parametrization[1]->Eval(pt);
    statuncty = muon_parametrization[1]->GetParError(2);
  } else if (std::abs(eta) < 0.55) {
    prefrate = muon_parametrization[2]->Eval(pt);
    statuncty = muon_parametrization[2]->GetParError(2);
  } else if (std::abs(eta) < 0.83) {
    prefrate = muon_parametrization[3]->Eval(pt);
    statuncty = muon_parametrization[3]->GetParError(2);
  } else if (std::abs(eta) < 1.24) {
    prefrate = muon_parametrization[4]->Eval(pt);
    statuncty = muon_parametrization[4]->GetParError(2);
  } else if (std::abs(eta) < 1.4) {
    prefrate = muon_parametrization[5]->Eval(pt);
    statuncty = muon_parametrization[5]->GetParError(2);
  } else if (std::abs(eta) < 1.6) {
    prefrate = muon_parametrization[6]->Eval(pt);
    statuncty = muon_parametrization[6]->GetParError(2);
  } else if (std::abs(eta) < 1.8) {
    prefrate = muon_parametrization[7]->Eval(pt);
    statuncty = muon_parametrization[7]->GetParError(2);
  } else if (std::abs(eta) < 2.1) {
    prefrate = muon_parametrization[8]->Eval(pt);
    statuncty = muon_parametrization[8]->GetParError(2);
  } else if (std::abs(eta) < 2.25) {
    prefrate = muon_parametrization[9]->Eval(pt);
    statuncty = muon_parametrization[9]->GetParError(2);
  } else if (std::abs(eta) < 2.4) {
    prefrate = muon_parametrization[10]->Eval(pt);
    statuncty = muon_parametrization[10]->GetParError(2);
  } 
  double systuncty = 0.2 * prefrate;

  if (syst == 1) //up
    prefrate = std::min(1., prefrate + sqrt(pow(statuncty, 2) + pow(systuncty, 2)));
  else if (syst == 2) //down
    prefrate = std::max(0., prefrate - sqrt(pow(statuncty, 2) + pow(systuncty, 2)));
  else if (syst == 3) //upsyst
    prefrate = std::min(1., prefrate + systuncty);
  else if (syst == 4) //downsyst
    prefrate = std::max(0., prefrate - systuncty);
  else if (syst == 5) //upstat
    prefrate = std::min(1., prefrate + statuncty);
  else if (syst == 6) //downstat
    prefrate = std::max(0., prefrate - statuncty);

  return prefrate;
}

double Analyzer::CalcL1PreFire(int syst){
  //Probability for the event NOT to prefire, computed with the prefiring maps per object.
  //Up and down values correspond to the resulting value when shifting up/down all prefiring rates in prefiring maps.
  //syst 0: central, 1: up, 2: down
  //syst muon 0: central, 1: up, 2: down, 3: up stat, 4: down stat, 5: up syst, 6: down syst
  double nonPrefiringProbaECAL=1, nonPrefiringProbaMuon=1;

  if (year.find("2018")==std::string::npos) {
    for (unsigned int i=0;i<nPhoton;i++){
      double pt_gam = Photon_pt[i];
      double eta_gam = Photon_eta[i];
      if (pt_gam < 20. || abs(eta_gam) < 2 || abs(eta_gam) >3) continue;
      double prefiringprob_gam = getPrefiringRateEcal(eta_gam, pt_gam, h_L1prefire_phoMap, syst);
      nonPrefiringProbaECAL *= (1. - prefiringprob_gam);
    }
 
    //Now applying the prefiring maps to jets in the affected regions.
    for (unsigned int i=0;i<nJet;i++){
      double pt_jet = Jet_pt[i];
      double eta_jet = Jet_eta[i];
      double phi_jet = Jet_phi[i];
      if (pt_jet < 20. || abs(eta_jet) < 2. || abs(eta_jet) > 3. || Jet_muEF[i] > 0.5) continue;
      //Loop over photons to remove overlap
      double nonprefiringprobfromoverlappingphotons = 1.;
      bool foundOverlappingPhotons = false;
      for (unsigned int j=0;j<nPhoton;j++){
        double pt_gam = Photon_pt[j];
        double eta_gam = Photon_eta[j];
        double phi_gam = Photon_phi[j];
        if (pt_gam < 20. || abs(eta_gam) < 2 || abs(eta_gam) >3) continue;
        if (deltaR(phi_jet,phi_gam,eta_jet,eta_gam)>0.16) continue;
        double prefiringprob_gam = getPrefiringRateEcal(eta_gam, pt_gam, h_L1prefire_phoMap, syst);
        nonprefiringprobfromoverlappingphotons *= (1. - prefiringprob_gam);
        foundOverlappingPhotons = true;
      }
      double nonprefiringprobfromoverlappingjet = 1. - getPrefiringRateEcal(eta_jet, pt_jet, h_L1prefire_jetMap, syst);
 
      if (!foundOverlappingPhotons) nonPrefiringProbaECAL *= nonprefiringprobfromoverlappingjet;
      //If overlapping photons have a non prefiring rate larger than the jet, then replace these weights by the jet one
      else if (nonprefiringprobfromoverlappingphotons > nonprefiringprobfromoverlappingjet) {
        if (nonprefiringprobfromoverlappingphotons > 0.) nonPrefiringProbaECAL *= nonprefiringprobfromoverlappingjet / nonprefiringprobfromoverlappingphotons;
        else nonPrefiringProbaECAL = 0.;
      }
      //Last case: if overlapping photons have a non prefiring rate smaller than the jet, don't consider the jet in the event weight, and do nothing.
    }
  }
    
  //Now calculate prefiring weights for muons
  for (unsigned int i=0;i<nMuon;i++){
    double pt = Muon_pt[i];
    double phi = Muon_phi[i];
    double eta = Muon_eta[i];
    // Remove crappy tracker muons which would not have prefired the L1 trigger
    if (pt < 5 || !Muon_looseId[i]) continue;
    double prefiringprob_mu = getPrefiringRateMuon(eta, phi, pt, syst);
    nonPrefiringProbaMuon *= (1. - prefiringprob_mu);
  }

  // Calculate combined weight as product of the weight for individual objects
  return nonPrefiringProbaECAL * nonPrefiringProbaMuon;
}

void Analyzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
   
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);
   
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
   fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
   fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
   fChain->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
   fChain->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
   fChain->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
   fChain->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
   fChain->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
   fChain->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
   fChain->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
   fChain->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
   fChain->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   fChain->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
   fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
   fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
   fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
   fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
   fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
   fChain->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
   fChain->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
   fChain->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
   fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
   fChain->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
   fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
   fChain->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
   fChain->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
   fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
   fChain->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
   fChain->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
   if (fChain->GetBranch("Electron_mvaSpring16GP")) fChain->SetBranchAddress("Electron_mvaSpring16GP", Electron_mvaSpring16GP, &b_Electron_mvaSpring16GP);
   if (fChain->GetBranch("Electron_mvaSpring16HZZ")) fChain->SetBranchAddress("Electron_mvaSpring16HZZ", Electron_mvaSpring16HZZ, &b_Electron_mvaSpring16HZZ);
   fChain->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
   fChain->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
   fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
   fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
   fChain->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
   fChain->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
   fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
   fChain->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
   fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
   if (fChain->GetBranch("Electron_cutBased_HLTPreSel")) fChain->SetBranchAddress("Electron_cutBased_HLTPreSel", Electron_cutBased_HLTPreSel, &b_Electron_cutBased_HLTPreSel);
   if (fChain->GetBranch("Electron_cutBased_Spring15")) fChain->SetBranchAddress("Electron_cutBased_Spring15", Electron_cutBased_Spring15, &b_Electron_cutBased_Spring15);
   if (fChain->GetBranch("Electron_cutBased_Sum16")) fChain->SetBranchAddress("Electron_cutBased_Sum16", Electron_cutBased_Sum16, &b_Electron_cutBased_Sum16);
   fChain->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
   fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
   fChain->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
   fChain->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
   if (fChain->GetBranch("Electron_vidNestedWPBitmapSpring15")) fChain->SetBranchAddress("Electron_vidNestedWPBitmapSpring15", Electron_vidNestedWPBitmapSpring15, &b_Electron_vidNestedWPBitmapSpring15);
   if (fChain->GetBranch("Electron_vidNestedWPBitmapSum16")) fChain->SetBranchAddress("Electron_vidNestedWPBitmapSum16", Electron_vidNestedWPBitmapSum16, &b_Electron_vidNestedWPBitmapSum16);
   fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
   fChain->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
   fChain->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
   fChain->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
   if (fChain->GetBranch("Electron_mvaSpring16GP_WP80")) fChain->SetBranchAddress("Electron_mvaSpring16GP_WP80", Electron_mvaSpring16GP_WP80, &b_Electron_mvaSpring16GP_WP80);
   if (fChain->GetBranch("Electron_mvaSpring16GP_WP90")) fChain->SetBranchAddress("Electron_mvaSpring16GP_WP90", Electron_mvaSpring16GP_WP90, &b_Electron_mvaSpring16GP_WP90);
   if (fChain->GetBranch("Electron_mvaSpring16HZZ_WPL")) fChain->SetBranchAddress("Electron_mvaSpring16HZZ_WPL", Electron_mvaSpring16HZZ_WPL, &b_Electron_mvaSpring16HZZ_WPL);
   fChain->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
   fChain->SetBranchAddress("nFatJet", &nFatJet, &b_nFatJet);
   fChain->SetBranchAddress("FatJet_area", FatJet_area, &b_FatJet_area);
   fChain->SetBranchAddress("FatJet_btagCSVV2", FatJet_btagCSVV2, &b_FatJet_btagCSVV2);
   fChain->SetBranchAddress("FatJet_btagDDBvLV2", FatJet_btagDDBvLV2, &b_FatJet_btagDDBvLV2);
   fChain->SetBranchAddress("FatJet_btagDDCvBV2", FatJet_btagDDCvBV2, &b_FatJet_btagDDCvBV2);
   fChain->SetBranchAddress("FatJet_btagDDCvLV2", FatJet_btagDDCvLV2, &b_FatJet_btagDDCvLV2);
   fChain->SetBranchAddress("FatJet_btagDeepB", FatJet_btagDeepB, &b_FatJet_btagDeepB);
   fChain->SetBranchAddress("FatJet_btagHbb", FatJet_btagHbb, &b_FatJet_btagHbb);
   fChain->SetBranchAddress("FatJet_deepTagMD_H4qvsQCD", FatJet_deepTagMD_H4qvsQCD, &b_FatJet_deepTagMD_H4qvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD", FatJet_deepTagMD_HbbvsQCD, &b_FatJet_deepTagMD_HbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_TvsQCD", FatJet_deepTagMD_TvsQCD, &b_FatJet_deepTagMD_TvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_WvsQCD", FatJet_deepTagMD_WvsQCD, &b_FatJet_deepTagMD_WvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZHbbvsQCD", FatJet_deepTagMD_ZHbbvsQCD, &b_FatJet_deepTagMD_ZHbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZHccvsQCD", FatJet_deepTagMD_ZHccvsQCD, &b_FatJet_deepTagMD_ZHccvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZbbvsQCD", FatJet_deepTagMD_ZbbvsQCD, &b_FatJet_deepTagMD_ZbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZvsQCD", FatJet_deepTagMD_ZvsQCD, &b_FatJet_deepTagMD_ZvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_bbvsLight", FatJet_deepTagMD_bbvsLight, &b_FatJet_deepTagMD_bbvsLight);
   fChain->SetBranchAddress("FatJet_deepTagMD_ccvsLight", FatJet_deepTagMD_ccvsLight, &b_FatJet_deepTagMD_ccvsLight);
   fChain->SetBranchAddress("FatJet_deepTag_H", FatJet_deepTag_H, &b_FatJet_deepTag_H);
   fChain->SetBranchAddress("FatJet_deepTag_QCD", FatJet_deepTag_QCD, &b_FatJet_deepTag_QCD);
   fChain->SetBranchAddress("FatJet_deepTag_QCDothers", FatJet_deepTag_QCDothers, &b_FatJet_deepTag_QCDothers);
   fChain->SetBranchAddress("FatJet_deepTag_TvsQCD", FatJet_deepTag_TvsQCD, &b_FatJet_deepTag_TvsQCD);
   fChain->SetBranchAddress("FatJet_deepTag_WvsQCD", FatJet_deepTag_WvsQCD, &b_FatJet_deepTag_WvsQCD);
   fChain->SetBranchAddress("FatJet_deepTag_ZvsQCD", FatJet_deepTag_ZvsQCD, &b_FatJet_deepTag_ZvsQCD);
   fChain->SetBranchAddress("FatJet_eta", FatJet_eta, &b_FatJet_eta);
   fChain->SetBranchAddress("FatJet_mass", FatJet_mass, &b_FatJet_mass);
   fChain->SetBranchAddress("FatJet_msoftdrop", FatJet_msoftdrop, &b_FatJet_msoftdrop);
   fChain->SetBranchAddress("FatJet_msoftdrop_nom", FatJet_msoftdrop_nom, &b_FatJet_msoftdrop_nom);
   if (fChain->GetBranch("FatJet_msoftdrop_jerUp")) fChain->SetBranchAddress("FatJet_msoftdrop_jerUp", FatJet_msoftdrop_jerUp, &b_FatJet_msoftdrop_jerUp);
   if (fChain->GetBranch("FatJet_msoftdrop_jerDown")) fChain->SetBranchAddress("FatJet_msoftdrop_jerDown", FatJet_msoftdrop_jerDown, &b_FatJet_msoftdrop_jerDown);
   if (fChain->GetBranch("FatJet_msoftdrop_jesTotalUp")) fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalUp", FatJet_msoftdrop_jesTotalUp, &b_FatJet_msoftdrop_jesTotalUp);
   if (fChain->GetBranch("FatJet_msoftdrop_jesTotalDown")) fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalDown", FatJet_msoftdrop_jesTotalDown, &b_FatJet_msoftdrop_jesTotalDown);
   if (fChain->GetBranch("FatJet_msoftdrop_jmrUp")) fChain->SetBranchAddress("FatJet_msoftdrop_jmrUp", FatJet_msoftdrop_jmrUp, &b_FatJet_msoftdrop_jmrUp);
   if (fChain->GetBranch("FatJet_msoftdrop_jmrDown")) fChain->SetBranchAddress("FatJet_msoftdrop_jmrDown", FatJet_msoftdrop_jmrDown, &b_FatJet_msoftdrop_jmrDown);
   if (fChain->GetBranch("FatJet_msoftdrop_jmsUp")) fChain->SetBranchAddress("FatJet_msoftdrop_jmsUp", FatJet_msoftdrop_jmsUp, &b_FatJet_msoftdrop_jmsUp);
   if (fChain->GetBranch("FatJet_msoftdrop_jmsDown")) fChain->SetBranchAddress("FatJet_msoftdrop_jmsDown", FatJet_msoftdrop_jmsDown, &b_FatJet_msoftdrop_jmsDown);
   fChain->SetBranchAddress("FatJet_n2b1", FatJet_n2b1, &b_FatJet_n2b1);
   fChain->SetBranchAddress("FatJet_n3b1", FatJet_n3b1, &b_FatJet_n3b1);
   fChain->SetBranchAddress("FatJet_particleNetMD_Xbb", FatJet_particleNetMD_Xbb, &b_FatJet_particleNetMD_Xbb);
   fChain->SetBranchAddress("FatJet_particleNetMD_Xcc", FatJet_particleNetMD_Xcc, &b_FatJet_particleNetMD_Xcc);
   fChain->SetBranchAddress("FatJet_particleNetMD_QCD", FatJet_particleNetMD_QCD, &b_FatJet_particleNetMD_QCD);
   fChain->SetBranchAddress("FatJet_particleNet_H4qvsQCD", FatJet_particleNet_H4qvsQCD, &b_FatJet_particleNet_H4qvsQCD);
   fChain->SetBranchAddress("FatJet_particleNet_HbbvsQCD", FatJet_particleNet_HbbvsQCD, &b_FatJet_particleNet_HbbvsQCD);
   fChain->SetBranchAddress("FatJet_particleNet_HccvsQCD", FatJet_particleNet_HccvsQCD, &b_FatJet_particleNet_HccvsQCD);
   fChain->SetBranchAddress("FatJet_particleNet_QCD", FatJet_particleNet_QCD, &b_FatJet_particleNet_QCD);
   fChain->SetBranchAddress("FatJet_particleNet_TvsQCD", FatJet_particleNet_TvsQCD, &b_FatJet_particleNet_TvsQCD);
   fChain->SetBranchAddress("FatJet_particleNet_WvsQCD", FatJet_particleNet_WvsQCD, &b_FatJet_particleNet_WvsQCD);
   fChain->SetBranchAddress("FatJet_particleNet_ZvsQCD", FatJet_particleNet_ZvsQCD, &b_FatJet_particleNet_ZvsQCD);
   fChain->SetBranchAddress("FatJet_particleNet_mass", FatJet_particleNet_mass, &b_FatJet_particleNet_mass);
   fChain->SetBranchAddress("FatJet_phi", FatJet_phi, &b_FatJet_phi);
   fChain->SetBranchAddress("FatJet_pt", FatJet_pt, &b_FatJet_pt);
   fChain->SetBranchAddress("FatJet_pt_nom", FatJet_pt_nom, &b_FatJet_pt_nom);
   if (fChain->GetBranch("FatJet_pt_jerUp")) fChain->SetBranchAddress("FatJet_pt_jerUp", FatJet_pt_jerUp, &b_FatJet_pt_jerUp);
   if (fChain->GetBranch("FatJet_pt_jerDown")) fChain->SetBranchAddress("FatJet_pt_jerDown", FatJet_pt_jerDown, &b_FatJet_pt_jerDown);
   if (fChain->GetBranch("FatJet_pt_jesTotalUp")) fChain->SetBranchAddress("FatJet_pt_jesTotalUp", FatJet_pt_jesTotalUp, &b_FatJet_pt_jesTotalUp);
   if (fChain->GetBranch("FatJet_pt_jesTotalDown")) fChain->SetBranchAddress("FatJet_pt_jesTotalDown", FatJet_pt_jesTotalDown, &b_FatJet_pt_jesTotalDown);
   fChain->SetBranchAddress("FatJet_rawFactor", FatJet_rawFactor, &b_FatJet_rawFactor);
   fChain->SetBranchAddress("FatJet_tau1", FatJet_tau1, &b_FatJet_tau1);
   fChain->SetBranchAddress("FatJet_tau2", FatJet_tau2, &b_FatJet_tau2);
   fChain->SetBranchAddress("FatJet_tau3", FatJet_tau3, &b_FatJet_tau3);
   fChain->SetBranchAddress("FatJet_tau4", FatJet_tau4, &b_FatJet_tau4);
   fChain->SetBranchAddress("FatJet_jetId", FatJet_jetId, &b_FatJet_jetId);
   fChain->SetBranchAddress("FatJet_subJetIdx1", FatJet_subJetIdx1, &b_FatJet_subJetIdx1);
   fChain->SetBranchAddress("FatJet_subJetIdx2", FatJet_subJetIdx2, &b_FatJet_subJetIdx2);
   if (fChain->GetBranch("FatJet_genJetAK8Idx")) fChain->SetBranchAddress("FatJet_genJetAK8Idx", FatJet_genJetAK8Idx, &b_FatJet_genJetAK8Idx);
   if (fChain->GetBranch("FatJet_hadronFlavour")) fChain->SetBranchAddress("FatJet_hadronFlavour", FatJet_hadronFlavour, &b_FatJet_hadronFlavour);
   if (fChain->GetBranch("nGenJetAK8")) fChain->SetBranchAddress("nGenJetAK8", &nGenJetAK8, &b_nGenJetAK8);
   if (fChain->GetBranch("GenJetAK8_eta")) fChain->SetBranchAddress("GenJetAK8_eta", GenJetAK8_eta, &b_GenJetAK8_eta);
   if (fChain->GetBranch("GenJetAK8_mass")) fChain->SetBranchAddress("GenJetAK8_mass", GenJetAK8_mass, &b_GenJetAK8_mass);
   if (fChain->GetBranch("GenJetAK8_phi")) fChain->SetBranchAddress("GenJetAK8_phi", GenJetAK8_phi, &b_GenJetAK8_phi);
   if (fChain->GetBranch("GenJetAK8_pt")) fChain->SetBranchAddress("GenJetAK8_pt", GenJetAK8_pt, &b_GenJetAK8_pt);
   if (fChain->GetBranch("nGenJet")) fChain->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   if (fChain->GetBranch("GenJet_eta")) fChain->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   if (fChain->GetBranch("GenJet_mass")) fChain->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   if (fChain->GetBranch("GenJet_phi")) fChain->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   if (fChain->GetBranch("GenJet_pt")) fChain->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
   if (fChain->GetBranch("nGenPart")) fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   if (fChain->GetBranch("GenPart_eta")) fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   if (fChain->GetBranch("GenPart_mass")) fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   if (fChain->GetBranch("GenPart_phi")) fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   if (fChain->GetBranch("GenPart_pt")) fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   if (fChain->GetBranch("GenPart_genPartIdxMother")) fChain->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   if (fChain->GetBranch("GenPart_pdgId")) fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   if (fChain->GetBranch("GenPart_status")) fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   if (fChain->GetBranch("GenPart_statusFlags")) fChain->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   if (fChain->GetBranch("nSubGenJetAK8")) fChain->SetBranchAddress("nSubGenJetAK8", &nSubGenJetAK8, &b_nSubGenJetAK8);
   if (fChain->GetBranch("SubGenJetAK8_eta")) fChain->SetBranchAddress("SubGenJetAK8_eta", SubGenJetAK8_eta, &b_SubGenJetAK8_eta);
   if (fChain->GetBranch("SubGenJetAK8_mass")) fChain->SetBranchAddress("SubGenJetAK8_mass", SubGenJetAK8_mass, &b_SubGenJetAK8_mass);
   if (fChain->GetBranch("SubGenJetAK8_phi")) fChain->SetBranchAddress("SubGenJetAK8_phi", SubGenJetAK8_phi, &b_SubGenJetAK8_phi);
   if (fChain->GetBranch("SubGenJetAK8_pt")) fChain->SetBranchAddress("SubGenJetAK8_pt", SubGenJetAK8_pt, &b_SubGenJetAK8_pt);
   if (fChain->GetBranch("Generator_binvar")) fChain->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
   if (fChain->GetBranch("Generator_scalePDF")) fChain->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
   if (fChain->GetBranch("Generator_weight")) fChain->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
   if (fChain->GetBranch("Generator_x1")) fChain->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
   if (fChain->GetBranch("Generator_x2")) fChain->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
   if (fChain->GetBranch("Generator_xpdf1")) fChain->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
   if (fChain->GetBranch("Generator_xpdf2")) fChain->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
   if (fChain->GetBranch("Generator_id1")) fChain->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
   if (fChain->GetBranch("Generator_id2")) fChain->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
   if (fChain->GetBranch("nGenVisTau")) fChain->SetBranchAddress("nGenVisTau", &nGenVisTau, &b_nGenVisTau);
   if (fChain->GetBranch("GenVisTau_eta")) fChain->SetBranchAddress("GenVisTau_eta", GenVisTau_eta, &b_GenVisTau_eta);
   if (fChain->GetBranch("GenVisTau_mass")) fChain->SetBranchAddress("GenVisTau_mass", GenVisTau_mass, &b_GenVisTau_mass);
   if (fChain->GetBranch("GenVisTau_phi")) fChain->SetBranchAddress("GenVisTau_phi", GenVisTau_phi, &b_GenVisTau_phi);
   if (fChain->GetBranch("GenVisTau_pt")) fChain->SetBranchAddress("GenVisTau_pt", GenVisTau_pt, &b_GenVisTau_pt);
   if (fChain->GetBranch("GenVisTau_charge")) fChain->SetBranchAddress("GenVisTau_charge", GenVisTau_charge, &b_GenVisTau_charge);
   if (fChain->GetBranch("GenVisTau_genPartIdxMother")) fChain->SetBranchAddress("GenVisTau_genPartIdxMother", GenVisTau_genPartIdxMother, &b_GenVisTau_genPartIdxMother);
   if (fChain->GetBranch("GenVisTau_status")) fChain->SetBranchAddress("GenVisTau_status", GenVisTau_status, &b_GenVisTau_status);
   if (fChain->GetBranch("genWeight")) fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   if (fChain->GetBranch("puWeight")) fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   if (fChain->GetBranch("puWeightUp")) fChain->SetBranchAddress("puWeightUp", &puWeightUp, &b_puWeightUp);
   if (fChain->GetBranch("puWeightDown")) fChain->SetBranchAddress("puWeightDown", &puWeightDown, &b_puWeightDown);
   if (fChain->GetBranch("puAutoWeight")) fChain->SetBranchAddress("puAutoWeight", &puAutoWeight, &b_puAutoWeight);
   if (fChain->GetBranch("puAutoWeightUp")) fChain->SetBranchAddress("puAutoWeightUp", &puAutoWeightUp, &b_puAutoWeightUp);
   if (fChain->GetBranch("puAutoWeightDown")) fChain->SetBranchAddress("puAutoWeightDown", &puAutoWeightDown, &b_puAutoWeightDown);
   if (fChain->GetBranch("nPSWeight")) fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   if (fChain->GetBranch("PSWeight")) fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   fChain->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
   fChain->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
   fChain->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
   fChain->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
   fChain->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
   fChain->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
   fChain->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
   fChain->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
   fChain->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
   fChain->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
   fChain->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
   fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
   fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_mass_nom", Jet_mass_nom, &b_Jet_mass_nom);
   if (fChain->GetBranch("Jet_mass_jerUp")) fChain->SetBranchAddress("Jet_mass_jerUp", Jet_mass_jerUp, &b_Jet_mass_jerUp);
   if (fChain->GetBranch("Jet_mass_jerDown")) fChain->SetBranchAddress("Jet_mass_jerDown", Jet_mass_jerDown, &b_Jet_mass_jerDown);
   if (fChain->GetBranch("Jet_mass_jesTotalUp")) fChain->SetBranchAddress("Jet_mass_jesTotalUp", Jet_mass_jesTotalUp, &b_Jet_mass_jesTotalUp);
   if (fChain->GetBranch("Jet_mass_jesTotalDown")) fChain->SetBranchAddress("Jet_mass_jesTotalDown", Jet_mass_jesTotalDown, &b_Jet_mass_jesTotalDown);
   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   fChain->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_pt_nom", Jet_pt_nom, &b_Jet_pt_nom);
   fChain->SetBranchAddress("Jet_pt_raw", Jet_pt_raw, &b_Jet_pt_raw);
   if (fChain->GetBranch("Jet_pt_jerUp")) fChain->SetBranchAddress("Jet_pt_jerUp", Jet_pt_jerUp, &b_Jet_pt_jerUp);
   if (fChain->GetBranch("Jet_pt_jerDown")) fChain->SetBranchAddress("Jet_pt_jerDown", Jet_pt_jerDown, &b_Jet_pt_jerDown);
   if (fChain->GetBranch("Jet_pt_jesTotalUp")) fChain->SetBranchAddress("Jet_pt_jesTotalUp", Jet_pt_jesTotalUp, &b_Jet_pt_jesTotalUp);
   if (fChain->GetBranch("Jet_pt_jesTotalDown")) fChain->SetBranchAddress("Jet_pt_jesTotalDown", Jet_pt_jesTotalDown, &b_Jet_pt_jesTotalDown);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
   fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
   fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
   fChain->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
   fChain->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
   fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
   fChain->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
   fChain->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
   fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
   fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
   fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   if (fChain->GetBranch("L1PreFiringWeight_Dn")) fChain->SetBranchAddress("L1PreFiringWeight_Dn", &L1PreFiringWeight_Dn, &b_L1PreFiringWeight_Dn);
   if (fChain->GetBranch("L1PreFiringWeight_Nom")) fChain->SetBranchAddress("L1PreFiringWeight_Nom", &L1PreFiringWeight_Nom, &b_L1PreFiringWeight_Nom);
   if (fChain->GetBranch("L1PreFiringWeight_Up")) fChain->SetBranchAddress("L1PreFiringWeight_Up", &L1PreFiringWeight_Up, &b_L1PreFiringWeight_Up);
   if (fChain->GetBranch("GenMET_phi")) fChain->SetBranchAddress("GenMET_phi", &GenMET_phi, &b_GenMET_phi);
   if (fChain->GetBranch("GenMET_pt")) fChain->SetBranchAddress("GenMET_pt", &GenMET_pt, &b_GenMET_pt);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
   fChain->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
   fChain->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
   fChain->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   if (fChain->GetBranch("MET_T1_phi")) fChain->SetBranchAddress("MET_T1_phi", &MET_T1_phi, &b_MET_T1_phi);
   if (fChain->GetBranch("MET_T1_phi_jerUp")) fChain->SetBranchAddress("MET_T1_phi_jerUp", &MET_T1_phi_jerUp, &b_MET_T1_phi_jerUp);
   if (fChain->GetBranch("MET_T1_phi_jerDown")) fChain->SetBranchAddress("MET_T1_phi_jerDown", &MET_T1_phi_jerDown, &b_MET_T1_phi_jerDown);
   if (fChain->GetBranch("MET_T1_phi_jesTotalUp")) fChain->SetBranchAddress("MET_T1_phi_jesTotalUp", &MET_T1_phi_jesTotalUp, &b_MET_T1_phi_jesTotalUp);
   if (fChain->GetBranch("MET_T1_phi_jesTotalDown")) fChain->SetBranchAddress("MET_T1_phi_jesTotalDown", &MET_T1_phi_jesTotalDown, &b_MET_T1_phi_jesTotalDown);
   if (fChain->GetBranch("MET_T1_phi_unclustEnUp")) fChain->SetBranchAddress("MET_T1_phi_unclustEnUp", &MET_T1_phi_unclustEnUp, &b_MET_T1_phi_unclustEnUp);
   if (fChain->GetBranch("MET_T1_phi_unclustEnDown")) fChain->SetBranchAddress("MET_T1_phi_unclustEnDown", &MET_T1_phi_unclustEnDown, &b_MET_T1_phi_unclustEnDown);
   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   if (fChain->GetBranch("MET_T1_pt")) fChain->SetBranchAddress("MET_T1_pt", &MET_T1_pt, &b_MET_T1_pt);
   if (fChain->GetBranch("MET_T1_pt_jerUp")) fChain->SetBranchAddress("MET_T1_pt_jerUp", &MET_T1_pt_jerUp, &b_MET_T1_pt_jerUp);
   if (fChain->GetBranch("MET_T1_pt_jerDown")) fChain->SetBranchAddress("MET_T1_pt_jerDown", &MET_T1_pt_jerDown, &b_MET_T1_pt_jerDown);
   if (fChain->GetBranch("MET_T1_pt_jesTotalUp")) fChain->SetBranchAddress("MET_T1_pt_jesTotalUp", &MET_T1_pt_jesTotalUp, &b_MET_T1_pt_jesTotalUp);
   if (fChain->GetBranch("MET_T1_pt_jesTotalDown")) fChain->SetBranchAddress("MET_T1_pt_jesTotalDown", &MET_T1_pt_jesTotalDown, &b_MET_T1_pt_jesTotalDown);
   if (fChain->GetBranch("MET_T1_pt_unclustEnUp")) fChain->SetBranchAddress("MET_T1_pt_unclustEnUp", &MET_T1_pt_unclustEnUp, &b_MET_T1_pt_unclustEnUp);
   if (fChain->GetBranch("MET_T1_pt_unclustEnDown")) fChain->SetBranchAddress("MET_T1_pt_unclustEnDown", &MET_T1_pt_unclustEnDown, &b_MET_T1_pt_unclustEnDown);
   if (fChain->GetBranch("MET_significance")) fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
   if (fChain->GetBranch("MET_sumEt")) fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
   fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
   fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
   fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
   fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
   fChain->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
   fChain->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
   fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
   fChain->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
   fChain->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
   fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   fChain->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
   fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
   fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
   fChain->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
   fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
   fChain->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
   fChain->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
   fChain->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
   fChain->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
   fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
   fChain->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
   fChain->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
   fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
   fChain->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
   fChain->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
   fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
   fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
   fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
   fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
   fChain->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
   fChain->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
   fChain->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
   fChain->SetBranchAddress("Muon_mvaId", Muon_mvaId, &b_Muon_mvaId);
   fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
   fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
   fChain->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
   fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
   fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
   fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
   fChain->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
   fChain->SetBranchAddress("Photon_dEscaleUp", Photon_dEscaleUp, &b_Photon_dEscaleUp);
   fChain->SetBranchAddress("Photon_dEscaleDown", Photon_dEscaleDown, &b_Photon_dEscaleDown);
   fChain->SetBranchAddress("Photon_dEsigmaUp", Photon_dEsigmaUp, &b_Photon_dEsigmaUp);
   fChain->SetBranchAddress("Photon_dEsigmaDown", Photon_dEsigmaDown, &b_Photon_dEsigmaDown);
   fChain->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
   fChain->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
   fChain->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
   fChain->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
   fChain->SetBranchAddress("Photon_mass", Photon_mass, &b_Photon_mass);
   fChain->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
   if (fChain->GetBranch("Photon_mvaID17")) fChain->SetBranchAddress("Photon_mvaID17", Photon_mvaID17, &b_Photon_mvaID17);
   fChain->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
   fChain->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
   fChain->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
   fChain->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
   fChain->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
   fChain->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
   fChain->SetBranchAddress("Photon_charge", Photon_charge, &b_Photon_charge);
   if (fChain->GetBranch("Photon_cutBased")) fChain->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
   fChain->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
   fChain->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
   fChain->SetBranchAddress("Photon_pdgId", Photon_pdgId, &b_Photon_pdgId);
   fChain->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
   fChain->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
   fChain->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
   fChain->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
   if (fChain->GetBranch("Photon_mvaID17_WP80")) fChain->SetBranchAddress("Photon_mvaID17_WP80", Photon_mvaID17_WP80, &b_Photon_mvaID17_WP80);
   if (fChain->GetBranch("Photon_mvaID17_WP90")) fChain->SetBranchAddress("Photon_mvaID17_WP90", Photon_mvaID17_WP90, &b_Photon_mvaID17_WP90);
   fChain->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
   fChain->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
   fChain->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
   fChain->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
   if (fChain->GetBranch("Pileup_nTrueInt")) fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
   if (fChain->GetBranch("Pileup_pudensity")) fChain->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
   if (fChain->GetBranch("Pileup_gpudensity")) fChain->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
   if (fChain->GetBranch("Pileup_nPU")) fChain->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
   if (fChain->GetBranch("Pileup_sumEOOT")) fChain->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
   if (fChain->GetBranch("Pileup_sumLOOT")) fChain->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
   fChain->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
   fChain->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
   fChain->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
   fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
   fChain->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
   fChain->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
   fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
   if (fChain->GetBranch("nGenDressedLepton")) fChain->SetBranchAddress("nGenDressedLepton", &nGenDressedLepton, &b_nGenDressedLepton);
   if (fChain->GetBranch("GenDressedLepton_eta")) fChain->SetBranchAddress("GenDressedLepton_eta", GenDressedLepton_eta, &b_GenDressedLepton_eta);
   if (fChain->GetBranch("GenDressedLepton_mass")) fChain->SetBranchAddress("GenDressedLepton_mass", GenDressedLepton_mass, &b_GenDressedLepton_mass);
   if (fChain->GetBranch("GenDressedLepton_phi")) fChain->SetBranchAddress("GenDressedLepton_phi", GenDressedLepton_phi, &b_GenDressedLepton_phi);
   if (fChain->GetBranch("GenDressedLepton_pt")) fChain->SetBranchAddress("GenDressedLepton_pt", GenDressedLepton_pt, &b_GenDressedLepton_pt);
   if (fChain->GetBranch("GenDressedLepton_pdgId")) fChain->SetBranchAddress("GenDressedLepton_pdgId", GenDressedLepton_pdgId, &b_GenDressedLepton_pdgId);
   if (fChain->GetBranch("GenDressedLepton_hasTauAnc")) fChain->SetBranchAddress("GenDressedLepton_hasTauAnc", GenDressedLepton_hasTauAnc, &b_GenDressedLepton_hasTauAnc);
   fChain->SetBranchAddress("nSoftActivityJet", &nSoftActivityJet, &b_nSoftActivityJet);
   fChain->SetBranchAddress("SoftActivityJet_eta", SoftActivityJet_eta, &b_SoftActivityJet_eta);
   fChain->SetBranchAddress("SoftActivityJet_phi", SoftActivityJet_phi, &b_SoftActivityJet_phi);
   fChain->SetBranchAddress("SoftActivityJet_pt", SoftActivityJet_pt, &b_SoftActivityJet_pt);
   fChain->SetBranchAddress("SoftActivityJetHT", &SoftActivityJetHT, &b_SoftActivityJetHT);
   fChain->SetBranchAddress("SoftActivityJetHT10", &SoftActivityJetHT10, &b_SoftActivityJetHT10);
   fChain->SetBranchAddress("SoftActivityJetHT2", &SoftActivityJetHT2, &b_SoftActivityJetHT2);
   fChain->SetBranchAddress("SoftActivityJetHT5", &SoftActivityJetHT5, &b_SoftActivityJetHT5);
   fChain->SetBranchAddress("SoftActivityJetNjets10", &SoftActivityJetNjets10, &b_SoftActivityJetNjets10);
   fChain->SetBranchAddress("SoftActivityJetNjets2", &SoftActivityJetNjets2, &b_SoftActivityJetNjets2);
   fChain->SetBranchAddress("SoftActivityJetNjets5", &SoftActivityJetNjets5, &b_SoftActivityJetNjets5);
   fChain->SetBranchAddress("nSubJet", &nSubJet, &b_nSubJet);
   fChain->SetBranchAddress("SubJet_btagCSVV2", SubJet_btagCSVV2, &b_SubJet_btagCSVV2);
   fChain->SetBranchAddress("SubJet_btagDeepB", SubJet_btagDeepB, &b_SubJet_btagDeepB);
   fChain->SetBranchAddress("SubJet_eta", SubJet_eta, &b_SubJet_eta);
   fChain->SetBranchAddress("SubJet_mass", SubJet_mass, &b_SubJet_mass);
   fChain->SetBranchAddress("SubJet_n2b1", SubJet_n2b1, &b_SubJet_n2b1);
   fChain->SetBranchAddress("SubJet_n3b1", SubJet_n3b1, &b_SubJet_n3b1);
   fChain->SetBranchAddress("SubJet_phi", SubJet_phi, &b_SubJet_phi);
   fChain->SetBranchAddress("SubJet_pt", SubJet_pt, &b_SubJet_pt);
   fChain->SetBranchAddress("SubJet_rawFactor", SubJet_rawFactor, &b_SubJet_rawFactor);
   fChain->SetBranchAddress("SubJet_tau1", SubJet_tau1, &b_SubJet_tau1);
   fChain->SetBranchAddress("SubJet_tau2", SubJet_tau2, &b_SubJet_tau2);
   fChain->SetBranchAddress("SubJet_tau3", SubJet_tau3, &b_SubJet_tau3);
   fChain->SetBranchAddress("SubJet_tau4", SubJet_tau4, &b_SubJet_tau4);
   fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
   fChain->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
   fChain->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
   fChain->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
   fChain->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
   fChain->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
   fChain->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
   fChain->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
   fChain->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
   fChain->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
   fChain->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
   fChain->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
   fChain->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
   fChain->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
   fChain->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
   fChain->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
   fChain->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
   fChain->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
   fChain->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
   if (fChain->GetBranch("nTrigObj")) fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
   if (fChain->GetBranch("TrigObj_pt")) fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
   if (fChain->GetBranch("TrigObj_eta")) fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
   if (fChain->GetBranch("TrigObj_phi")) fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
   if (fChain->GetBranch("TrigObj_l1pt")) fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
   if (fChain->GetBranch("TrigObj_l1pt_2")) fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
   if (fChain->GetBranch("TrigObj_l2pt")) fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
   if (fChain->GetBranch("TrigObj_id")) fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
   if (fChain->GetBranch("TrigObj_l1iso")) fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
   if (fChain->GetBranch("TrigObj_l1charge")) fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
   if (fChain->GetBranch("TrigObj_filterBits")) fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
   if (fChain->GetBranch("genTtbarId")) fChain->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
   fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
   fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
   fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
   fChain->SetBranchAddress("nSV", &nSV, &b_nSV);
   fChain->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
   fChain->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
   fChain->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
   if (fChain->GetBranch("Electron_genPartIdx")) fChain->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
   if (fChain->GetBranch("Electron_genPartFlav")) fChain->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
   if (fChain->GetBranch("GenJetAK8_partonFlavour")) fChain->SetBranchAddress("GenJetAK8_partonFlavour", GenJetAK8_partonFlavour, &b_GenJetAK8_partonFlavour);
   if (fChain->GetBranch("GenJetAK8_hadronFlavour")) fChain->SetBranchAddress("GenJetAK8_hadronFlavour", GenJetAK8_hadronFlavour, &b_GenJetAK8_hadronFlavour);
   if (fChain->GetBranch("GenJet_partonFlavour")) fChain->SetBranchAddress("GenJet_partonFlavour", GenJet_partonFlavour, &b_GenJet_partonFlavour);
   if (fChain->GetBranch("GenJet_hadronFlavour")) fChain->SetBranchAddress("GenJet_hadronFlavour", GenJet_hadronFlavour, &b_GenJet_hadronFlavour);
   if (fChain->GetBranch("Jet_genJetIdx")) fChain->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
   if (fChain->GetBranch("Jet_hadronFlavour")) fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   if (fChain->GetBranch("Jet_partonFlavour")) fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
   if (fChain->GetBranch("Muon_genPartIdx")) fChain->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
   if (fChain->GetBranch("Muon_genPartFlav")) fChain->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
   if (fChain->GetBranch("Photon_genPartIdx")) fChain->SetBranchAddress("Photon_genPartIdx", Photon_genPartIdx, &b_Photon_genPartIdx);
   if (fChain->GetBranch("Photon_genPartFlav")) fChain->SetBranchAddress("Photon_genPartFlav", Photon_genPartFlav, &b_Photon_genPartFlav);
   if (fChain->GetBranch("MET_fiducialGenPhi")) fChain->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
   if (fChain->GetBranch("MET_fiducialGenPt")) fChain->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
   fChain->SetBranchAddress("Electron_cleanmask", Electron_cleanmask, &b_Electron_cleanmask);
   fChain->SetBranchAddress("Jet_cleanmask", Jet_cleanmask, &b_Jet_cleanmask);
   fChain->SetBranchAddress("Muon_cleanmask", Muon_cleanmask, &b_Muon_cleanmask);
   fChain->SetBranchAddress("Photon_cleanmask", Photon_cleanmask, &b_Photon_cleanmask);
   fChain->SetBranchAddress("Tau_cleanmask", Tau_cleanmask, &b_Tau_cleanmask);
   fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
   fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
   fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
   fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
   fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
   fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
   fChain->SetBranchAddress("SV_x", SV_x, &b_SV_x);
   fChain->SetBranchAddress("SV_y", SV_y, &b_SV_y);
   fChain->SetBranchAddress("SV_z", SV_z, &b_SV_z);
   if (fChain->GetBranch("Tau_genPartIdx")) fChain->SetBranchAddress("Tau_genPartIdx", Tau_genPartIdx, &b_Tau_genPartIdx);
   if (fChain->GetBranch("Tau_genPartFlav")) fChain->SetBranchAddress("Tau_genPartFlav", Tau_genPartFlav, &b_Tau_genPartFlav);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonDzFilter", &Flag_BadPFMuonDzFilter, &b_Flag_BadPFMuonDzFilter);
   fChain->SetBranchAddress("Flag_hfNoisyHitsFilter", &Flag_hfNoisyHitsFilter, &b_Flag_hfNoisyHitsFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
   fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   if (fChain->GetBranch("HLT_Ele27_WPTight_Gsf")) fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
   if (fChain->GetBranch("HLT_ECALHT800")) fChain->SetBranchAddress("HLT_ECALHT800", &HLT_ECALHT800, &b_HLT_ECALHT800);
   if (fChain->GetBranch("HLT_Photon165_HE10")) fChain->SetBranchAddress("HLT_Photon165_HE10", &HLT_Photon165_HE10, &b_HLT_Photon165_HE10);
   if (fChain->GetBranch("HLT_Photon110EB_TightID_TightIso")) fChain->SetBranchAddress("HLT_Photon110EB_TightID_TightIso", &HLT_Photon110EB_TightID_TightIso, &b_HLT_Photon110EB_TightID_TightIso);
   if (fChain->GetBranch("HLT_Photon165_R9Id90_HE10_IsoM")) fChain->SetBranchAddress("HLT_Photon165_R9Id90_HE10_IsoM", &HLT_Photon165_R9Id90_HE10_IsoM, &b_HLT_Photon165_R9Id90_HE10_IsoM);
   if (fChain->GetBranch("HLT_Photon175")) fChain->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   if (fChain->GetBranch("HLT_Photon200")) fChain->SetBranchAddress("HLT_Photon200", &HLT_Photon200, &b_HLT_Photon200);
   if (fChain->GetBranch("HLT_Photon250_NoHE")) fChain->SetBranchAddress("HLT_Photon250_NoHE", &HLT_Photon250_NoHE, &b_HLT_Photon250_NoHE);
   if (fChain->GetBranch("HLT_Photon300_NoHE")) fChain->SetBranchAddress("HLT_Photon300_NoHE", &HLT_Photon300_NoHE, &b_HLT_Photon300_NoHE);
   if (fChain->GetBranch("HLT_Photon500")) fChain->SetBranchAddress("HLT_Photon500", &HLT_Photon500, &b_HLT_Photon500);
   if (fChain->GetBranch("HLT_Photon600")) fChain->SetBranchAddress("HLT_Photon600", &HLT_Photon600, &b_HLT_Photon600);
   //if (fChain->GetBranch("HLT_AK8PFJet360_TrimMass30")) fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
   //if (fChain->GetBranch("HLT_AK8PFJet400_TrimMass30")) fChain->SetBranchAddress("HLT_AK8PFJet400_TrimMass30", &HLT_AK8PFJet400_TrimMass30, &b_HLT_AK8PFJet400_TrimMass30);
   if (fChain->GetBranch("HLT_AK8PFJet500")) fChain->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
   if (fChain->GetBranch("HLT_PFJet450")) fChain->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
   if (fChain->GetBranch("HLT_PFJet500")) fChain->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
   if (fChain->GetBranch("HLT_PFHT900")) fChain->SetBranchAddress("HLT_PFHT900", &HLT_PFHT900, &b_HLT_PFHT900);
   if (fChain->GetBranch("HLT_PFMET170_HBHECleaned")) fChain->SetBranchAddress("HLT_PFMET170_HBHECleaned", &HLT_PFMET170_HBHECleaned, &b_HLT_PFMET170_HBHECleaned);
   if (fChain->GetBranch("HLT_PFMET170_HBHE_BeamHaloCleaned")) fChain->SetBranchAddress("HLT_PFMET170_HBHE_BeamHaloCleaned", &HLT_PFMET170_HBHE_BeamHaloCleaned, &b_HLT_PFMET170_HBHE_BeamHaloCleaned);
   if (fChain->GetBranch("HLT_PFMET200_HBHE_BeamHaloCleaned")) fChain->SetBranchAddress("HLT_PFMET200_HBHE_BeamHaloCleaned", &HLT_PFMET200_HBHE_BeamHaloCleaned, &b_HLT_PFMET200_HBHE_BeamHaloCleaned);
   if (fChain->GetBranch("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight")) fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight);
   if (fChain->GetBranch("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight")) fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight);
   if (fChain->GetBranch("L1Reco_step")) fChain->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
   if (fChain->GetBranch("L1_AlwaysTrue")) fChain->SetBranchAddress("L1_AlwaysTrue", &L1_AlwaysTrue, &b_L1_AlwaysTrue);
   if (fChain->GetBranch("Gluino_mass")) fChain->SetBranchAddress("Gluino_mass", &Gluino_mass, &b_Gluino_mass);
   if (fChain->GetBranch("Neutralino_mass")) {is_treemass=1; fChain->SetBranchAddress("Neutralino_mass", &Neutralino_mass, &b_Neutralino_mass);}
   Notify();
} 
   
Bool_t Analyzer::Notify()
{ 
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.
   
   return kTRUE;
}

void Analyzer::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

Bool_t Analyzer::IsGoldEvent(UInt_t RUN, UInt_t LS){
  //needs input json formatted as each run is a new line
  vector<string> json;
  if (year.find("2016")!=std::string::npos) json = json_2016;
  if (year.find("2017")!=std::string::npos) json = json_2017;
  if (year.find("2018")!=std::string::npos) json = json_2018;

  if (is_debug) cout<<"Checking if event is in golden json. "<<year<<" Run "<<RUN<<" LS "<<LS<<endl;
  for (auto line : json) {
    //check if current line is the proper run
    size_t t = line.find(to_string(RUN));
    if (t==string::npos) continue;
    size_t pos_begin = 0;
    size_t pos_end = 0;
    while (pos_begin!=string::npos) {
      pos_begin = line.find ("[",pos_begin+1);
      if (pos_begin==string::npos) break;
      if (line[pos_begin+1]=='[') pos_begin+=1;
      pos_end = line.find (",",pos_begin+1);
      unsigned int ls_1 = stoi (line.substr (pos_begin+1, pos_end-pos_begin-1));
      pos_begin = pos_end+1;
      pos_end = line.find ("]", pos_begin+1);
      unsigned int ls_2 = stoi (line.substr (pos_begin+1, pos_end-pos_begin-1));
      if (ls_1 > ls_2) {cout<<"Something is not right... "<<RUN<<" "<<LS<<endl; return 0;}
      if (LS>=ls_1 && LS<=ls_2) {if (is_debug) cout<<"Event inside LS "<<ls_1<<" and LS "<<ls_2<<endl; return true;}
    }
  }
  if (is_debug) cout<<"Event thrown out by golden json filter"<<endl;
  return false;
}

template <typename T>
bool Parser(const T& var, string op, double val) {
  if      (op == "eq")      {if (var == val) return true;}
  else if (op == "Neq")     {if (var != val) return true;}
  else if (op == "less")    {if (var < val)  return true;}
  else if (op == "great")   {if (var > val)  return true;}
  else if (op == "lesseq")  {if (var <= val) return true;}
  else if (op == "greateq") {if (var >= val) return true;}
  //else if (op == "andand") {if (var && val) return true;}
  //else if (op == "oror") {if (var || val) return true;}
  else if (op == "and")   {if (var&(int)val) return true;}
  else if (op == "or")    {if (var|(int)val) return true;}
  else if (op == "xor")   {if (var^(int)val) return true;}
  else cout<<"ERROR! Unknown operator type: "<<op<<endl;
  return false;
}
bool Parser_float(double var, string op, double val) {
  if      (op == "eq") {if (var == val) return true;}
  else if (op == "Neq") {if (var != val) return true;}
  else if (op == "less")  {if (var < val)  return true;}
  else if (op == "great")  {if (var > val) return true;}
  else if (op == "lesseq") {if (var <= val) return true;}
  else if (op == "greateq") {if (var >= val) return true;}
  //else if (op == "andand") {if (var && val) return true;}
  //else if (op == "oror") {if (var || val) return true;}
  else cout<<"ERROR! Unknown operator type: "<<op<<endl;
  return false;
}


Int_t Analyzer::Cut(Long64_t entry,pair<int,int> mass_pair, bool debug=0)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
  bool returnvalue=true;
  for (unsigned int i=0;i<_cut_variable.size();i++){
    if (debug) cout<<_cut_variable[i]<<" "<<_cut_operator[i]<<" "<<_cut_value[i];
    if (!returnvalue) break;
    unsigned int metFilters=0;
    metFilters += (Flag_goodVertices) ? pow(2,0) : 0;
    metFilters += (Flag_globalSuperTightHalo2016Filter) ? pow(2,1) : 0;
    metFilters += (Flag_HBHENoiseFilter) ? pow(2,2) : 0;
    metFilters += (Flag_HBHENoiseIsoFilter) ? pow(2,3) : 0;
    metFilters += (Flag_EcalDeadCellTriggerPrimitiveFilter) ? pow(2,4) : 0;
    metFilters += (Flag_BadPFMuonFilter) ? pow(2,5) : 0;
    metFilters += (Flag_BadPFMuonDzFilter) ? pow(2,6) : 0;
    metFilters += (Flag_hfNoisyHitsFilter ) ? pow(2,7) : 0;
    metFilters += (Flag_BadChargedCandidateFilter) ? pow(2,8) : 0;
    metFilters += (Flag_eeBadScFilter) ? pow(2,9) : 0;
    metFilters += (Flag_ecalBadCalibFilter) ? pow(2,10) : 0;
    //Fastsim UL recommendation not ready, use EOY recommendation instead
    //2018 data: 11001111111 MC: 11001111111 fastsim: 10001111101
    //2017 data: 11001111111 MC: 11001111111 fastsim: 10001111101
    //2016 data: 01001111111 MC: 01001111111 fastsim: 00001111101
    //2016? Flag_ecalBadCalibFilter is not listed in the table for UL2016?? https://twiki.cern.ch/twiki/bin/viewauth/CMS/MissingETOptionalFiltersRun2#UL_data
    bool metFilters_hardcoded=0; unsigned int filterValue=0;
    if (year.find("2016")!=std::string::npos) (_fastSim) ? filterValue=125 : filterValue=639;
    else  (_fastSim) ? filterValue=1149 : filterValue=1663;
    metFilters_hardcoded=(metFilters&filterValue)==filterValue;
    bool HLTPho=0, HLTMET=0;
    if (year.find("2016")!=std::string::npos) HLTPho=HLT_Photon165_HE10 || HLT_Photon175 || HLT_Photon250_NoHE;
    //else if (year.find("2018")!=std::string::npos) HLTPho=HLT_Photon110EB_TightID_TightIso || HLT_Photon200 || HLT_Photon300_NoHE;
    else HLTPho=HLT_Photon200 || HLT_Photon300_NoHE;
    if (year.find("2016")!=std::string::npos) HLTMET=HLT_PFMET170_HBHE_BeamHaloCleaned;
    else HLTMET=HLT_PFMET200_HBHE_BeamHaloCleaned;
    if      (_cut_variable[i]=="HLTPho")    returnvalue=Parser(HLTPho,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="HLTMET")    returnvalue=Parser(HLTMET,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="isPVGood") returnvalue=Parser(PV_npvsGood,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassEleL") {returnvalue=Parser(nPassEleL,_cut_operator[i],_cut_value[i]); if (!isData) w*=ele_SF[1]; if (!isData && _cut_value[i]==0) w*=ele_VETOSF;}
    else if (_cut_variable[i]=="nPassEleM") {returnvalue=Parser(nPassEleM,_cut_operator[i],_cut_value[i]); if (!isData) w*=ele_SF[2];}
    else if (_cut_variable[i]=="nPassEleT") {returnvalue=Parser(nPassEleT,_cut_operator[i],_cut_value[i]); if (!isData) w*=ele_SF[3];}
    else if (_cut_variable[i]=="nPassMuL") {returnvalue=Parser(nPassMuL,_cut_operator[i],_cut_value[i]); if (!isData) w*=mu_SF[0];}
    else if (_cut_variable[i]=="nPassMuM") {returnvalue=Parser(nPassMuM,_cut_operator[i],_cut_value[i]); if (!isData) w*=mu_SF[1];}
    else if (_cut_variable[i]=="nPassMuT") {returnvalue=Parser(nPassMuT,_cut_operator[i],_cut_value[i]); if (!isData) w*=mu_SF[2];}
    else if (_cut_variable[i]=="nPassTauL") {returnvalue=Parser(nPassTauL,_cut_operator[i],_cut_value[i]); if (!isData) w*=tau_SF[0];}
    else if (_cut_variable[i]=="nPassTauM") {returnvalue=Parser(nPassTauM,_cut_operator[i],_cut_value[i]); if (!isData) w*=tau_SF[1];}
    else if (_cut_variable[i]=="nPassTauT") {returnvalue=Parser(nPassTauT,_cut_operator[i],_cut_value[i]); if (!isData) w*=tau_SF[2];}
    else if (_cut_variable[i]=="nPassIso") {returnvalue=Parser(nPassIso,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="nPassLepL") {returnvalue=Parser(nPassEleL+nPassMuL+nPassTauL,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleL+nPassMuL+nPassTauL>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleL>0 && Electron_pt[nleadEleL]>max_pt) {max_pt=Electron_pt[nleadEleL]; whichLepton=1;}
          if (nPassMuL>0 && Muon_pt[nleadMuL]>max_pt) {max_pt=Muon_pt[nleadMuL]; whichLepton=2;}
          if (nPassTauL>0 && Tau_pt[nleadTauL]>max_pt) {max_pt=Tau_pt[nleadTauL]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[1];
            break;
            case 2 : w*=mu_SF[0];
            break;
            case 3 : w*=tau_SF[0];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepM") {returnvalue=Parser(nPassEleM+nPassMuM+nPassTauM,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleM+nPassMuM+nPassTauM>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleM>0 && Electron_pt[nleadEleM]>max_pt) {max_pt=Electron_pt[nleadEleM]; whichLepton=1;}
          if (nPassMuM>0 && Muon_pt[nleadMuM]>max_pt) {max_pt=Muon_pt[nleadMuM]; whichLepton=2;}
          if (nPassTauM>0 && Tau_pt[nleadTauM]>max_pt) {max_pt=Tau_pt[nleadTauM]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[2];
            break;
            case 2 : w*=mu_SF[1];
            break;
            case 3 : w*=tau_SF[1];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepT") {returnvalue=Parser(nPassEleT+nPassMuT+nPassTauT,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleT+nPassMuT+nPassTauT>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleT>0 && Electron_pt[nleadEleT]>max_pt) {max_pt=Electron_pt[nleadEleT]; whichLepton=1;}
          if (nPassMuT>0 && Muon_pt[nleadMuT]>max_pt) {max_pt=Muon_pt[nleadMuT]; whichLepton=2;}
          if (nPassTauT>0 && Tau_pt[nleadTauT]>max_pt) {max_pt=Tau_pt[nleadTauT]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[3];
            break;
            case 2 : w*=mu_SF[2];
            break;
            case 3 : w*=tau_SF[2];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepVLL") {returnvalue=Parser(nPassEleV+nPassMuL+nPassTauL,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleV+nPassMuL+nPassTauL>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleV>0 && Electron_pt[nleadEleV]>max_pt) {max_pt=Electron_pt[nleadEleV]; whichLepton=1;}
          if (nPassMuL>0 && Muon_pt[nleadMuL]>max_pt) {max_pt=Muon_pt[nleadMuL]; whichLepton=2;}
          if (nPassTauL>0 && Tau_pt[nleadTauL]>max_pt) {max_pt=Tau_pt[nleadTauL]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[0];
            break;
            case 2 : w*=mu_SF[0];
            break;
            case 3 : w*=tau_SF[0];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepMLL") {returnvalue=Parser(nPassEleM+nPassMuL+nPassTauL,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleM+nPassMuL+nPassTauL>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleM>0 && Electron_pt[nleadEleM]>max_pt) {max_pt=Electron_pt[nleadEleM]; whichLepton=1;}
          if (nPassMuL>0 && Muon_pt[nleadMuL]>max_pt) {max_pt=Muon_pt[nleadMuL]; whichLepton=2;}
          if (nPassTauL>0 && Tau_pt[nleadTauL]>max_pt) {max_pt=Tau_pt[nleadTauL]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[2];
            break;
            case 2 : w*=mu_SF[0];
            break;
            case 3 : w*=tau_SF[0];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepLML") {returnvalue=Parser(nPassEleL+nPassMuM+nPassTauL,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleL+nPassMuM+nPassTauL>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleL>0 && Electron_pt[nleadEleL]>max_pt) {max_pt=Electron_pt[nleadEleL]; whichLepton=1;}
          if (nPassMuM>0 && Muon_pt[nleadMuM]>max_pt) {max_pt=Muon_pt[nleadMuM]; whichLepton=2;}
          if (nPassTauL>0 && Tau_pt[nleadTauL]>max_pt) {max_pt=Tau_pt[nleadTauL]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[1];
            break;
            case 2 : w*=mu_SF[1];
            break;
            case 3 : w*=tau_SF[0];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepLLM") {returnvalue=Parser(nPassEleL+nPassMuL+nPassTauM,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleL+nPassMuL+nPassTauM>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleL>0 && Electron_pt[nleadEleL]>max_pt) {max_pt=Electron_pt[nleadEleL]; whichLepton=1;}
          if (nPassMuL>0 && Muon_pt[nleadMuL]>max_pt) {max_pt=Muon_pt[nleadMuL]; whichLepton=2;}
          if (nPassTauM>0 && Tau_pt[nleadTauM]>max_pt) {max_pt=Tau_pt[nleadTauM]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[1];
            break;
            case 2 : w*=mu_SF[0];
            break;
            case 3 : w*=tau_SF[1];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassLepMMM") {returnvalue=Parser(nPassEleM+nPassMuM+nPassTauM,_cut_operator[i],_cut_value[i]);
      if (!isData) {
        if (nPassEleM+nPassMuM+nPassTauM>0) {
          double max_pt=0; unsigned int whichLepton=0;
          if (nPassEleM>0 && Electron_pt[nleadEleM]>max_pt) {max_pt=Electron_pt[nleadEleM]; whichLepton=1;}
          if (nPassMuM>0 && Muon_pt[nleadMuM]>max_pt) {max_pt=Muon_pt[nleadMuM]; whichLepton=2;}
          if (nPassTauM>0 && Tau_pt[nleadTauM]>max_pt) {max_pt=Tau_pt[nleadTauM]; whichLepton=3;}
          switch (whichLepton) {
            case 1 : w*=ele_SF[2];
            break;
            case 2 : w*=mu_SF[1];
            break;
            case 3 : w*=tau_SF[1];
            break;
          }
        }
        else if (_cut_value[i]==0) w*=ele_VETOSF;
      }
    }
    else if (_cut_variable[i]=="nPassFREleL") {returnvalue=Parser(nPassFREleL,_cut_operator[i],_cut_value[i]); if (!isData) w*=ele_SF[1];}
    else if (_cut_variable[i]=="nPassFREleM") {returnvalue=Parser(nPassFREleM,_cut_operator[i],_cut_value[i]); if (!isData) w*=ele_SF[2];}
    else if (_cut_variable[i]=="nPassFREleT") {returnvalue=Parser(nPassFREleT,_cut_operator[i],_cut_value[i]); if (!isData) w*=ele_SF[3];}
    else if (_cut_variable[i]=="nPassElePhoL") returnvalue=Parser(nPassElePhoL,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassElePhoM") returnvalue=Parser(nPassElePhoM,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassElePhoT") returnvalue=Parser(nPassElePhoT,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassElePhoMVA80") returnvalue=Parser(nPassElePhoMVA80,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassElePhoMVA90") returnvalue=Parser(nPassElePhoMVA90,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassPhoL") {returnvalue=Parser(nPassPhoL,_cut_operator[i],_cut_value[i]); if (!isData) w*=pho_SF[0];}
    else if (_cut_variable[i]=="nPassPhoM") {returnvalue=Parser(nPassPhoM,_cut_operator[i],_cut_value[i]); if (!isData) w*=pho_SF[1];}
    else if (_cut_variable[i]=="nPassPhoT") {returnvalue=Parser(nPassPhoT,_cut_operator[i],_cut_value[i]); if (!isData) w*=pho_SF[2];}
    else if (_cut_variable[i]=="nPassPhoMVA80") {returnvalue=Parser(nPassPhoMVA80,_cut_operator[i],_cut_value[i]); if (!isData) w*=pho_SF[3];}
    else if (_cut_variable[i]=="nPassPhoMVA90") {returnvalue=Parser(nPassPhoMVA90,_cut_operator[i],_cut_value[i]); if (!isData) w*=pho_SF[4];}
    else if (_cut_variable[i]=="elePt") returnvalue=Parser_float(Electron_pt[nleadEle],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="elephoPt") {
      returnvalue=Parser_float(phoET[nleadElePho],_cut_operator[i],_cut_value[i]);
      //if (year.find("2018")!=std::string::npos) returnvalue=Parser_float(phoET[nleadElePho],_cut_operator[i],120);
    }
    else if (_cut_variable[i]=="phoEt") {
      returnvalue=Parser_float(phoET[nleadPho],_cut_operator[i],_cut_value[i]);
      //if (year.find("2018")!=std::string::npos) returnvalue=Parser_float(phoET[nleadPho],_cut_operator[i],120);
    }
    else if (_cut_variable[i]=="HT") returnvalue=Parser_float(HT_after,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="EMHT") returnvalue=Parser_float(EMHT_after,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="MT") {if (nonHiggsJet<4) returnvalue=Parser_float(MT,_cut_operator[i],_cut_value[i]);}
    //else if (_cut_variable[i]=="MT") returnvalue=Parser_float(MT,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="newMT") {if (nonHiggsJet<4) returnvalue=Parser_float(newMT,_cut_operator[i],_cut_value[i]);} //R
    else if (_cut_variable[i]=="ST") returnvalue=Parser_float(ST,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="newST") returnvalue=Parser_float(newST,_cut_operator[i],_cut_value[i]); //R
    else if (_cut_variable[i]=="newST_G") returnvalue=Parser_float(newST_G,_cut_operator[i],_cut_value[i]); //R
    else if (_cut_variable[i]=="ST_G") returnvalue=Parser_float(ST_G,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="metFilters") returnvalue=Parser(metFilters&(int)_cut_value[i],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="metFilters_hardcoded") returnvalue=Parser(metFilters_hardcoded,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="Flag_METFilters") returnvalue=Parser(Flag_METFilters,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="MET") returnvalue=Parser_float(MET,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="newMET") returnvalue=Parser_float(newMET,_cut_operator[i],_cut_value[i]); //R
    else if (_cut_variable[i]=="trueMET") returnvalue=Parser_float(trueMET,_cut_operator[i],_cut_value[i]); //R
    else if (_cut_variable[i]=="ZMassDiff") returnvalue=Parser_float(ZMassDiff,_cut_operator[i],_cut_value[i]); //R
    else if (_cut_variable[i]=="dphi_met_jet") returnvalue=Parser_float(dphi_met_jet,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="dphi_met_jet_at_high_njet") {if (nonHiggsJet>=4) returnvalue=Parser_float(dphi_met_jet,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_jet_at_low_njet") {if (nonHiggsJet<4) returnvalue=Parser_float(dphi_met_jet,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_btag") returnvalue=Parser_float(dphi_met_btag,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="dphi_met_btag_at_high_njet") {if (nonHiggsJet>=4) returnvalue=Parser_float(dphi_met_btag,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_btag_at_low_njet") {if (nonHiggsJet<4) returnvalue=Parser_float(dphi_met_btag,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_btags") returnvalue=Parser_float(dphi_met_btags,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="dphi_met_btags_at_high_njet") {if (nonHiggsJet>=4) returnvalue=Parser_float(dphi_met_btags,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_btags_at_low_njet") {if (nonHiggsJet<4) returnvalue=Parser_float(dphi_met_btags,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_H_candidate") returnvalue=Parser_float(dphi_met_H_candidate,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="dphi_met_Hmin_candidate") returnvalue=Parser_float(dphi_met_H_candidate,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="dphi_met_H_candidate_at_low_njet") {if (nonHiggsJet<4) returnvalue=Parser_float(dphi_met_H_candidate,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="dphi_met_Hmin_candidate_at_low_njet") {if (nonHiggsJet<4) returnvalue=Parser_float(dphi_met_Hmin_candidate,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="L1prefire") returnvalue=Parser(L1prefire,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassAK4") returnvalue=Parser(nPassAK4,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nPassAK8") returnvalue=Parser(nPassAK8,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="nonHiggsJet") returnvalue=Parser(nonHiggsJet,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="noHmass_in_event") returnvalue=Parser(noHmass_in_event,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDeep_L") returnvalue=Parser(bcounterDeep[1],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDeep_M") returnvalue=Parser(bcounterDeep[2],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDeep_T") returnvalue=Parser(bcounterDeep[3],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDDBvL_L") returnvalue=Parser(bcounterDDBvL[1],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDDBvL_M1") returnvalue=Parser(bcounterDDBvL[2],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDDBvL_M2") returnvalue=Parser(bcounterDDBvL[3],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDDBvL_T1") returnvalue=Parser(bcounterDDBvL[4],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="bcounterDDBvL_T2") returnvalue=Parser(bcounterDDBvL[5],_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="AK8Btag_selected") {
      returnvalue=Parser(AK8Btag_selected,_cut_operator[i],_cut_value[i]);
      if (_fastSim) {
        if (_cut_value[i]==1) w*=AK8btag_SF[0][0];
        if (_cut_value[i]==2) w*=AK8btag_SF[1][0];
        if (_cut_value[i]==3) w*=AK8btag_SF[2][0];
      }
    }
    else if (_cut_variable[i]=="Deep_selected") returnvalue=Parser(Deep_selected,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="Deep_medium_selected") returnvalue=Parser(Deep_medium_selected,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="sth_selected") {
      int sth = 0;
      if (AK8Btag_selected>0) sth = 1;
      else if (Deep_medium_selected==1) sth = 1;
      returnvalue=Parser(sth,_cut_operator[i],_cut_value[i]);
    }
    else if (_cut_variable[i]=="passBtag") returnvalue=Parser(passBtag,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="passAK4Btag1") returnvalue=Parser(passAK4Btag1,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="passAK4Btag2") returnvalue=Parser(passAK4Btag2,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="passHiggsMass") returnvalue=Parser(passHiggsMass,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="passAK4HiggsMass") returnvalue=Parser(passAK4HiggsMass,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="notAK4") returnvalue=Parser(notAK4,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="Hbb") returnvalue=Parser(Hbb,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="SignalHiggs") {returnvalue=Parser(SignalHiggs,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="SignalZ") {returnvalue=Parser(SignalZ,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="truePU") {returnvalue=Parser_float(Pileup_nTrueInt,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="nVtx") {returnvalue=Parser(PV_npvs,_cut_operator[i],_cut_value[i]);}
    else if (_cut_variable[i]=="mcLeptonFilter") returnvalue=Parser(mcLeptonFilter,_cut_operator[i],_cut_value[i]);
    else if (_cut_variable[i]=="1or2jet") returnvalue=Parser(OneOr2jet,_cut_operator[i],_cut_value[i]);
    else {cout<<"ERROR! Unknown cut variable: "<<_cut_variable[i]<<endl; returnvalue=false;}
    if (debug) cout<<" result "<<returnvalue<<endl;;
    if (returnvalue) {
      if (SignalScan) {h_cuts->Fill(i,w); m_cuts[mass_pair]->Fill(i,w);}
      else h_cuts->Fill(i,w);
    }
    else break;
  }
  return returnvalue;
}

double Analyzer::deltaR(double phi1, double phi2, double eta1, double eta2){
  double dR=0;
  if (abs(phi1-phi2)>M_PI) dR=sqrt(pow(2*M_PI-(abs(phi2-phi1)),2)+pow(eta1-eta2,2));
  else dR=sqrt(pow(phi1-phi2,2)+pow(eta1-eta2,2));
  return dR;
}

void Analyzer::set_ABCD_histo(TH1D *h){
  string h_name="ABCD_"+string(h->GetName());
  string axis_names=";"+string(h->GetXaxis()->GetTitle())+"; MET; H-tag";
  TH3D *h3_ABCD = new TH3D(h_name.c_str(),axis_names.c_str(),h->GetNbinsX(),h->GetBinLowEdge(1),h->GetXaxis()->GetBinUpEdge(h->GetNbinsX()),2,-0.5,1.5,2,-0.5,1.5);
  abcd_histos.push_back(h3_ABCD);
}

void Analyzer::OverFill(TH1D *h, double x, double w){
  bool h_tag=AK8Btag_selected>0 || Deep_medium_selected==1;
  bool met = MET>_ABCD;
  double max=h->GetXaxis()->GetBinCenter(h->GetNbinsX());
  if (_ABCD) {
    for (auto i : abcd_histos) {
      string h_name=h->GetName(); string abcd_name=i->GetName();
      abcd_name.substr(5,abcd_name.length());
      if (h_name.compare(abcd_name.substr(5,abcd_name.length()))==0) {
        if (x>max) x=max;
        i->Fill(x,met,h_tag,w);
        break;
      }
    }
  }
  if (!_ABCD || (h_tag && met)) (x>max) ? h->Fill(max,w) : h->Fill(x,w);
}

void Analyzer::OverFill(TH2D *h, double x, double y, double w){
  double x_max=h->GetXaxis()->GetBinCenter(h->GetNbinsX());
  double y_max=h->GetYaxis()->GetBinCenter(h->GetNbinsY());
  double fill_x=(x>x_max) ? x_max : x;
  double fill_y=(y>y_max) ? y_max : y;
  bool h_tag=AK8Btag_selected>0 || Deep_medium_selected==1;
  bool met = MET>_ABCD;
  if (!_ABCD || (h_tag && met)) h->Fill(fill_x,fill_y,w);
}

double Analyzer::deltaPhi(double phi1, double phi2){
  return (abs(phi1-phi2)>M_PI) ? 2*M_PI-abs(phi2-phi1) : abs(phi1-phi2);
}

float Analyzer::Photon_SCEta_Zonly(const int i){
  float tg_theta_over_2   = exp(-Photon_eta[i]);
  float tg_theta          = 2 * tg_theta_over_2 / (1-tg_theta_over_2*tg_theta_over_2);//tan(atan(tg_theta_over_2)*2);//
  float tg_sctheta;

  if (Photon_isScEtaEB[i]){//barrel
    float height         = 130;
    float base           = height / tg_theta;
    float intersection_z = base + PV_z;//10;
    tg_sctheta           = height / intersection_z;
  } else if ( Photon_isScEtaEE[i]){
    float intersection_z = (Photon_eta[i]>0)?310:-310;
    float base           = intersection_z - PV_z;//10;
    float height         = base * tg_theta;
    tg_sctheta           = height/intersection_z;
  }
  else return Photon_eta[i];

  float sctheta = atan(tg_sctheta);
  if (sctheta<0) sctheta += M_PI;
  float tg_sctheta_over_2 = tan(sctheta/2);//-sqrt(tg_sctheta*tg_sctheta+1)/tg_sctheta -1/tg_sctheta;
  float SCEta = -log(tg_sctheta_over_2);

  return SCEta;
}

float Analyzer::Photon_SCEta(const int i){
  float tg_theta_over_2   = exp(-Photon_eta[i]);
  float tg_theta          = 2 * tg_theta_over_2 / (1-tg_theta_over_2*tg_theta_over_2);//tan(atan(tg_theta_over_2)*2);//
  float tg_sctheta;

  if (Photon_isScEtaEB[i]){//barrel
    float R              = 130;
    float angle_x0_y0    = 0;
    if      (PV_x>0) angle_x0_y0 = atan(PV_y/PV_x);
    else if (PV_x<0) angle_x0_y0 = M_PI + atan(PV_y/PV_x);
    else if (PV_y>0) angle_x0_y0 = M_PI / 2;
    else             angle_x0_y0 = - M_PI / 2;

    float alpha      = angle_x0_y0 + (M_PI - Photon_phi[i]);
    float sin_beta   = sqrt(PV_x*PV_x + PV_y*PV_y) / R * sin(alpha);
    float beta       = abs( asin( sin_beta ) );
    float gamma      = M_PI/2 - alpha - beta;
    float l          = sqrt(R*R + (PV_x*PV_x + PV_y*PV_y) - 2*R*sqrt(PV_x*PV_x + PV_y*PV_y)*cos(gamma));

    // cout<<"angle_x0_y0 "<<angle_x0_y0/M_PI*360<<endl;
    // cout<<"alpha "<<alpha/M_PI*360<<endl;
    // cout<<"sin_beta "<<sin_beta<<endl;
    // cout<<"beta "<<beta/M_PI*360<<endl;
    // cout<<"gamma "<<gamma/M_PI*360<<endl;
    // cout<<"l "<<l<<endl;

    float z0_zSC    = l / tg_theta;
    tg_sctheta      = R / (PV_z + z0_zSC);

   
  } else if ( Photon_isScEtaEE[i]){//endcap

      float intersection_z = (Photon_eta[i]>0)?310:-310;
      float base           = intersection_z - PV_z;//10;
      float r              = base * tg_theta;

      float crystalX       = PV_x + r * cos(Photon_phi[i]);
      float crystalY       = PV_y + r * sin(Photon_phi[i]);
      tg_sctheta           = sqrt( crystalX*crystalX + crystalY*crystalY ) /intersection_z;
  }
  else return Photon_eta[i];

  float sctheta = atan(tg_sctheta);
  if (sctheta<0) sctheta += M_PI;
  float tg_sctheta_over_2 = tan(sctheta/2);//-sqrt(tg_sctheta*tg_sctheta+1)/tg_sctheta -1/tg_sctheta;
  float SCEta = -log(tg_sctheta_over_2);

  return SCEta;
}

double Analyzer::UpdateBtags(std::unique_ptr<CorrectionSet> & cset, bool debug, int i, double pt, BTCalibrationReader fastreader_L, BTCalibrationReader fastreader_M, BTCalibrationReader fastreader_T, std::unique_ptr<TRandom3> &gen){
  BTEntry::JetFlavor FLAV;
  int year_chooser=(year.find("2016preVFP")!=std::string::npos) ? 0 : (year.find("2016postVFP")!=std::string::npos) ? 1 : (year.find("2017")!=std::string::npos) ? 2 : 3;
  double mc_eff[3]={0}; char tag='0';
  if (Jet_btagDeepFlavB[i]>BtagDeepWP[year_chooser][1]) tag='M';
  else if (Jet_btagDeepFlavB[i]>BtagDeepWP[year_chooser][0]) tag='L';
  if (pt>=1000) pt=999;
  if (Jet_hadronFlavour[i]==5) {
    FLAV = BTEntry::FLAV_B;
    mc_eff[0] = eff_b_Deep_L->GetEfficiency(eff_b_Deep_L->FindFixBin(Jet_eta[i],pt));
    mc_eff[1] = eff_b_Deep_M->GetEfficiency(eff_b_Deep_M->FindFixBin(Jet_eta[i],pt));
    mc_eff[2] = eff_b_Deep_T->GetEfficiency(eff_b_Deep_T->FindFixBin(Jet_eta[i],pt));
  }
  else if (Jet_hadronFlavour[i]==4) {
    FLAV = BTEntry::FLAV_C;
    mc_eff[0] = eff_c_Deep_L->GetEfficiency(eff_c_Deep_L->FindFixBin(Jet_eta[i],pt));
    mc_eff[1] = eff_c_Deep_M->GetEfficiency(eff_c_Deep_M->FindFixBin(Jet_eta[i],pt));
    mc_eff[2] = eff_c_Deep_T->GetEfficiency(eff_c_Deep_T->FindFixBin(Jet_eta[i],pt));
  }
  else if (Jet_hadronFlavour[i]==0) {
    FLAV = BTEntry::FLAV_UDSG;
    mc_eff[0] = eff_l_Deep_L->GetEfficiency(eff_l_Deep_L->FindFixBin(Jet_eta[i],pt));
    mc_eff[1] = eff_l_Deep_M->GetEfficiency(eff_l_Deep_M->FindFixBin(Jet_eta[i],pt));
    mc_eff[2] = eff_l_Deep_T->GetEfficiency(eff_l_Deep_T->FindFixBin(Jet_eta[i],pt));
  }
  double SF[3]={1,1,1};
  if (Deep_whichSF==0) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"central","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"central","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"central","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"central","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"central","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"central","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    /*
    if (_fastSim) {
      SF[0]*=fastreader_L.eval_auto_bounds("central",FLAV,Jet_eta[i],pt);
      SF[1]*=fastreader_M.eval_auto_bounds("central",FLAV,Jet_eta[i],pt) ;
      SF[2]*=fastreader_T.eval_auto_bounds("central",FLAV,Jet_eta[i],pt);
    }
    */
  }
  else if (Deep_whichSF==1) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"up","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"up","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"up","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"up","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"up","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"up","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    /*
    if (_fastSim) {
      SF[0]*=fastreader_L.eval_auto_bounds("up",FLAV,Jet_eta[i],pt);
      SF[1]*=fastreader_M.eval_auto_bounds("up",FLAV,Jet_eta[i],pt);
      SF[2]*=fastreader_T.eval_auto_bounds("up",FLAV,Jet_eta[i],pt);
    }
    */
  }
  else if (Deep_whichSF==2) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"down","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"down","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"down","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"down","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"down","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"down","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    /*
    if (_fastSim) {
      SF[0]*=fastreader_L.eval_auto_bounds("down",FLAV,Jet_eta[i],pt);
      SF[1]*=fastreader_M.eval_auto_bounds("down",FLAV,Jet_eta[i],pt);
      SF[2]*=fastreader_T.eval_auto_bounds("down",FLAV,Jet_eta[i],pt);
    }
    */
  }
  else if (Deep_whichSF==3) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"up_uncorrelated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"up_uncorrelated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"up_uncorrelated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"up_uncorrelated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"up_uncorrelated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"up_uncorrelated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
  }
  else if (Deep_whichSF==4) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"down_uncorrelated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"down_uncorrelated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"down_uncorrelated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"down_uncorrelated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"down_uncorrelated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"down_uncorrelated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
  }
  else if (Deep_whichSF==5) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"up_correlated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"up_correlated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"up_correlated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"up_correlated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"up_correlated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"up_correlated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
  }
  else if (Deep_whichSF==6) {
    if (Jet_hadronFlavour[i]==0){
      SF[0] = cset->at("deepJet_incl")->evaluate({"down_correlated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_incl")->evaluate({"down_correlated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_incl")->evaluate({"down_correlated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
    else {
      SF[0] = cset->at("deepJet_comb")->evaluate({"down_correlated","L",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[1] = cset->at("deepJet_comb")->evaluate({"down_correlated","M",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
      SF[2] = cset->at("deepJet_comb")->evaluate({"down_correlated","T",Jet_hadronFlavour[i],abs(Jet_eta[i]),pt});
    }
  }

  double rand=gen->Uniform(), rand2=gen->Uniform();
  
  char newtag = tag;
  double NtoL = (SF[0]-1)/(1/mc_eff[0]-1);
  double LtoN = (1-SF[0])/(1-mc_eff[1]*SF[1]/mc_eff[0]);
  double LtoM = (SF[1]-1)/(mc_eff[0]/mc_eff[1]-1);
  
  if (SF[1]<=1 && SF[0]<=1) {
    if (tag == 'M') if (rand>SF[1]) {newtag = 'L'; if (rand2<LtoN) newtag='0';}
    if (tag == 'L') if (rand<LtoN) newtag='0';
  }
  if (SF[1]<=1 && SF[0]>1) {
    if (tag == 'M') if (rand>SF[1]) newtag = 'L';
    if (tag == '0') if (rand<NtoL) newtag='L';
  }
  if (SF[1]>1 && SF[0]>1) {
    if (tag == '0') if (rand<NtoL) {newtag = 'L'; if (rand2<LtoM) newtag='M';}
    if (tag == 'L') if (rand<LtoM) newtag='M';
  }
  if (SF[1]>1 && SF[0]<=1) {
    if (tag == 'L') {
      if (rand<LtoM) newtag='M';
      else if (rand2<LtoN) newtag='0';
    }
  }
  
  if (debug) cout<<"pt "<<pt<<" eta "<<Jet_eta[i]<<" flav "<<Jet_hadronFlavour[i]<<" mc eff loose medium "<<mc_eff[0]<<" "<<mc_eff[1]<<" sf loose medium "<<SF[0]<<" "<<SF[1]<<" rand "<<rand<<" rand2 "<<rand2<<" tag "<<tag<<" newtag "<<newtag<<endl;

  if (tag!=newtag) {
    //new tag to top
    //if (newtag =='0') return BtagDeepWP[year_chooser][0]-0.0001;
    //if (newtag =='L') return BtagDeepWP[year_chooser][1]-0.0001;
    //if (newtag =='M') return 1;
    //new tag to bottom
    //if (newtag =='0') return 0;
    //if (newtag =='L') return BtagDeepWP[year_chooser][0]+0.0001;
    //if (newtag =='M') return BtagDeepWP[year_chooser][1]+0.0001;
    //new tag to random
    if (newtag =='0') return gen->Uniform(0,BtagDeepWP[year_chooser][0]);
    if (newtag =='L') return gen->Uniform(BtagDeepWP[year_chooser][0],BtagDeepWP[year_chooser][1]);
    if (newtag =='M') return gen->Uniform(BtagDeepWP[year_chooser][1],1);
  }
  return Jet_btagDeepFlavB[i];
}

void Analyzer::CalcBtagSF_AK8(double pt, char tag){
  if (year.find("2016preVFP")!=std::string::npos) {
    if (pt>=450 && pt<500) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.032; AK8btag_SF[0][1]=1.128; AK8btag_SF[0][2]=0.942;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.052; AK8btag_SF[1][1]=1.139; AK8btag_SF[1][2]=0.971;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.054; AK8btag_SF[2][1]=1.134; AK8btag_SF[2][2]=0.977;}
    }
    if (pt>=500 && pt<600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.062; AK8btag_SF[0][1]=1.154; AK8btag_SF[0][2]=0.980;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.068; AK8btag_SF[1][1]=1.146; AK8btag_SF[1][2]=0.995;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.139; AK8btag_SF[2][1]=1.222; AK8btag_SF[2][2]=1.058;}
    }
    if (pt>=600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.002; AK8btag_SF[0][1]=1.108; AK8btag_SF[0][2]=0.901;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=0.996; AK8btag_SF[1][1]=1.097; AK8btag_SF[1][2]=0.899;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.049; AK8btag_SF[2][1]=1.182; AK8btag_SF[2][2]=0.919;}
    }
  }
  if (year.find("2016postVFP")!=std::string::npos) {
    if (pt>=450 && pt<500) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.031; AK8btag_SF[0][1]=1.089; AK8btag_SF[0][2]=0.981;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.029; AK8btag_SF[1][1]=1.080; AK8btag_SF[1][2]=0.984;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.031; AK8btag_SF[2][1]=1.081; AK8btag_SF[2][2]=0.985;}
    }
    if (pt>=500 && pt<600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.089; AK8btag_SF[0][1]=1.165; AK8btag_SF[0][2]=1.021;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.070; AK8btag_SF[1][1]=1.136; AK8btag_SF[1][2]=1.008;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.055; AK8btag_SF[2][1]=1.119; AK8btag_SF[2][2]=0.983;}
    }
    if (pt>=600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.057; AK8btag_SF[0][1]=1.134; AK8btag_SF[0][2]=1.001;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.077; AK8btag_SF[1][1]=1.124; AK8btag_SF[1][2]=0.998;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.088; AK8btag_SF[2][1]=1.164; AK8btag_SF[2][2]=1.016;}
    }
  }
  if (year.find("2017")!=std::string::npos) {
    if (pt>=450 && pt<500) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=0.966; AK8btag_SF[0][1]=1.021; AK8btag_SF[0][2]=0.909;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.006; AK8btag_SF[1][1]=1.058; AK8btag_SF[1][2]=0.954;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.055; AK8btag_SF[2][1]=1.112; AK8btag_SF[2][2]=1.001;}
    }
    if (pt>=500 && pt<600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.021; AK8btag_SF[0][1]=1.074; AK8btag_SF[0][2]=0.969;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.051; AK8btag_SF[1][1]=1.107; AK8btag_SF[1][2]=0.996;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.067; AK8btag_SF[2][1]=1.124; AK8btag_SF[2][2]=1.012;}
    }
    if (pt>=600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=0.979; AK8btag_SF[0][1]=1.014; AK8btag_SF[0][2]=0.941;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=0.991; AK8btag_SF[1][1]=1.029; AK8btag_SF[1][2]=0.948;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.045; AK8btag_SF[2][1]=1.090; AK8btag_SF[2][2]=0.999;}
    }
  }
  if (year.find("2018")!=std::string::npos) {
    if (pt>=450 && pt<500) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=0.921; AK8btag_SF[0][1]=0.992; AK8btag_SF[0][2]=0.844;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=0.966; AK8btag_SF[1][1]=1.022; AK8btag_SF[1][2]=0.909;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=0.994; AK8btag_SF[2][1]=1.058; AK8btag_SF[2][2]=0.930;}
    }
    if (pt>=500 && pt<600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.006; AK8btag_SF[0][1]=1.030; AK8btag_SF[0][2]=0.980;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.033; AK8btag_SF[1][1]=1.063; AK8btag_SF[1][2]=1.008;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.072; AK8btag_SF[2][1]=1.113; AK8btag_SF[2][2]=1.036;}
    }
    if (pt>=600) {
      if (tag == 'T' || tag == 'M' || tag == 'L') {AK8btag_SF[0][0]=1.001; AK8btag_SF[0][1]=1.036; AK8btag_SF[0][2]=0.964;}
      if (tag == 'T' || tag == 'M')               {AK8btag_SF[1][0]=1.010; AK8btag_SF[1][1]=1.040; AK8btag_SF[1][2]=0.975;}
      if (tag == 'T')                             {AK8btag_SF[2][0]=1.046; AK8btag_SF[2][1]=1.084; AK8btag_SF[2][2]=1.008;}
    }
  }
}

void Analyzer::Systematics(map<string, int> systematics) {
  //if a systematics which only modifies the event weight is turned on, extra THN histograms are created
  //this is for to spare run time since event selection is not affected
  //So in the actual run nothing is changed in that case (no weight is changed), but only extra histograms are created
  //For lepton event weight SFs, this feature is not implemented (since only Peter uses those)
  for (auto const& x : systematics) {
    if (x.first=="AK8btag") {AK8btag_whichSF=x.second; evt_wgt_syst.push_back(x.first);}//CURRENTLY HARDCODED TO LOOSE AK8 BTAG WP
    else if (x.first=="Deep") Deep_whichSF=x.second;
    else if (x.first=="JER") JER_whichSF=x.second;
    else if (x.first=="JES") JES_whichSF=x.second;
    else if (x.first=="UES") UES_whichSF=x.second;
    else if (x.first=="JMS") JMS_whichSF=x.second;
    else if (x.first=="JMR") JMR_whichSF=x.second;
    else if (x.first=="phoID") {phoID_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="phoPix") {phoPix_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="eleID") {eleID_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="eleRec") {eleRec_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="muID") {muID_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="muISO") {muISO_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="tau") {tau_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="tauTES") tauTES_whichSF=x.second;
    else if (x.first=="L1prefire") {L1prefire_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else if (x.first=="Egamma_scale") Egamma_scale_whichSF=x.second;
    else if (x.first=="Egamma_smear") Egamma_smear_whichSF=x.second;
    else if (x.first=="genMET") genMET_whichSF=x.second;
    else if (x.first=="ISR") ISR_whichSF=x.second;
    else if (x.first=="PUweight") {PUweight_whichSF=x.second; evt_wgt_syst.push_back(x.first);}
    else cout<<"ERROR! Unknown systematics variable: "<<x.first<<endl;
  }
}

void Analyzer::init_syst_histograms(map<string,THnD*>& syst_THn_AK4, map<string,TH1D*>& syst_TH1_AK4, map<string,THnD*>& syst_THn_AK8, map<string,TH1D*>& syst_TH1_AK8){
  const int dim_ak4=3;
  int nbins_ak4[dim_ak4]={2,6,2};
  double xmin_ak4[dim_ak4]={-0.5,0.5,0.5};
  double xmax_ak4[dim_ak4]={1.5,6.5,2.5};
  const int dim_ak8=3;
  int nbins_ak8[dim_ak8]={2,6,2};
  double xmin_ak8[dim_ak8]={-0.5,0.5,0.5};
  double xmax_ak8[dim_ak8]={1.5,6.5,2.5};
  vector<string> updown = {"up","do"};
  for (auto i : evt_wgt_syst) {
    for (auto j : updown) {
      string name = "hn_AK4searchBins_"+i+"_"+j;
      THnD *hn_ak4 = new THnD(name.c_str(),";AK4;MET;njets",dim_ak4,nbins_ak4,xmin_ak4,xmax_ak4);
      unsigned int nsbins_ak4=hn_ak4->GetNbins();
      name = "h_AK4searchBins_"+i+"_"+j;
      TH1D *h_ak4= new TH1D(name.c_str(),";AK4searchBins",nsbins_ak4,0.5,nsbins_ak4+0.5);
      hn_ak4->Sumw2();
      syst_THn_AK4.insert(pair<string,THnD*>(i+"_"+j,hn_ak4));
      syst_TH1_AK4.insert(pair<string,TH1D*>(i+"_"+j,h_ak4));
      
      name = "hn_AK8searchBins_"+i+"_"+j;
      THnD *hn_ak8 = new THnD(name.c_str(),";AK8;MET;njets",dim_ak8,nbins_ak8,xmin_ak8,xmax_ak8);
      unsigned int nsbins_ak8=hn_ak8->GetNbins();
      name = "h_AK8searchBins_"+i+"_"+j;
      TH1D *h_ak8= new TH1D(name.c_str(),";AK8searchBins",nsbins_ak8,0.5,nsbins_ak8+0.5);
      hn_ak8->Sumw2();
      syst_THn_AK8.insert(pair<string,THnD*>(i+"_"+j,hn_ak8));
      syst_TH1_AK8.insert(pair<string,TH1D*>(i+"_"+j,h_ak8));
    }
  }
}

void Analyzer::fill_syst_histo_THn(map<string,THnD*>& syst_THn, const double* fill, double weight){
  for (auto const& x : syst_THn) {
    int updown = (x.first.find("up")!=string::npos) ? 0 : 1;
    if (x.first.find("phoID")!=string::npos)  x.second->Fill(fill,weight/pho_SF[whichPhoton]*pho_SF_ID[updown]);
    if (x.first.find("phoPix")!=string::npos) x.second->Fill(fill,weight/pho_SF[whichPhoton]*pho_SF_pix[updown]);
    if (x.first.find("L1prefire")!=string::npos) x.second->Fill(fill,weight/nonPrefiringProbability[0]*nonPrefiringProbability[updown+1]);
    if (x.first.find("PUweight")!=string::npos && updown==0) x.second->Fill(fill,weight/puWeight*puWeightUp);
    if (x.first.find("PUweight")!=string::npos && updown==1) x.second->Fill(fill,weight/puWeight*puWeightDown);
    if (x.first.find("AK8btag")!=string::npos) {
      if (string(x.second->GetName()).find("AK4")==string::npos) x.second->Fill(fill,weight/AK8btag_SF[0][0]*AK8btag_SF[0][updown]);
      else x.second->Fill(fill,weight);
    }
  }
}

void Analyzer::fill_syst_histo_TH1(map<string,THnD*>& syst_THn, map<string,TH1D*>& syst_TH1){
  for (auto const& x : syst_THn) {
    unsigned int nsbins=x.second->GetNbins();
    for (unsigned int i=1;i<nsbins+1;i++) {
      syst_TH1[x.first]->SetBinContent(i,x.second->GetBinContent(i));
      syst_TH1[x.first]->SetBinError(i,x.second->GetBinError(i));
    }
  }

}

void Analyzer::Sort(vector<pair<int,int>> &v, vector<float> *b, vector<float> *bb, unsigned int operation){
  for (unsigned int i=0;i<v.size();i++){
  pair<int,int> temp;
    for (unsigned int j=v.size()-1;j>i;j--){
      float DeepCSVTag_1j=(*b)[v.at(j).first]+(*bb)[v.at(j).first];
      float DeepCSVTag_2j=(*b)[v.at(j).second]+(*bb)[v.at(j).second];
      float DeepCSVTag_1j2=(*b)[v.at(j-1).first]+(*bb)[v.at(j-1).first];
      float DeepCSVTag_2j2=(*b)[v.at(j-1).second]+(*bb)[v.at(j-1).second];
      float value_j=0, value_j2=0;
      switch (operation) {
        case 0 : {value_j=DeepCSVTag_1j+DeepCSVTag_2j; value_j2=DeepCSVTag_1j2+DeepCSVTag_2j2;}
                 break;
        case 1 : {value_j=DeepCSVTag_1j*DeepCSVTag_2j; value_j2=DeepCSVTag_1j2*DeepCSVTag_2j2;}
                 break;
      }
      if (value_j>value_j2){
        temp=v[j-1];
        v[j-1]=v[j];
        v[j]=temp;
      }
    }
  }
}

void Analyzer::FillAK4tagging(vector<bool> ak4selected, vector<int> ak4trueselected, bool (&MassBtagAK4)[6], int (&true_higgsak4jet)[7]){
  for (unsigned int i=0;i<ak4selected.size();i++) {
    if (ak4selected[i]) {
      if (i==0) for (int j=0;j<6;j++) MassBtagAK4[j]=1;
      else if (i==1) for (int j=1;j<6;j++) MassBtagAK4[j]=1;
      else if (i==2) for (int j=2;j<6;j++) MassBtagAK4[j]=1;
      else if (i==3) for (int j=3;j<6;j++) MassBtagAK4[j]=1;
      else if (i==4) for (int j=4;j<6;j++) MassBtagAK4[j]=1;
      else MassBtagAK4[5]=1;
      if (ak4trueselected[i]) {
        if (i==0) for (int j=1;j<7;j++) true_higgsak4jet[j]=ak4trueselected[i];
        else if (i==1) for (int j=2;j<7;j++) true_higgsak4jet[j]=ak4trueselected[i];
        else if (i==2) for (int j=3;j<7;j++) true_higgsak4jet[j]=ak4trueselected[i];
        else if (i==3) for (int j=4;j<7;j++) true_higgsak4jet[j]=ak4trueselected[i];
        else if (i==4) for (int j=5;j<7;j++) true_higgsak4jet[j]=ak4trueselected[i];
        else true_higgsak4jet[6]=ak4trueselected[i];
      }
    }
  }
}

map<string,string> _cut_list = {{"HLTPho","photon triggers"},
  {"HLTMET","HLT_PFMET lowest unprescaled triggers"},
  {"isPVGood","Number of good vertices"},
  {"nPassEleL","number of loose electrons, also sets the working point for electrons to LOOSE"},
  {"nPassEleM","number of medium electrons, also sets the working point for electrons to MEDIUM"},
  {"nPassEleT","number of tight electrons, also sets the working point for electrons to TIGHT"},
  {"nPassMuL","number of loose muons, also sets the working point for muons to LOOSE"},
  {"nPassMuM","number of medium muons, also sets the working point for muons to MEDIUM"},
  {"nPassMuT","number of tight muons, also sets the working point for muons to TIGHT"},
  {"nPassTauL","number of loose taus, also sets the working point for taus to LOOSE"},
  {"nPassTauM","number of medium taus, also sets the working point for taus to MEDIUM"},
  {"nPassTauT","number of tight taus, also sets the working point for taus to TIGHT"},
  {"nPassLepL","number of loose leptons (e+mu+tau), also sets the working point for leptons to LOOSE"},
  {"nPassLepM","number of medium leptons (e+mu+tau), also sets the working point for leptons to MEDIUM"},
  {"nPassLepT","number of tight leptons (e+mu+tau), also sets the working point for leptons to TIGHT"},
  {"nPassLepVLL","number of veto e + loose mu + loose tau, also sets the working point for leptons"},
  {"nPassLepMLL","number of medium e + loose mu + loose tau, also sets the working point for leptons"},
  {"nPassLepLML","number of loose e + medium mu + loose tau, also sets the working point for leptons"},
  {"nPassLepLLM","number of loose e + loose mu + medium tau, also sets the working point for leptons"},
  {"nPassLepMMM","number of medium e + medium mu + medium tau, also sets the working point for leptons"},
  {"nPassIso","number of isolated tracks"},
  {"nPassFREleL","number of loose FRele (no overlap removal with photons)"},
  {"nPassFREleM","number of medium FRele (no overlap removal with photons)"},
  {"nPassFREleT","number of tight FRele (no overlap removal with photons)"},
  {"nPassElePhoL","number of loose elephotons (electrons as inverted pixelseed photons), also sets the working point for photons to LOOSE"},
  {"nPassElePhoM","number of medium elephotons (electrons as inverted pixelseed photons), also sets the working point for photons to MEDIUM"},
  {"nPassElePhoT","number of tight elephotons (electrons as inverted pixelseed photons), also sets the working point for photons to TIGHT"},
  {"nPassElePhoMVA80","number of MVA80 elephotons (electrons as inverted pixelseed photons), also sets the working point for photons to MVA80"},
  {"nPassElePhoMVA90","number of MVA90 elephotons (electrons as inverted pixelseed photons), also sets the working point for photons to MVA90"},
  {"nPassPhoL","number of loose photons, also sets the working point for photons to LOOSE"},
  {"nPassPhoM","number of medium photons, also sets the working point for photons to MEDIUM"},
  {"nPassPhoT","number of tight photons, also sets the working point for photons to TIGHT"},
  {"nPassPhoMVA80","number of MVA80 photons, also sets the working point for photons to MVA80"},
  {"nPassPhoMVA90","number of MVA90 photons, also sets the working point for photons to MVA90"},
  {"elePt","Pt of leading loose electron"},
  {"elephoPt","Pt of leading loose electronphoton"},
  {"phoEt","Et of leading loose photon"},
  {"HT","pt sum of loose jets"},
  {"EMHT","HT + Et of loose photons"},
  {"MT","invariant mass of leading loose photon and MET"},
  {"newMT","invariant mass of leading loose photon and newMET"}, //R
  {"ST","HT+MET+Et of loose photons"},
  {"newST","HT+newMET+Et of loose photons"}, //R
  {"newST_G","newMET+Et of loose photons"}, //R
  {"ST_G","MET+Et of loose photons"},
  {"metFilters","Recommended metFilters in a bitmap. Cuts on this means metFilters&cut operator cut. 2^0: goodVertices, 1: globalSuperTightHalo2016Filter, 2: HBHENoiseFilter, 3: HBHENoiseIsoFilter, 4: EcalDeadCellTriggerPrimitiveFilter, 5: BadPFMuonFilter, 6: BadChargedCandidateFilter, 7: eeBadScFilter, 8: ecalBadCalibFilter"},
  {"metFilters_hardcoded","Hardcoded recommended metFilters"},
  {"Flag_METFilters","Flag_METFilters in nanoAOD"},
  {"MET","pfMET"},
  {"newMET","newMET"}, //R
  {"trueMET","trueMET"}, //R
  {"ZMassDiff","Invariant mass and Z boson mass difference"}, //R
  {"dphi_met_jet","Dphi of met and nearest jet/photon with pt>100"},
  {"dphi_met_jet_at_high_njet","Dphi of met and nearest jet/photon with pt>100, only if nonHiggsJet>=4"},
  {"dphi_met_jet_at_low_njet","Dphi of met and nearest jet/photon with pt>100, only if nonHiggsJet<4"},
  {"dphi_met_btag","Dphi of met and highest btagged jet"},
  {"dphi_met_btag_at_high_njet","Dphi of met and highest btagged jet, only if nonHiggsJet>=4"},
  {"dphi_met_btag_at_low_njet","Dphi of met and highest btagged jet, only if nonHiggsJet<4"},
  {"dphi_met_btags","Dphi of met and closest btagged jet"},
  {"dphi_met_btags_at_high_njet","Dphi of met and closest btagged jet, only if nonHiggsJet>=4"},
  {"dphi_met_btags_at_low_njet","Dphi of met and closest btagged jet, only if nonHiggsJet<4"},
  {"dphi_met_H_candidate","Dphi of met and Higgs candidate"},
  {"dphi_met_Hmin_candidate","Dphi of met and minimum of Higgs candidate jets"},
  {"dphi_met_H_candidate_at_low_njet","Dphi of met and Higgs candidate, only if nonHiggsJet<4"},
  {"dphi_met_Hmin_candidate_at_low_njet","Dphi of met and minimum of Higgs candidate jets, only if nonHiggsJet<4"},
  {"L1prefire","True if event could be affected by L1prefire"},
  {"nPassAK4","number of loose ak4 jets"},
  {"nPassAK8","number of loose ak8 jets"},
  {"nonHiggsJet","number of loose ak4 jets which are not Higgs candidates"},
  {"noHmass_in_event","Neither AK8 nor AK4 pair with correct mass found in event (when True=1)"},
  {"bcounterDeep_L","number of loose Deep btagged jets"},
  {"bcounterDeep_M","number of medium Deep btagged jets"},
  {"bcounterDeep_T","number of tight Deep btagged jets"},
  {"bcounterDDBvL_L","number of loose DDBvL btagged jets"},
  {"bcounterDDBvL_M1","number of medium 1 DDBvL btagged jets"},
  {"bcounterDDBvL_M2","number of medium 2 DDBvL btagged jets"},
  {"bcounterDDBvL_T1","number of tight 1 DDBvL btagged jets"},
  {"bcounterDDBvL_T2","number of tight 2 DDBvL btagged jets"},
  {"AK8Btag_selected","AK8 btag (0-Nobtag, 1-loose, 2-medium1, ...) of the higgs candidate ak8jet"},
  {"Deep_selected","Deep btag (0-Nobtag, 1-1 loosebtag, 2-2 loose btag) of the higgs candidate ak4jets"},
  {"Deep_medium_selected","Deep btag (0-NoMediumbtag, 1-1 medium btag) of the higgs candidate ak4jets"},
  {"sth_selected","Deep_selected+AK8Btag_selected"},
  {"passBtag","Higgs candidate ak8jet passes medium btag"},
  {"passAK4Btag1","Higgs candidate 1st ak4jet passes loose btag"},
  {"passAK4Btag2","Higgs candidate 2nd ak4jet passes loose btag"},
  {"passHiggsMass","At least 1 ak8jet exist with mass 70 to 200GeV"},
  {"passAK4HiggsMass","At least 1 pair of ak4jets exist with mass 70 to 200GeV"},
  {"notAK4","True if 2AK4 Higgs candidate bjets are NOT found."},
  {"Hbb","Higgs to bb found in the event (only for Signal...)"},
  {"SignalHiggs","Neutralinos decay to 0,1 or 2 Higgs. Cut on number of Higgs bosons."},
  {"SignalZ","Electroweakly produced neutralinos decay to 0,1 or 2 Z bosons. Cut on number of Z bosons."},
  {"truePU","Cut on number of true pileup."},
  {"nVtx","Cut on number of vertices."},
  {"mcLeptonFilter","True if MC truth lepton was present in the event"},
  {"1or2jet","Boolean. Presence of at least 1 AK8 or 2 AK4 jet(s)"}};

bool CompareCuts(vector<string> input_cuts){
  for (auto i : input_cuts) {
    bool match=false;
    for (auto const& j : _cut_list) {
      if (i == j.first) {match=true; break;}
    }
    if (!match) {cout<<"ERROR! Unkown cut variable "<<i<<"\nPlease run ./Analyzer -c to see available cuts. Exiting..."<<endl; return 0;}
  }
  return 1;
}

void PrintCuts(){
  cout<<"Printing out available cut variables:"<<endl;
  for (auto const& i : _cut_list) cout<<i.first<<"\t"<<i.second<<endl;
  cout<<"Exiting..."<<endl;
}

void PrintHelp(){
  cout<<"\nHow to use Analyzer?"<<endl;
  cout<<"Options:"<<endl;
  cout<<"-o outname \t\t Output filename will be set: histos/Analyzer_histos_+outname"<<endl;
  cout<<"-i inputfile1 inputfile2 ... \t\t Inputfiles"<<endl;
  cout<<"-b bname \t\t Btag efficiency file location and name (needed only for MC). Write 'hardcoded' to use predefined values."<<endl;
  cout<<"-x xsec \t\t Use xsec (pb)"<<endl;
  cout<<"-y year \t\t Use year"<<endl;
  cout<<"-f \t\t Turn on FastSim option (for MC)"<<endl;
  cout<<"-F 1 or 2\t\t Turn on FakeRate weights. 1->for electrons 2->\"pixelseed\" electrons. Needs input file \"input/FakeRate_EGamma.root\""<<endl;
  cout<<"-s \t\t Turn on \"signalstudy\" option, which fills MC-truth histos"<<endl;
  cout<<"-q \t\t Quiet option, only errors are printed"<<endl;
  cout<<"-d \t\t Debugging mode, many printouts, run only for few events"<<endl;
  cout<<"-S \t\t SignalScan run. Use only for T5qqqqHG MC!"<<endl;
  cout<<"-C \t\t Counts and prints out T5qqqqHg signal events for each mass point"<<endl;
  cout<<"-h \t\t Print out this help"<<endl;
  cout<<"-c \t\t Print out available cut variables"<<endl;
  cout<<"-t x \t\t Test running only on \"x\" number of events. (default is x=1000)"<<endl;
  cout<<"-A met_cut \t\t turns on ABCD distribution histograms, with the MET cut (in GeV) as input. Automatically introduces the MET cut and a \"sth_selected>0\" cut in general."<<endl;
  cout<<"-T \t\t Running for Top Region"<<endl; //R
  cout<<"-O \t\t Running Overlap Correction"<<endl; //R
  cout<<"-g \t\t Turn on neutralino goodpair option only for T5qqqqHg"<<endl;
  cout<<"-T \t\t Use signal mass point determination from the tree GenModel variables"<<endl;
  cout<<"-p \t\t Use ParticleNet AK8 btagger instead of DDBvL"<<endl;
  cout<<"--lept \t\t set lepton pt cut for e/m/t"<<endl;
  cout<<"FORMAT:\n--lept e 10 m 5 t 20"<<endl;
  cout<<"--syst \t\t run with +- systematics settings"<<endl;
  cout<<"FORMAT:\n--syst systematics_type 1 systematics_type 2 ..."<<endl;
  cout<<"The number meaning: 1 = upper, 2 = lower\n"<<endl;
  cout<<"--cuts \t\t Run on specified cuts, otherwise hardcoded cuts"<<endl;
  cout<<"\nHow to set cuts?"<<endl;
  cout<<"Cuts are always set in 3 parts: variable operator value"<<endl;
  cout<<"FORMAT:\n--cuts cut_variable1 cut_operator1 cut_value1 cut_variable2 cut_operator2 cut_value2 ..."<<endl;
  cout<<"Operators can be the following strings:"<<endl;
  cout<<"eq\tWhich is == "<<endl; 
  cout<<"Neq\tWhich is != "<<endl; 
  cout<<"less\tWhich is < "<<endl; 
  cout<<"great\tWhich is > "<<endl; 
  cout<<"lesseq\tWhich is <= "<<endl; 
  cout<<"greateq\tWhich is >= "<<endl; 
  cout<<"and\tWhich is & "<<endl; 
  cout<<"or\tWhich is | "<<endl; 
  cout<<"xor\tWhich is ^ "<<endl;
  cout<<"\nExamples:"<<endl;
  cout<<"./Analyzer -i /foo/bar/ggntuple_data.root -o test.root --cuts HLTPho and 4096 nPassPhoL great 0 phoEt great 175"<<endl;
  cout<<"./Analyzer -i /foo/bar/ggntuple_mc.root -o test.root -b /foo/bar/ggntuple_mc_BTagEff.root --cuts HLTPho and 4096 nPassPhoL great 0 phoEt great 175"<<endl;
  cout<<"NOTE: if you want to cut on object's (electron, photon, ...) variable (Pt, Et, ...) first cut on the # of object itself!"<<endl;
  cout<<"E.g.: --cuts phoEt great 175\t might BREAK the code! (if there's an event with no photons in ntuple)"<<endl;
  cout<<"Instead use: --cuts nPassPhoM great 0 phoEtM great 175\t"<<endl;
  cout<<"\nHave fun!"<<endl;
}
#endif // #ifdef Analyzer_cxx

