#include "Pediatrician.hpp"

Pediatrician::Pediatrician() : Doctor() {}

Pediatrician::Pediatrician(char* name, unsigned int age, unsigned int salary) : Doctor(name, age, salary){};

void Pediatrician::children()
{
    cout<<"I am a kid's specialist"<<endl;
}