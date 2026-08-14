// CLineDetector.cpp
// Implementation of the line-detector subsystem.

#include "CLineDetector.h"

#include <iostream>

CLineDetector::CLineDetector( const std::string& aName )
  : CSubsystem( aName ),
    mReadingNumber( 0 ),
    mError( 0 )
{
}

void CLineDetector::Update()
{
  const int NumReadings = 4;
  const int Track[NumReadings] = { 2, 1, -1, -2 };

  mError = Track[mReadingNumber];
  mReadingNumber = ( mReadingNumber + 1 ) % NumReadings;
}

void CLineDetector::Report()
{
  std::cout << GetName() << ": line error " << mError << std::endl;
}

int CLineDetector::GetError()
{
  return mError;
}
