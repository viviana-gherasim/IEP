#include "Doctor.hpp"

Doctor::Doctor() 
{
    strcpy(name,"");
    age=0;
    salary=0;
}

Doctor::Doctor(char* name, unsigned int age, unsigned int salary):   
    age(age),
    salary(salary){
        strcpy(this->name, name);
    }

void Doctor::operates()
{
    cout<<"I am operating!"<<endl;
}

void Doctor::consult()
{
    cout<<"I am consulting!"<<endl;
}

void Doctor::work(Hospital *h)
{
    cout << this->name << " is currently working at " << h->getHospitalName() << endl;
}

char* Doctor::getName()
{
    return this->name;
}
    