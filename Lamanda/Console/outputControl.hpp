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
using namespace std;

class outputControl {
    /* 
     * This class is not need create new class value,
     * Using "outputControl::< Function name >" is done!
     */

    public: /* functions */
        bool linePrint(int lineLength, int templateIndex);

    public: /* values */
        vector<string> lineTempate = {
            /*
             * You can customize this Tempate.
             * and if you Tempate is very good, you can update in github!
             */
            "-", "=", "*", "_"
        };
};

bool outputControl::linePrint(int lineLength, int templateIndex) {
    string comboxString;

    // Start combox!
    for(int i = 1; i <= lineLength; i++) {
        comboxString.append(lineTempate[templateIndex]);
    } printf("%s\n", comboxString.c_str());
}

#endif