#ifndef algorithmPlus_hpp
#define algorithmPlus_hpp
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class algorithmPlus {
    public:
        class arithmeticSequence {
            public:
                vector<int> arithmeticSequenceList; 
                int getNumber(int template1, int template2, int WHERE);
                bool initArithmeticSequence(int template1, int template2, int length);
        }; class randomNumber {
            public:
                vector<int> randomNumberList;
                int randomIntGet(int range1, int range2);
                int randomIntGet();
                double randomFloatGet(double range1, double range2);
                double randomFloatGet(bool Zero2one);
                double randomFloatGet();
        }; class vectorProcessing {
            public:
                int vectorMaxInt(vector<int> maxObj);
                int vectorMaxInt(vector<int> maxObj, bool REVERSE);
                int vectorMaxInt(vector<int> maxObj, int range1, int range2);
                int vectorMaxInt(vector<int> maxObj, int range1, int range2, bool REVERSE);
        }; class scienceValueProcessing {
            public:
                int takeMedian(vector<int> processingVector);
                int average(vector<int> processingVector);
                int average(vector<int> processingVector, bool scoreMode);
        };
};

// class of arithmeticSequence

/* 
 * 这个函数可以帮助你求出等差数列的第 n 个数字，需要几个模板，运用一个公式。
 * This function can help you find the nth number of the arithmetic sequence.
 * It requires several templates and a formula.
 */
int algorithmPlus::arithmeticSequence::getNumber(int template1, int template2, int WHERE) {
    int deleter;
    if(template1 > template2) { deleter = template1 - template2; return template1 + (WHERE - 1) * deleter; } 
    if(template2 > template1) { deleter = template2 - template1; return template2 + (WHERE - 1) * deleter; }
}

/*
 * 这个函数会生成一个等差数列，需要几个模板和一个长度限制。可能资源占用有点多，因为是使用列举的方式。
 * 返回值会在 algorithmPlus::arithmeticSequence 类里的 arithmeticSequenceList 里出现。
 * This function will generate an arithmetic sequence, requiring several templates and a length limit. 
 * Probably the resource occupation is a bit too much, because it is the way of enumeration.
 * The return value will appear in the arithmeticSequenceList in the algorithmPlus::arithmeticSequence class.
 */
bool algorithmPlus::arithmeticSequence::initArithmeticSequence(int template1, int template2, int length) {
    if(length <= 0) {
        int sequence;
        if(template1 > template2) sequence = template1 - template2;
        if(template2 > template1) sequence = template2 - template1;

        int arithmeticSequenceBuffer = 0;
        for(int i = 0; i < length; i++) {
            arithmeticSequenceBuffer += sequence;
            algorithmPlus::arithmeticSequence::arithmeticSequenceList.push_back(arithmeticSequenceBuffer);
        } return true;
    } else return false;
}

// class of randomNumber

int algorithmPlus::randomNumber::randomIntGet(int range1, int range2) {
    int max, min;
    if(range1 > range2) { max = range1; min = range2; }
    if(range2 > range1) { max = range2; min = range1; }
    return max + rand() % min;
}

int algorithmPlus::randomNumber::randomIntGet() {
    unsigned int getedSeed = algorithmPlus::randomNumber::randomIntGet(0, 255); // Summon a seed
    srand(getedSeed); return rand(); // random
}

double algorithmPlus::randomNumber::randomFloatGet(double range1, double range2) {
    int max, min;
    if(range1 > range2) { max = range1; min = range2; }
    if(range2 > range1) { max = range2; min = range1; }

    double returnModule1 = (double)(rand() % 101) / 101; int usingMinRange = min + 1;
    double returnModule2 = (double)((rand() % (max - min + 1)) + min); returnModule2 = returnModule2 - returnModule1;
    return returnModule1 + returnModule2;
}

double algorithmPlus::randomNumber::randomFloatGet(bool Zero2one) {
    if(Zero2one) {
        int max, min; max = 1; min = 0;
        double returnModule1 = (double)(rand() % 101) / 101; int usingMinRange = min + 1;
        double returnModule2 = (double)((rand() % (max - min + 1)) + min); returnModule2 = returnModule2 - returnModule1;
        return returnModule1 + returnModule2;
    } else return 0.0;
    
}

