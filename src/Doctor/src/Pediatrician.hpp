#ifndef PEDIATRICIAN_H
#define PEDIATRICIAN_H

#include "Doctor.hpp"

#include <iostream>

using namespace std;

class Pediatrician : public Doctor
{
    public:
        Pediatrician();
        Pediatrician(char* name, unsigned int age, unsigned int salary);

    void children();
};

#endif //PEDIATRICIAN_H