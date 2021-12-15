#include "Surgeon.hpp"

Surgeon::Surgeon() : Doctor() {}

Surgeon::Surgeon(char* name, unsigned int age, unsigned int salary) : Doctor(name, age, salary){};

void Surgeon::brain()
{
    cout<<"I am a brain specialist"<<endl;
}