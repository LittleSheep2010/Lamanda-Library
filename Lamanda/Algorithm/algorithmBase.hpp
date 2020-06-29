#ifndef algorithmBase_hpp
#define algorithmBase_hpp

#include <iostream>
using namespace std;

class algorithmBase {
    private:
        typedef string systemPath;
    public:
        systemPath getSystemPath();
};

algorithmBase::systemPath algorithmBase::getSystemPath() {
    return getenv("PATH");
}

#endif