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
    private:
        typedef void noRETURN;

    public: /* functions */
        bool linePrint(int lineLength, int templateIndex);
        noRETURN clearScreen(bool usingWINDOWS_CMDmode);

    public: /* values */
        /*
         * You can customize this Tempate.
         * and if you Tempate is very good, you can update in github!
         * P.s. all value Index in linePrint function Index is be add 1.
         */
        vector<char> lineTempate;
};

bool outputControl::linePrint(int lineLength, int templateIndex) {
    string comboString;
    outputControl::lineTempate.push_back('-');
    outputControl::lineTempate.push_back('=');
    outputControl::lineTempate.push_back('*');
    outputControl::lineTempate.push_back('_');

    // Start combo!
    for(int i = 1; i <= lineLength; i++) {
        comboString.append(to_string(lineTempate[templateIndex + 1]));
    } printf("%s\n", comboString.c_str());
}

outputControl::noRETURN outputControl::clearScreen(bool usingWINDOWS_CMDmode) {
    if(!usingWINDOWS_CMDmode) system("clear");
    else if(usingWINDOWS_CMDmode) system("cls");
    else return;
}

#endif