// CLineDetector.h
// Line detector subsystem that keeps track of the current line error.

#ifndef CLINEDETECTOR_H
#define CLINEDETECTOR_H

#include "CSubsystem.h"

// CLineDetector reads line errors from the simulated track.
class CLineDetector : public CSubsystem
{
  public:
    // Starts the detector before the first reading.
    CLineDetector( const std::string& aName );

    // Reads the next line error.
    void Update();

    // Prints the current line error.
    void Report();

    // Gets the current line error.
    int GetError();

  private:
    int mReadingNumber;
    int mError;
};

#endif