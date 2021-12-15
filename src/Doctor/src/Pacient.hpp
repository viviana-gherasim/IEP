#ifndef PACIENT_H
#define PACIENT_H

#include <iostream>
#include <cstring>
#include <memory>
#include "Doctor.hpp"


using namespace std;

class Pacient
{
    public:
        Pacient();
        Pacient(char* name);

    void isBeingOperated(Doctor* dr, Pacient* pc);

    protected:
        char name[30];
};

#endif //PACIENT_H