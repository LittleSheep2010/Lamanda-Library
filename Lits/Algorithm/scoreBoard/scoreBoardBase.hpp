#ifndef scoreBoardBase_hpp
#define scoreBoardBase_hpp

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

  /*           此 class 是一个 DEMO  >>> / 警告 / >>> 可能达不到预期效果               */
 /* ---------------------------------------------------------------------------- */
/* This class is a DEMO >>> / warning / >>> may not achieve the expected effect */

class scoreBoard {
    public: // Score Board value
        string owner;
        string interpretation;
        int score;
        double addedFloat;
        bool isLocked;

    public: // Score Board function
        bool initializationScoreBoard
        (int defaultScore, double defaultSuffixFloat, string scoreOwner , string scoreInterpretation, bool lockScore);

        int addScore(const int addScore);
        double addScore(const int addScore, const double suffixFloat);
        double requestScore(const bool deleteFloat);
        double requestScore();
        bool lockedScoreLock(const bool REVERSE);

    public: // Score Board save & load
        bool saveScoreBoard(const string customSavePath);
        bool saveScoreBoard();
        bool loadScoreBoard(const string customSavePath);
        bool loadScoreBoard();
};

/*
 * 这个函数可以初始化一个 scoreBoard(积分版)
 * This function can initialize a scoreBoard
 * 
 * 如果初始化失败了的话，会返回 false
 * If the initialization fails, it will return false
 */
bool scoreBoard::initializationScoreBoard
(int defaultScore, double defaultSuffixFloat, string scoreOwner , string scoreInterpretation, bool lockScore) {
    if(defaultSuffixFloat > 1.0) return false;
    scoreBoard::score = defaultSuffixFloat;
    scoreBoard::addedFloat = defaultSuffixFloat;
    scoreBoard::interpretation = scoreInterpretation;
    scoreBoard::owner = scoreOwner;
    scoreBoard::isLocked = lockScore;
}

/*
 * 这个函数能将 scoreBoard 里的分数进行增加
 * 适配分数锁
 * This function can increase the score in scoreBoard
 * Fit score lock
 * 
 * 如果分数锁被锁上了或者出错的话，会返回 -255
 * If the score lock is locked or wrong, it will return -255
 */
int scoreBoard::addScore(const int addScore) {
    // Judgment score board lock
    if(!isLocked) return -255;
    // Judgment error
    if(addScore <= 0) return -255;
    // Start add
    scoreBoard::score += addScore;
}

/*
 * 这个函数能将 scoreBoard 里的分数进行增加
 * 适配分数锁
 * This function can increase the score in scoreBoard
 * Fit score lock
 * 
 * 如果分数锁被锁上了或者出错的话，会返回 -255
 * If the score lock is locked or wrong, it will return -255
 * 
 * 加小数后缀 Add decimal suffix
 */
double scoreBoard::addScore(const int addScore, const double suffixFloat) {
    // Judgment score board lock
    if(!isLocked) return -255;
    // Judgment error
    if(addScore <= 0 || suffixFloat > 1.0) return -255;
    // Start add
    scoreBoard::score += addScore;
    if(scoreBoard::addedFloat + suffixFloat > 1.0) scoreBoard::addedFloat = suffixFloat;
    else scoreBoard::addedFloat += suffixFloat;
}

bool scoreBoard::lockedScoreLock(const bool REVERSE) {
    if(REVERSE) { scoreBoard::isLocked = false; return scoreBoard::isLocked; }
    else { scoreBoard::isLocked = true; return scoreBoard::isLocked; }
}

double scoreBoard::requestScore(const bool deleteFloat) {
    if(!deleteFloat) {
        string floatBuffer = to_string(scoreBoard::addedFloat); 
        floatBuffer = floatBuffer.substr(1, floatBuffer.size() - 1);
        string requestResult = to_string(scoreBoard::score) + floatBuffer;
        double buffer = atof(requestResult.c_str());
        return buffer;
    } else {
        double buffer = (double)scoreBoard::score;
        return buffer;
    }
}

double scoreBoard::requestScore() {
    string floatBuffer = to_string(scoreBoard::addedFloat); 
    floatBuffer = floatBuffer.substr(1, floatBuffer.size() - 1);
    string requestResult = to_string(scoreBoard::score) + floatBuffer;
    double buffer = atof(requestResult.c_str());
    return buffer;
}

#endif