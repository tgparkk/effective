#pragma once

#include "pch.h"

#include "TimeKeeper.h"
#include "AtomicClock.h"

int main()
{

	AtomicClock ac;
	std::cout << "Hello World\n" << std::endl;
	TimeKeeper* ptk = ac.getTimeKeeper();


	delete ptk;
}