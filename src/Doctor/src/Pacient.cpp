#include "Pacient.hpp"

Pacient::Pacient() 
{
    strcpy(name,"");
}

Pacient::Pacient(char* name)  
    {
        strcpy(this->name, name);
    }

void Pacient::isBeingOperated(Doctor* dr, Pacient* pc)
{
    unique_ptr<Doctor> pDoctor(dr);
    cout << this->name << " is currently operated by " << pDoctor.get()->getName() << endl;

    unique_ptr<Doctor> pDoctor2 = move(pDoctor);

    cout <<"Another pacient is currently operated by " << pDoctor2.get()->getName() << endl;
}
    