#include "Investment.h"

Investment::Investment()
	:m_day(10),
	m_tax(true)
{
	std::cout << "Investment constructor\n" << std::endl;
}

Investment::~Investment()
{
	std::cout << "Investment destructor\n" << std::endl;
}

bool Investment::isTaxFree() const
{
	return m_tax;
}