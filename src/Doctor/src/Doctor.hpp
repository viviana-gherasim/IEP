#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <cstring>
#include <memory>
#include "../../Hospital/src/Hospital.hpp"

using namespace std;

class Doctor
{
    public:
        Doctor();
        Doctor(char* name, unsigned int age, unsigned int salary);

    void operates();
    void consult();

    void work(Hospital *h);

    char* getName();
    
    protected:
        char name[30];
        int age;
        int salary;
};

#endif //DOCTOR_H