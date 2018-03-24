///////////////////////////////////////////////////////////////////////////////
// FILE:          ALC_REV_ILE4Wrapper.h
// PROJECT:       Micro-Manager
// SUBSYSTEM:     DeviceAdapters
//-----------------------------------------------------------------------------

#ifndef _ALC_REV_ILE4WRAPPER_H_
#define _ALC_REV_ILE4WRAPPER_H_

#include "ALC_REV.h"
#include "ALC_REV_ILE2.h"

class CALC_REV_ILE4Wrapper : public IALC_REV_ILE4
{
public:
  CALC_REV_ILE4Wrapper( IALC_REV_ILE4* ALC_REV_ILE4 );
  ~CALC_REV_ILE4Wrapper();

  // IALC_REV_ILE4
  bool GetNumberOfUnits( int *NumUnits );
  bool IsActiveBlankingManagementPresent( int UnitIndex, bool *Present );
  bool GetNumberOfLines( int UnitIndex, int *NumberOfLines );
  bool GetActiveBlankingState( int UnitIndex, int *EnabledPattern );
  bool SetActiveBlankingState( int UnitIndex, int EnabledPattern );
  
private:
  IALC_REV_ILE4* ALC_REV_ILE4_;
};

#endif
