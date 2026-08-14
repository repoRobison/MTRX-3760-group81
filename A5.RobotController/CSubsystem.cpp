// CSubsystem.cpp
// Implementation of the common robot subsystem interface.

#include "CSubsystem.h"

CSubsystem::CSubsystem( const std::string& aName )
  : mName( aName )
{
}

CSubsystem::~CSubsystem()
{
}

const std::string& CSubsystem::GetName()
{
  return mName;
}
