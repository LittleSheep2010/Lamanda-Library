#ifndef ascllProcessing_h
#define ascllProcessing_h

#include <iostream>
using namespace std;

class ascllProcessing {
    public: /* function */
        char upLetter(const char inputCHAR);
};

char ascllProcessing::upLetter(const char inputCHAR) {
    if(inputCHAR >= 65 && inputCHAR <= 90) {
        char buffer = inputCHAR + 32; return buffer;
    } else if(inputCHAR >= 97 && inputCHAR <= 122) {
        char buffer = inputCHAR - 32; return buffer;
    } else 
        return;
}

#endif