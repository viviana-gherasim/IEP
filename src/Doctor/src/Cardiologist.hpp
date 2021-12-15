#ifndef CARDIOLOGIST_H
#define CARDIOLOGIST_H

#include "Doctor.hpp"

#include <iostream>

using namespace std;

class Cardiologist : public Doctor
{
    public:
        Cardiologist();
        Cardiologist(char* name, unsigned int age, unsigned int salary);

    void heart();
};

#endif //CARDIOLOGIST_H