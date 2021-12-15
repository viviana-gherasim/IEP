#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include<cstring>

using namespace std;

class Hospital 
{
    public:
        Hospital();
        Hospital(char* hospitalName, int nrDoctors);

    Hospital& operator=(const Hospital&);

    void countDoctors();
    char* getHospitalName();

    protected:
        char* hospitalName;
        int nrDoctors;
};

#endif //HOSPITAL_H