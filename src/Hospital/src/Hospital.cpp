#include "Hospital.hpp"

Hospital::Hospital():
    nrDoctors(0){
        strcpy(this->hospitalName, "");
    }

Hospital::Hospital(char* hospitalName, int nrDoctors):
    hospitalName(hospitalName),
    nrDoctors(nrDoctors){};

//Hospital::Hospital operator=(const Hospital&);

void Hospital::countDoctors()
{
    cout<<hospitalName<<"I am counting the doctors!"<<endl;
}

char* Hospital :: getHospitalName()
{
    return hospitalName;
}