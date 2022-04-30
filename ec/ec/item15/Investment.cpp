#include "Investment.h"

Investment::Investment()
	:m_day(10)
{
	std::cout << "Investment constructor\n" << std::endl;
}

Investment::~Investment()
{
	std::cout << "Investment destructor\n" << std::endl;
}