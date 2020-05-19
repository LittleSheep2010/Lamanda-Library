#ifndef configSystem_h
#define configSystem_h
#include <iostream>
#include "dataProcessing.h"
using namespace std;

class configLoader {
    public:
    // Value
        string loadoutConfig[];
    // Function
        void loader(string filePath);
};

void configLoader::loader(string filePath) {
    int i = 0;
    int readingTrueCount = 0;
    int saveValueSlotCount = 0;
    bool loadOver;
    while(1) {
        i++; string buffer = readingLineStr(filePath, i, false);
        if(buffer == "<- Config") {
            while (1)
            {
                readingTrueCount = i + 1;
                string readingTrueBuffer 
                = readingLineStr(filePath, readingTrueCount, true);
                if(readingTrueBuffer == "Config ->") {
                    loadOver = true;
                    break;
                } else {
                    loadoutConfig[saveValueSlotCount] = readingTrueBuffer;
                    saveValueSlotCount++;
                }
            }       
        } if (loadOver) {
            break;
        }
    }
}

#endif