#include <iostream>
#include <tr1/memory>
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

class Food
{
    public:
    virtual std::string getName()=0;
};

class Milk: public Food
{
    public:
    std::string getName()
    {
        return "milk";
    }
};

class Desert: public Food
{
    public:
    std::string getName()
    {
        return "desert";
    }
};

//factory method
Food *createFood(int choice)
{
    if(choice==1)
        return new Desert();
    else
    {
        return new Milk();
    }
}

class Hospital
{
    public:
        Hospital(string hospitalName, Person *owner, unsigned int nrDoctors):
        hospitalName(hospitalName),
        owner(owner),
        nrDoctors(nrDoctors){};

    Hospital& operator=(const Hospital&);

    void countDoctors()
    {
            std::cout<<hospitalName<<"I am counting the doctors!"<<std::endl;
    }
    const std::string& getHospitalName()
    {
        return hospitalName;
    }
    protected:
        std::string& hospitalName;
        Person *owner;
        unsigned int nrDoctors;
        
};

Hospital& Hospital::operator=(const Hospital& rhs)
{
    if(this==&rhs)   
        return *this;

    Person *pOrig = owner;  //remember original pb
    owner = new Person(*rhs.owner); //point pb to a copy of rhs’s owner
    this->hospitalName = rhs.hospitalName;  
    this->nrDoctors = rhs.nrDoctors;
    delete pOrig;   //delete the original pb
    return *this; 
}

class Military: public Hospital
{
    public:
        Military(string hospitalName, Person *owner, unsigned int nrDoctors, unsigned int nrRooms):
        Hospital(hospitalName, owner, nrDoctors),
        nrRooms(nrRooms){};

    Military& operator=(const Military&);
    Military(const Military& rhs):
        Hospital(rhs),  //invoke base class copy contructor
        nrRooms(rhs.nrRooms){};

    void countRooms()
    {
        std::cout<<hospitalName<<"I am counting the rooms!"<<std::endl;
    }

    void feed()
    {
        std::tr1::shared_ptr<Food> food (createFood(1));     //creates obj instance of Desert
        std::cout<<hospitalName<<"I am eating a"<<food->getName()<<"!";
        std::cout<<"I finished eating!"<<std::endl<<std::endl;
    }

    private:
        unsigned int nrRooms;

};

Military& Military::operator=(const Military& rhs)
{
    Hospital::operator=(rhs);   //assign base class parts copy assignment
    nrRooms=rhs.nrRooms;
    return *this;
}

class Maternity: public Hospital
{
    public:
        Maternity(string hospitalName, Person *owner, unsigned int nrDoctors):
        Hospital(hospitalName, owner, nrDoctors){};

        void baby()
        {
            std::cout<<hospitalName<<"A baby was born!"<<std::endl;
        }

        void feed()
        {
            std::tr1::shared_ptr<Food> food (createFood(2));     //creates obj instance of Milk
            std::cout<<hospitalName<<"I am drinking "<<food->getName()<<"!";
            std::cout<<"I finished drinking!"<<std::endl<<std::endl;
        }
};

class RenovationBudget: private Uncopyable{
    public:
    explicit RenovationBudget(Hospital *type)
    :typePtr(type)
    {   lockRenovationBudget(typePtr);    }  //aquire resource
    ~RenovationBudget(){ unlock(typePtr); }  //release resource
    private:

    void lockRenovationBudget(Hospital *type)
    {
        std::cout<<type->getHospitalName()<<" locked for renovation budget!"<<std::endl;
    }

    void unlock(Hospital *type)
    {
        std::cout<<type->getHospitalName()<<" renovated and unlocked!"<<std::endl;
    }
    Hospital *typePtr;
};  

int main()
{
    Person viviana("Viviana", 22);
    Person ana("Ana",25);
    Person razvan("Razvan",30);

    Hospital judetean("Judetean", &viviana, 30);

    cout<<judetean.getHospitalName()<<"\n";

    Military m1("Militar", &razvan, 22, 100);
    m1.countRooms();
    m1.feed();
    RenovationBudget r1 (&m1);

    Maternity mat1("Bega", &ana, 44);
    mat1.baby();
    mat1.feed();
    RenovationBudget r2(&mat1);
    
    Surgeon s1("Vivi", 37, 55000);
    Cardiologist c1("Ana", 41, 80000);
    Pediatrician p1("Oana", 48, 35000);

    s1.operates();
    c1.consult();
    c1.operates();
    p1.consult();

    return 0; 
}