#ifndef algorithmBase_hpp
#define algorithmBase_hpp

#include <iostream>
#include <string>
using namespace std;

class algorithmBase {
    public:
        class systemBase {
            private:
                typedef string systemPath;
            public:
                systemPath getSystemPath();      
};

// class of systemBase

algorithmBase::systemBase::systemPath algorithmBase::systemBase::getSystemPath() {
    return getenv("PATH");
}

#endif