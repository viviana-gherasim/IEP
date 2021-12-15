#include "Lock.hpp"

Lock::Lock(mutex *givenMutex)
{
    givenMutex->lock();
    this->pointerM.reset(givenMutex, unlock);

    cout << "Lock" << endl;
}

void unlock(mutex *givenMutex)
{
    givenMutex->unlock();

    cout << "Unlock" << endl;
} 