double algorithmPlus::randomNumber::randomFloatGet() {
    unsigned int getedSeed = algorithmPlus::randomNumber::randomIntGet(0, 255); // Summon a seed
    srand(getedSeed); return rand(); // random

    int max, min; max = 256; min = 0;
    double returnModule1 = (double)(rand() % 101) / 101; int usingMinRange = min + 1;
    double returnModule2 = (double)((rand() % (max - min + 1)) + min); returnModule2 = returnModule2 - returnModule1;
    return returnModule1 + returnModule2;
}

// class of vectorProcessing

int algorithmPlus::vectorProcessing::vectorMaxInt(vector<int> maxObj) {
    int max;
    for(int i = 0; i < maxObj.size(); i++) {
        if(i == 0) max = maxObj[i];
        if(maxObj[i] > max) max = maxObj[i];
    } return max;
}

int algorithmPlus::vectorProcessing::vectorMaxInt(vector<int> maxObj, bool REVERSE) {
    if(REVERSE) {
        int min;
        for(int i = 0; i < maxObj.size(); i++) {
            if(i == 0) min == maxObj[i];
            if(maxObj[i] < min) min = maxObj[i];
        } return min;
    } else {
        int max;
        for(int i = 0; i < maxObj.size(); i++) {
            if(i == 0) max = maxObj[i];
            if(maxObj[i] > max) max = maxObj[i];
        } return max;
    }
    
}

// class of scienceValueProcessing

/*
 * 这个函数可以帮你求出 中位数
 * 需要一个 vector 用来进行求中位数 
 * This function can help you find the median
 * Need a vector to find the median
 */
int algorithmPlus::scienceValueProcessing::takeMedian(vector<int> processingVector) {
    int vectorSize = processingVector.size();
    int processingArray[vectorSize];
    // vector to array
    for(int i = 0; i < vectorSize; i++) { processingArray[i] = processingVector[i]; }
    // Start processing
    for(int i = 1; i <= vectorSize; i++) {
        if(vectorSize % 2 != 0) return processingArray[(vectorSize / 2) - 1];
        if(vectorSize % 2 == 0) return (processingArray[(vectorSize / 2) - 1] + processingArray[(vectorSize / 2 + 1) - 1]);
    }
}

int algorithmPlus::scienceValueProcessing::average(vector<int> processingVector) {
    int processingVectorAdder = 0;
    for(int i = 0; i < processingVector.size(); i++) { processingVectorAdder += processingVector[i]; }
    return processingVectorAdder / processingVector.size();
}

int algorithmPlus::scienceValueProcessing::average(vector<int> processingVector, bool scoreMode) {
    if(scoreMode) {
        // remove maximum and minimun
        int max, min; vector<int> ::iterator maxID; vector<int> ::iterator minID;
        for(int i = 0; i < processingVector.size(); i++) {
            if(i == 0) {
                max = min = processingVector[i]; 
                maxID = find(processingVector.begin(), processingVector.end(), max);
                minID = find(processingVector.begin(), processingVector.end(), min);
                continue; 
            }
            if(processingVector[i] > max) { max = processingVector[i]; maxID = find(processingVector.begin(), processingVector.end(), max);}
            if(processingVector[i] < min) { min = processingVector[i]; minID = find(processingVector.begin(), processingVector.end(), min);}
        } processingVector.erase(maxID); processingVector.erase(minID);
        
        // average
        int processingVectorAdder = 0;
        for(int i = 0; i < processingVector.size(); i++) { processingVectorAdder += processingVector[i]; }
        return processingVectorAdder / processingVector.size();
    } else {
        // average
        int processingVectorAdder = 0;
        for(int i = 0; i < processingVector.size(); i++) { processingVectorAdder += processingVector[i]; }
        return processingVectorAdder / processingVector.size();
    }
}

#endif