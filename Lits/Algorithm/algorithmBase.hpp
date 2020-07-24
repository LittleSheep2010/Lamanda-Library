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
        }; class orsayAlgorithm {
            public: 
                int circleAreaCalculation(int RADIUS, unsigned int piAccuracy);
                int circleAreaCalculation(int DIAMETER, unsigned int piAccuracy);

                bool valueChange(int *a, int *b);
                bool valueChange(double *a, double *b);
                bool valueChange(bool *a, bool *b); 
        };
        
};

// class of systemBase

algorithmBase::systemBase::systemPath algorithmBase::systemBase::getSystemPath() {
    return getenv("PATH");
}

// class of orsayAlgorithm

/* 
 * 这个函数可算出圆的面积
 * This function can calculate the area of a circle
 * 半径模式 Radius mode
 * ----------------------------------------
 * 警告：piAccuracy 不可超过 5
 * Warning: piAccuracy cannot exceed 5
 */
int algorithmBase::orsayAlgorithm::circleAreaCalculation(int RADIUS, unsigned int piAccuracy) {
    if(piAccuracy <= 0) return 0;
    if(piAccuracy > 5) return 0;
    string x = "3.141592654"; string buffer = x.substr(0, piAccuracy + 2); double p = atof(buffer.c_str());
    return p * (RADIUS * RADIUS);
}

/* 
 * 这个函数可算出圆的面积
 * This function can calculate the area of a circle
 * 直径模式 Diameter mode
 * ----------------------------------------
 * 警告：piAccuracy 不可超过 5
 * Warning: piAccuracy cannot exceed 5
 */
int algorithmBase::orsayAlgorithm::circleAreaCalculation(int DIAMETER, unsigned int piAccuracy) {
    if(piAccuracy <= 0) return 0;
    if(piAccuracy > 5) return 0;
    string x = "3.141592654"; string buffer = x.substr(0, piAccuracy + 2); double p = atof(buffer.c_str());
    return p * DIAMETER;
}



bool valueChange(int *a, int *b) {
    int buffer;
    
    // Error processing
    if(*a == *b) return false;

    // Processing
    buffer = *b; *a = *b; *a = buffer;
    return true;
}

#endif