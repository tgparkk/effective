#include "ModelA.h"

ModelA::ModelA()
{
    std::cout << "ModelA ctor" << std::endl;
}

ModelA::~ModelA()
{
    std::cout << "ModelA dtor" << std::endl;
}

void ModelA::fly(const Airport& destination)
{ 
    Airplane::fly(destination); 
}