#include "pch.h"
#include "Airplane.h"

class ModelA: public Airplane {
public:
    ModelA();
    ~ModelA();


    virtual void fly(const Airport& destination);


};