#include "pch.h"
#include "Airport.h"

class Airplane {
public:
    Airplane();
    ~Airplane();
    virtual void fly(const Airport& destination) = 0;
protected:
    void defaultFly(const Airport& destination);
};
