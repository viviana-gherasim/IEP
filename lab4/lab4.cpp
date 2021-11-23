#include <iostream>
using namespace std;

//class specifically designed to prevent copying
class Uncopyable {
protected: // allow construction
    Uncopyable() {} // and destruction of
    ~Uncopyable() {} // derived objects...
private:
    Uncopyable(const Uncopyable&); // ...but prevent copying
    Uncopyable& operator=(const Uncopyable&);
};

//to keep Doctor objects from being copied, we inherit from Uncopyable
class Doctor : private Uncopyable
{
    public:
        Doctor(const std::string& name, unsigned int age, unsigned int salary):
        name(name),         
        age(age),
        salary(salary){};

        void operates()
        {
            std::cout<<"I am operating!"<<std::endl;
        }

        void consult()
        {
            std::cout<<"I am consulting!"<<std::endl;
        }

    protected:
        const std::string& name;
        const unsigned int age;
        const unsigned int salary;
};

class Surgeon : public Doctor
{
    public:
        Surgeon(const std::string& name, unsigned int age, unsigned int salary) : Doctor(name, age, salary){};
        void brain()
        {
            std::cout<<"I am a brain specialist"<<std::endl;
        }
};

class Cardiologist : public Doctor 
{
    public:
        Cardiologist(const std::string& name, unsigned int age, unsigned int salary) : Doctor(name, age, salary){};
        void heart()
        {
            std::cout<<"I am a heart specialist"<<std::endl;
        }
};

class Pediatrician : public Doctor
{
    public:
        Pediatrician(const std::string& name, unsigned int age, unsigned int salary) : Doctor(name, age, salary){};
        void children()
        {
            std::cout<<"I am a kid's specialist"<<std::endl;
        }

};

class Person
{
    public:
        Person(const std::string& personName, unsigned int personAge):
        personName(personName),
        personAge(personAge){};

    private:
        const std::string& personName;
        const unsigned int personAge;
};

class Hospital
{
    public:
        Hospital(const std::string& hospitalName, Person *owner, unsigned int nrDoctors):
        hospitalName(hospitalName),
        owner(owner),
        nrDoctors(nrDoctors){};

    Hospital& operator=(const Hospital&);

    void countDoctors()
    {
        if(nrRooms==100)
            std::cout<<hospitalName<<"I am counting the doctors!"<<std::endl;
    }
    const std::string& getHospitalName()
    {
        return hospitalName;
    }
    protected:
        const std::string& hospitalName;
        Person *owner;
        const unsigned int nrDoctors;
        const unsigned int nrRooms;
};

Hospital& Hospital::operator=(const Hospital& rhs)
{
    Person *pOrig = owner;  //remember original pb
    owner = new Person(*rhs.owner); //point pb to a copy of rhs’s owner
    delete pOrig;   //delete the original pb
    return *this;
}

int main()
{
    Surgeon s1("Vivi", 37, 55000);
    Cardiologist c1("Ana", 41, 80000);
    Pediatrician p1("Oana", 48, 35000);

    s1.operates();
    c1.consult();
    c1.operates();
    p1.consult();


    return 0;
}