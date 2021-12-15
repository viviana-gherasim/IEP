#ifndef SURGEON_H
#define SURGEON_H

#include "Doctor.hpp"

#include <iostream>

using namespace std;

class Surgeon : public Doctor
{
    public:
        Surgeon();
        Surgeon(char* name, unsigned int age, unsigned int salary);

    void brain();
};

#endif //SURGEON_H