#ifndef LOCK_H
#define LOCK_H

#include <iostream>
#include <mutex>
#include <memory>

using namespace std;

class Lock
{
public:
    explicit Lock(mutex *givenMutex);

private:
    shared_ptr<mutex> pointerM;
};

void unlock(mutex *givenMutex);

#endif // LOCK_H