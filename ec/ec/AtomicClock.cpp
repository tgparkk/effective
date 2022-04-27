#include "AtomicClock.h"

AtomicClock::AtomicClock()
{
	std::cout << "AtomicClock constructor\n" << std::endl;
}

AtomicClock::~AtomicClock()
{
	std::cout << "AtomicClock destructor\n" << std::endl;
}

TimeKeeper* AtomicClock::getTimeKeeper()
{
	return new AtomicClock;
}