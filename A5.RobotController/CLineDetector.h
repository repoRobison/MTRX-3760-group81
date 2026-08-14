// CLineDetector.h
// Line-detector subsystem with a changing error reading.

#ifndef CLINEDETECTOR_H
#define CLINEDETECTOR_H

#include "CSubsystem.h"

// CLineDetector is a subsystem that produces successive track-error readings.
class CLineDetector : public CSubsystem
{
  public:
    // Creates a detector before its first reading.
    CLineDetector( const std::string& aName );

    // Update reads the next line error from the simulated track.
    void Update();

    // Report prints the current line error.
    void Report();

    // GetError supports verification of the detector state.
    int GetError();

  private:
    int mReadingNumber;
    int mError;
};

#endif
