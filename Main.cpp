#include "src/Doctor/src/Doctor.hpp"
#include "src/Doctor/src/Pacient.hpp"
#include "src/Hospital/src/Hospital.hpp"
#include "src/Lock/src/Lock.hpp"

#include<iostream>
#include<memory>
#include<mutex>
#include<thread>

mutex m;
int i = 0;

void makeACallFromHospitalPhone() 
{
    m.lock();                       //m blocheaza usa cat timp vb la telef; celalalt om asteapta afara
    cout<<i<<"In a call"<<endl;     
    i++;                            //niciun alt thread nu are acces la telef pana cand se apeleaza m.unlock()
    m.unlock();                     //se deblocheaza usa
}
 
using namespace std;

int main()
{
    //unique
    char name1[20]="Viviana";
    Pacient p1(name1);

    char name2[20]="Alex";
    Pacient p2(name2);
    Pacient *pacient2 = &p2;

    char dr1[20]="Mario";
    Doctor *d = new Doctor(dr1, 30, 1000);

    p1.isBeingOperated(d, pacient2);


    //shared
    char hospital1[20]="Judetean";
    shared_ptr<Hospital> pHospital1 = make_shared<Hospital>(hospital1, 15); 

    char dr2[20]="Ana";
    Doctor doctor2(dr2, 35,5000);

    doctor2.work(pHospital1.get());
    cout<<pHospital1.use_count()<<endl;           //cate referinte spre hospital

    char dr3[20]="Max";
    Doctor doctor3(dr3, 60, 25000);

    shared_ptr<Hospital> pHospital2(pHospital1);        //indic spre ac loc de mem spre care indica si ph1

    doctor3.work(pHospital2.get());
    cout<<pHospital2.use_count()<<endl;

    pHospital2.reset();
    cout<<pHospital1.use_count()<<endl;

    //mutex
    thread person1(makeACallFromHospitalPhone);
    thread person2(makeACallFromHospitalPhone);

    person1.join();
    person2.join();

    return 0;
}