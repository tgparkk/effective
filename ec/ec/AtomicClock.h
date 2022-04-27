#pragma once

#include "pch.h"
#include "TimeKeeper.h"
class AtomicClock :
	public TimeKeeper
{
public:
	AtomicClock();
	~AtomicClock();

public:
	TimeKeeper* getTimeKeeper();

};