#include "TRandom3.h"
#include "TMath.h"

#include "OrganiseVariables.h"

using namespace std;
using namespace TMath;

Dst2D0pi::OrganiseVariables::OrganiseVariables(TString _name, Variables_Analysis *_v):
  Analyser(_name),
  v(_v)
{}

Dst2D0pi::OrganiseVariables::~OrganiseVariables(){}

Double_t Dst2D0pi::OrganiseVariables::CalculateSignedVtxDist() {
  
  Double_t dist(0.);

  dist += Power( v->Dst_ENDVERTEX_X - v->Dst_OWNPV_X, 2 );
  dist += Power( v->Dst_ENDVERTEX_Y - v->Dst_OWNPV_Y, 2 );
  dist += Power( v->Dst_ENDVERTEX_Z - v->Dst_OWNPV_Z, 2 );

  dist = ( v->Dst_ENDVERTEX_Z - v->Dst_OWNPV_Z ) / Abs( v->Dst_ENDVERTEX_Z - v->Dst_OWNPV_Z )*Sqrt(dist);

  return dist;
}

Double_t Dst2D0pi::OrganiseVariables::CalculateVtxDistZ() {
  
  Double_t dist(0.);
  dist = v->Dst_ENDVERTEX_Z - v->Dst_OWNPV_Z ;
  return dist;
}

Int_t Dst2D0pi::OrganiseVariables::getBestPVIndex() {
  //returns the index in the lists of PV variables for the PV with the smallest
  //D0 IPChi2. Also performs some checks
  vector<float> ipchi2s;
  for (unsigned int i=0; i < v->nPV; i++) {
    ipchi2s.push_back( v->D0_AllIPchi2[i] );
  }
  //get the index of minimum entry
  return distance( ipchi2s.begin(), min_element( ipchi2s.begin(), ipchi2s.end()) );

}

bool Dst2D0pi::OrganiseVariables::AnalyseEvent(){
 
  // add the new variables or manipulate them
  TRandom3 rnd(0);
  v->Training = rnd.Uniform();

  v->Dst_VCHI2NDOF = v->Dst_ENDVERTEX_CHI2 / v->Dst_ENDVERTEX_NDOF;
  v->D0_VCHI2NDOF  = v->D0_ENDVERTEX_CHI2  / v->D0_ENDVERTEX_NDOF ;

  v->D0_LTIME *= 1000.;

  v->mDz  = v->D0_M / 1000.;
  v->mDst = v->Dst_M / 1000.;
  v->dm   = (v->Dst_M - v->D0_M) / 1000.;
  v->Dst_Vtx_dist_signed = CalculateSignedVtxDist();
  v->Dst_Vtx_dist_z = CalculateVtxDistZ();

  v->Dst_P  /= 1000.;
  v->Dst_PX /= 1000.;
  v->Dst_PY /= 1000.;
  v->Dst_PZ /= 1000.;
  v->Dst_PE /= 1000.;
  v->Dst_PT /= 1000.;

  v->D0_P  /= 1000.;
  v->D0_PX /= 1000.;
  v->D0_PY /= 1000.;
  v->D0_PZ /= 1000.;
  v->D0_PE /= 1000.;
  v->D0_PT /= 1000.;

  v->K_P  /= 1000.;
  v->K_PX /= 1000.;
  v->K_PY /= 1000.;
  v->K_PZ /= 1000.;
  v->K_PE /= 1000.;
  v->K_PT /= 1000.;

  v->Pi_P  /= 1000.;
  v->Pi_PX /= 1000.;
  v->Pi_PY /= 1000.;
  v->Pi_PZ /= 1000.;
  v->Pi_PE /= 1000.;
  v->Pi_PT /= 1000.;

  v->PiBach_P  /= 1000.;
  v->PiBach_PX /= 1000.;
  v->PiBach_PY /= 1000.;
  v->PiBach_PZ /= 1000.;
  v->PiBach_PE /= 1000.;
  v->PiBach_PT /= 1000.;

  Int_t bpvi = getBestPVIndex();
  v->BPVX = v->PVX[bpvi];
  v->BPVY= v->PVY[bpvi];
  v->BPVZ = v->PVZ[bpvi];
  v->BPVXERR = v->PVXERR[bpvi];
  v->BPVYERR = v->PVYERR[bpvi];
  v->BPVZERR = v->PVZERR[bpvi];
  v->BPVCHI2 = v->PVCHI2[bpvi];
  v->BPVNDOF = v->PVNDOF[bpvi];
  v->BPVNTRACKS = v->PVNTRACKS[bpvi];
  //v->BPVsumPT = v->PVsumPT[bpvi];

  //transfer the DTF PV arrays into a single value
  v->Dst_DTF_D0_M = v->arr_Dst_DTF_D0_M[0];
  v->Dst_DTF_M = v->arr_Dst_DTF_M[0];
  v->Dst_DTF_chi2 = v->arr_Dst_DTF_chi2[0];
  v->Dst_DTF_bothmass_D0_M = v->arr_Dst_DTF_bothmass_D0_M[0];
  v->Dst_DTF_bothmass_M = v->arr_Dst_DTF_bothmass_M[0];
  v->Dst_DTF_bothmass_chi2 = v->arr_Dst_DTF_bothmass_chi2[0];
  v->Dst_DTF_mass_D0_M = v->arr_Dst_DTF_mass_D0_M[0];
  v->Dst_DTF_mass_M = v->arr_Dst_DTF_mass_M[0];
  v->Dst_DTF_mass_chi2 = v->arr_Dst_DTF_mass_chi2[0];
  v->Dst_DTF_mass_vtx_D0_M = v->arr_Dst_DTF_mass_vtx_D0_M[0];
  v->Dst_DTF_mass_vtx_M = v->arr_Dst_DTF_mass_vtx_M[0];
  v->Dst_DTF_mass_vtx_chi2 = v->arr_Dst_DTF_mass_vtx_chi2[0];
  v->Dst_DTF_vtx_D0_M = v->arr_Dst_DTF_vtx_D0_M[0];
  v->Dst_DTF_vtx_M = v->arr_Dst_DTF_vtx_M[0];
  v->Dst_DTF_vtx_chi2 = v->arr_Dst_DTF_vtx_chi2[0];

  return true;
}
