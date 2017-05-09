#include "TMath.h"
#include "TLorentzVector.h"

#include "PreSelection.h"

using namespace std;
using namespace TMath;

Dst2D0pi::PreSelection::PreSelection(TString _name, Variables_Analysis *_v):
	Analyser(_name),
  v(_v)
{}

Dst2D0pi::PreSelection::~PreSelection(){}

bool Dst2D0pi::PreSelection::AnalyseEvent(){

  //lnip cut
  //if ( v->D0_IPCHI2_OWNPV > 9. ) return false;

  //binning cuts as of May17
  if ( v->dm < 0.1395 || v->dm > 0.16 ) return false; 
  if ( v->mDz < 1.81 || v->mDz > 1.92 ) return false; 

  //radial cut
  if ( Sqrt( Power( v->D0_ENDVERTEX_X - v->Dst_OWNPV_X , 2 ) +
             Power( v->D0_ENDVERTEX_Y - v->Dst_OWNPV_Y , 2 ) ) > 4. ) return false;
  //other cuts
  if ( v->Dst_ENDVERTEX_CHI2 / v->Dst_ENDVERTEX_NDOF > 15. ) return false;
  if ( v->Dst_ENDVERTEX_ZERR > 20. ) return false;
  
  return true;
}

