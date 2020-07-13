#ifndef timeProcessing_hpp
#define timeProcessing_hpp

#include <iostream>
#include <unistd.h>
using namespace std;

class timeProcessing
{
    public:
        void waiting(int seconds);
        void waiting(int microsecond);
};

/*
 * 这个函数可以帮你将整个线程停一会
 * This function can help you stop the entire thread for a while
 * 
 * 秒模式 Seconds mode
 */
void timeProcessing::waiting(int seconds) {
    usleep(seconds * 100000);
}

/*
 * 这个函数可以帮你将整个线程停一会
 * This function can help you stop the entire thread for a while
 * 
 * 微秒模式 Microsecond mode
 */
void timeProcessing::waiting(int microsecond) {
    usleep(microsecond);
}

#endif