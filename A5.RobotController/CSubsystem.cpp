// CSubsystem.cpp
// Code for the common subsystem interface.

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
