#ifndef Dst2D0pi_Variables_Analysis_h
#define Dst2D0pi_Variables_Analysis_h

#include <iostream>
#include "TROOT.h"
#include "TTree.h"

#include "Variables.h"

namespace Dst2D0pi {

  class Variables_Analysis : public Variables {

    public:

      Variables_Analysis();
      ~Variables_Analysis();

      void setInputBranches(TTree *tree);
      void setOutputBranches(TTree *tree);

      Double_t             Dst_BPVVDZ                              ;
      Double_t             Dst_DIRA_OWNPV                          ;
      Double_t             Dst_ENDVERTEX_CHI2                      ;
      Double_t             Dst_FD_CHI2                             ;
      Double_t             Dst_MINIP                               ;
      Double_t             Dst_MINIPCHI2                           ;
      Double_t             Dst_P_Parallel                          ;
      Double_t             Dst_P_Perp                              ;
      Double_t             Dst_TAU                                 ;
      Double_t             Dst_X_travelled                         ;
      Double_t             Dst_Y_travelled                         ;
      Double_t             Dst_Z_travelled                         ;
      Double_t             Dst_P                                   ;
      Double_t             Dst_PT                                  ;
      Double_t             Dst_PE                                  ;
      Double_t             Dst_PX                                  ;
      Double_t             Dst_PY                                  ;
      Double_t             Dst_PZ                                  ;
      Double_t             Dst_MM                                  ;
      Double_t             Dst_MMERR                               ;
      Double_t             Dst_M                                   ;
      Bool_t               Dst_L0Global_Dec                        ;
      Bool_t               Dst_L0Global_TIS                        ;
      Bool_t               Dst_L0Global_TOS                        ;
      Bool_t               Dst_Hlt1Global_Dec                      ;
      Bool_t               Dst_Hlt1Global_TIS                      ;
      Bool_t               Dst_Hlt1Global_TOS                      ;
      Bool_t               Dst_Hlt1Phys_Dec                        ;
      Bool_t               Dst_Hlt1Phys_TIS                        ;
      Bool_t               Dst_Hlt1Phys_TOS                        ;
      Bool_t               Dst_Hlt2Global_Dec                      ;
      Bool_t               Dst_Hlt2Global_TIS                      ;
      Bool_t               Dst_Hlt2Global_TOS                      ;
      Bool_t               Dst_Hlt2Phys_Dec                        ;
      Bool_t               Dst_Hlt2Phys_TIS                        ;
      Bool_t               Dst_Hlt2Phys_TOS                        ;
      Bool_t               Dst_L0HadronDecision_Dec                ;
      Bool_t               Dst_L0HadronDecision_TIS                ;
      Bool_t               Dst_L0HadronDecision_TOS                ;
      Bool_t               Dst_L0ElectronDecision_Dec              ;
      Bool_t               Dst_L0ElectronDecision_TIS              ;
      Bool_t               Dst_L0ElectronDecision_TOS              ;
      Bool_t               Dst_L0PhotonDecision_Dec                ;
      Bool_t               Dst_L0PhotonDecision_TIS                ;
      Bool_t               Dst_L0PhotonDecision_TOS                ;
      Bool_t               Dst_L0MuonDecision_Dec                  ;
      Bool_t               Dst_L0MuonDecision_TIS                  ;
      Bool_t               Dst_L0MuonDecision_TOS                  ;
      Bool_t               Dst_L0DiMuonDecision_Dec                ;
      Bool_t               Dst_L0DiMuonDecision_TIS                ;
      Bool_t               Dst_L0DiMuonDecision_TOS                ;
      Bool_t               Dst_Hlt1TrackAllL0Decision_Dec          ;
      Bool_t               Dst_Hlt1TrackAllL0Decision_TIS          ;
      Bool_t               Dst_Hlt1TrackAllL0Decision_TOS          ;
      Bool_t               Dst_Hlt1TrackMuonDecision_Dec           ;
      Bool_t               Dst_Hlt1TrackMuonDecision_TIS           ;
      Bool_t               Dst_Hlt1TrackMuonDecision_TOS           ;
      Bool_t               Dst_Hlt1CEPVeloCutDecision_Dec          ;
      Bool_t               Dst_Hlt1CEPVeloCutDecision_TIS          ;
      Bool_t               Dst_Hlt1CEPVeloCutDecision_TOS          ;
      Bool_t               Dst_Hlt1CalibTrackingKPiDetachedDecision_Dec;
      Bool_t               Dst_Hlt1CalibTrackingKPiDetachedDecision_TIS;
      Bool_t               Dst_Hlt1CalibTrackingKPiDetachedDecision_TOS;
      Bool_t               Dst_Hlt1L0AnyDecision_Dec               ;
      Bool_t               Dst_Hlt1L0AnyDecision_TIS               ;
      Bool_t               Dst_Hlt1L0AnyDecision_TOS               ;
      Bool_t               Dst_Hlt1CalibTrackingKPiDecision_Dec    ;
      Bool_t               Dst_Hlt1CalibTrackingKPiDecision_TIS    ;
      Bool_t               Dst_Hlt1CalibTrackingKPiDecision_TOS    ;
      Bool_t               Dst_Hlt1CalibTrackingKKDecision_Dec     ;
      Bool_t               Dst_Hlt1CalibTrackingKKDecision_TIS     ;
      Bool_t               Dst_Hlt1CalibTrackingKKDecision_TOS     ;
      Bool_t               Dst_Hlt1CalibTrackingPiPiDecision_Dec   ;
      Bool_t               Dst_Hlt1CalibTrackingPiPiDecision_TIS   ;
      Bool_t               Dst_Hlt1CalibTrackingPiPiDecision_TOS   ;
      Bool_t               Dst_Hlt1B2GammaGammaDecision_Dec        ;
      Bool_t               Dst_Hlt1B2GammaGammaDecision_TIS        ;
      Bool_t               Dst_Hlt1B2GammaGammaDecision_TOS        ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_KKDecision_Dec       ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_KKDecision_TIS       ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_KKDecision_TOS       ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_KPiDecision_Dec      ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_KPiDecision_TIS      ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_KPiDecision_TOS      ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_PiPiDecision_Dec     ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_PiPiDecision_TIS     ;
      Bool_t               Dst_Hlt1B2HH_LTUNB_PiPiDecision_TOS     ;
      Bool_t               Dst_Hlt1B2PhiGamma_LTUNBDecision_Dec    ;
      Bool_t               Dst_Hlt1B2PhiGamma_LTUNBDecision_TIS    ;
      Bool_t               Dst_Hlt1B2PhiGamma_LTUNBDecision_TOS    ;
      Bool_t               Dst_Hlt1B2PhiPhi_LTUNBDecision_Dec      ;
      Bool_t               Dst_Hlt1B2PhiPhi_LTUNBDecision_TIS      ;
      Bool_t               Dst_Hlt1B2PhiPhi_LTUNBDecision_TOS      ;
      Bool_t               Dst_Hlt2CharmHadD02KPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadD02KPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadD02KPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDpm2KKPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDpm2KKPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDpm2KKPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDpm2KPiPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDpm2KPiPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDpm2KPiPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDs2KKPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDs2KKPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDs2KKPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDs2PiPiPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDs2PiPiPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDs2PiPiPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Gamma_D02KPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Gamma_D02KPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Gamma_D02KPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi0_D02KPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi0_D02KPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi0_D02KPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi_D02K3Pi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi_D02K3Pi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi_D02K3Pi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi_D02KPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi_D02KPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDst_2D0Pi_D02KPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadDst_2DsGamma_Ds2KKPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadDst_2DsGamma_Ds2KKPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadDst_2DsGamma_Ds2KKPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadLc2KPK_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadLc2KPK_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadLc2KPK_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadLc2KPPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadLc2KPPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadLc2KPPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadLc2PiPPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadLc2PiPPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadLc2PiPPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadSigmac_2LcPi_XSecTurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadSigmac_2LcPi_XSecTurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadSigmac_2LcPi_XSecTurboDecision_TOS;
      Bool_t               Dst_Hlt2CharmHadXic02PKKPi_TurboDecision_Dec;
      Bool_t               Dst_Hlt2CharmHadXic02PKKPi_TurboDecision_TIS;
      Bool_t               Dst_Hlt2CharmHadXic02PKKPi_TurboDecision_TOS;
      Double_t             D0_BPVVDZ                               ;
      Double_t             D0_DIRA_OWNPV                           ;
      Double_t             D0_ENDVERTEX_CHI2                       ;
      Double_t             D0_FD_CHI2                              ;
      Double_t             D0_MINIP                                ;
      Double_t             D0_MINIPCHI2                            ;
      Double_t             D0_P_Parallel                           ;
      Double_t             D0_P_Perp                               ;
      Double_t             D0_TAU                                  ;
      Double_t             D0_X_travelled                          ;
      Double_t             D0_Y_travelled                          ;
      Double_t             D0_Z_travelled                          ;
      Double_t             D0_CosTheta                             ;
      Double_t             D0_P                                    ;
      Double_t             D0_PT                                   ;
      Double_t             D0_PE                                   ;
      Double_t             D0_PX                                   ;
      Double_t             D0_PY                                   ;
      Double_t             D0_PZ                                   ;
      Double_t             D0_MM                                   ;
      Double_t             D0_MMERR                                ;
      Double_t             D0_M                                    ;
      Double_t             Kminus_BPVVDZ                           ;
      Double_t             Kminus_DIRA_OWNPV                       ;
      Double_t             Kminus_ENDVERTEX_CHI2                   ;
      Double_t             Kminus_FD_CHI2                          ;
      Double_t             Kminus_MINIP                            ;
      Double_t             Kminus_MINIPCHI2                        ;
      Double_t             Kminus_P_Parallel                       ;
      Double_t             Kminus_P_Perp                           ;
      Double_t             Kminus_TAU                              ;
      Double_t             Kminus_X_travelled                      ;
      Double_t             Kminus_Y_travelled                      ;
      Double_t             Kminus_Z_travelled                      ;
      Double_t             Kminus_CosTheta                         ;
      Double_t             Kminus_P                                ;
      Double_t             Kminus_PT                               ;
      Double_t             Kminus_PE                               ;
      Double_t             Kminus_PX                               ;
      Double_t             Kminus_PY                               ;
      Double_t             Kminus_PZ                               ;
      Double_t             Kminus_M                                ;
      Double_t             piplus_BPVVDZ                           ;
      Double_t             piplus_DIRA_OWNPV                       ;
      Double_t             piplus_ENDVERTEX_CHI2                   ;
      Double_t             piplus_FD_CHI2                          ;
      Double_t             piplus_MINIP                            ;
      Double_t             piplus_MINIPCHI2                        ;
      Double_t             piplus_P_Parallel                       ;
      Double_t             piplus_P_Perp                           ;
      Double_t             piplus_TAU                              ;
      Double_t             piplus_X_travelled                      ;
      Double_t             piplus_Y_travelled                      ;
      Double_t             piplus_Z_travelled                      ;
      Double_t             piplus_CosTheta                         ;
      Double_t             piplus_P                                ;
      Double_t             piplus_PT                               ;
      Double_t             piplus_PE                               ;
      Double_t             piplus_PX                               ;
      Double_t             piplus_PY                               ;
      Double_t             piplus_PZ                               ;
      Double_t             piplus_M                                ;
      Double_t             piplus0_BPVVDZ                          ;
      Double_t             piplus0_DIRA_OWNPV                      ;
      Double_t             piplus0_ENDVERTEX_CHI2                  ;
      Double_t             piplus0_FD_CHI2                         ;
      Double_t             piplus0_MINIP                           ;
      Double_t             piplus0_MINIPCHI2                       ;
      Double_t             piplus0_P_Parallel                      ;
      Double_t             piplus0_P_Perp                          ;
      Double_t             piplus0_TAU                             ;
      Double_t             piplus0_X_travelled                     ;
      Double_t             piplus0_Y_travelled                     ;
      Double_t             piplus0_Z_travelled                     ;
      Double_t             piplus0_CosTheta                        ;
      Double_t             piplus0_P                               ;
      Double_t             piplus0_PT                              ;
      Double_t             piplus0_PE                              ;
      Double_t             piplus0_PX                              ;
      Double_t             piplus0_PY                              ;
      Double_t             piplus0_PZ                              ;
      Double_t             piplus0_M                               ;
      UInt_t               nCandidate                              ;
      ULong64_t            totCandidates                           ;
      ULong64_t            EventInSequence                         ;
      UInt_t               runNumber                               ;
      ULong64_t            eventNumber                             ;
      UInt_t               BCID                                    ;
      Int_t                BCType                                  ;
      UInt_t               OdinTCK                                 ;
      UInt_t               L0DUTCK                                 ;
      UInt_t               HLT1TCK                                 ;
      UInt_t               HLT2TCK                                 ;
      ULong64_t            GpsTime                                 ;
      Short_t              Polarity                                ;
      Int_t                nPVs                                    ;
      Int_t                nTracks                                 ;
      Int_t                nLongTracks                             ;
      Int_t                nDownstreamTracks                       ;
      Int_t                nUpstreamTracks                         ;
      Int_t                nVeloTracks                             ;
      Int_t                nTTracks                                ;
      Int_t                nBackTracks                             ;
      Int_t                nRich1Hits                              ;
      Int_t                nRich2Hits                              ;
      Int_t                nVeloClusters                           ;
      Int_t                nITClusters                             ;
      Int_t                nTTClusters                             ;
      Int_t                nOTClusters                             ;
      Int_t                nSPDHits                                ;
      Int_t                nMuonCoordsS0                           ;
      Int_t                nMuonCoordsS1                           ;
      Int_t                nMuonCoordsS2                           ;
      Int_t                nMuonCoordsS3                           ;
      Int_t                nMuonCoordsS4                           ;
      Int_t                nMuonTracks                             ;
  };

}
#endif
