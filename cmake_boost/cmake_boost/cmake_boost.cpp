// cmake_boost.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "cmake_boost.h"
#include <boost/beast.hpp>

int main()
{
	std::cout << "BOOST version : " << BOOST_VERSION << "\n";
	return 0;
}
