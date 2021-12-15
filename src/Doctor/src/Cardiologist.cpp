#include "Cardiologist.hpp"

Cardiologist::Cardiologist() : Doctor() {}

Cardiologist::Cardiologist(char* name, unsigned int age, unsigned int salary) : Doctor(name, age, salary){};

void Cardiologist::heart()
{
    cout<<"I am a heart specialist"<<endl;
}