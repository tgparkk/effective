#include "Airplane.h"

Airplane::Airplane()
{
    std::cout << "Airplane ctor" << std::endl;
}

Airplane::~Airplane()
{
    std::cout << "Airplane dtor" << std::endl;
}

void Airplane::fly(const Airport& destination)
{
    std::cout << "Airplane fly" << std::endl;
}