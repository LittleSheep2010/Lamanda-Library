/*
 * @Author: LittleSheep_
 * @Date: 2020-06-16 19:42:51
 * @LastEditTime: 2020-06-16 20:00:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Documents/Code/GitBuffer/Lamanda-Library/Lamanda/Console/outputControl.hpp
 */ 

#ifndef outputControl_hpp
#define outputControl_hpp

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class outputControl {
    public: /* functions */
        bool preInit(bool usingWINDOWS_CMDmode);
        bool linePrint(int lineLength, int templateIndex);
        bool clearScreen();

    private: /* functions using value */
        bool isInit;

        bool isUsingWindowsMode;

    public: /* values */
        /*
         * You can customize this Tempate.
         * and if you Tempate is very good, you can update in github!
         * P.s. all value Index in linePrint function Index is be add 1.
         */
        vector<char> lineTempate;
        char newLine;

    public: /* subclass */
        class colorfulPrint {
            public: /* functions */
                bool preInit();
        };
};

bool outputControl::preInit(bool usingWINDOWS_CMDmode) {
    if(usingWINDOWS_CMDmode) outputControl::isUsingWindowsMode = true;
    if(!usingWINDOWS_CMDmode) outputControl::isUsingWindowsMode = false;

    outputControl::isInit = true;
    outputControl::newLine = '\n';
}

bool outputControl::linePrint(int lineLength, int templateIndex) {
    if(isInit) {
        string comboString;
        outputControl::lineTempate.push_back('-');
        outputControl::lineTempate.push_back('=');
        outputControl::lineTempate.push_back('*');
        outputControl::lineTempate.push_back('_');

        // Start combo!
        for(int i = 1; i <= lineLength; i++) {
            comboString.append(to_string(lineTempate[templateIndex + 1]));
        } printf("%s\n", comboString.c_str());
    } else return false;
}

bool outputControl::clearScreen() {
    if(isInit) {
        if(!outputControl::isUsingWindowsMode) system("clear");
        else if(outputControl::isUsingWindowsMode) system("cls");
        else return false;
    } else return false;  
}

#endif