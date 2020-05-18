#ifndef playerClass_h
#define playerClass_h

#include <iostream>
using namespace std;

// Main player class
class playerClass {
    private:
    // Conditions Value
        // Value of bool
        bool playerInitializationCompleted = false;
        bool gameBalance = true;
        // Value of int
        int playerMaxLevel = 60;
    // Conditions function
        bool updataBekillInfo(void);

    public:
    // Value
        // Value of string
        string playerName;
        // Value of bool
        bool playerIsDead;
        // Value of int
        int playerLevel, playerExp, playerUpgradeConditions;
        int playerMaxHp, playerHp;
    // Function
        bool initializtionPlayer(string playerName_, int playerMaxHp_);
        bool updataPlayerHealthInfo(void);
        int updataPlayerLevelInfo(void);
    // Sittings function
        bool changePlayerClassMaxLevel(int newMaxLevel_);
        bool changeClassGameBalance(bool newGameBalanceValue_);
};

// Function
bool playerClass::updataBekillInfo(void) {
    if(playerClass::playerHp <= 0 && playerClass::playerInitializationCompleted) {
        playerClass::playerIsDead = true;
        return true;
    } else {
        return false;
    }
}

bool playerClass::initializtionPlayer(string playerName_, int playerMaxHp_) {
    if(playerClass::gameBalance) {
        if(playerMaxHp_ <= 8024) {
            playerClass::playerMaxHp = playerMaxHp_;
            playerClass::playerHp = playerClass::playerMaxHp;
            playerClass::playerExp = 0; playerClass::playerLevel = 0;
            playerClass::playerUpgradeConditions = 80;
        } else {
            return false;
        }
    } else {
        playerClass::playerMaxHp = playerMaxHp_;
        playerClass::playerHp = playerClass::playerMaxHp;
        playerClass::playerExp = 0; playerClass::playerLevel = 0;
        playerClass::playerUpgradeConditions = 80;
    }
}

int playerClass::updataPlayerLevelInfo(void) {
    if(playerClass::playerExp = playerClass::playerUpgradeConditions) {
        
    }
}

bool playerClass::updataPlayerHealthInfo(void) {
    if(playerClass::updataBekillInfo()) {
        return true;
    } else {
        return false;
    }
}

// Sittings function
bool playerClass::changePlayerClassMaxLevel(int newMaxLevel_) {
    if(playerClass::gameBalance) {
        if(newMaxLevel_ <= 256) {
            playerClass::playerMaxLevel = newMaxLevel_; 
            return true;
        } else {
            return false;
        }
    } else {
        playerClass::playerMaxLevel = newMaxLevel_;
    }
}

bool playerClass::changeClassGameBalance(bool newGameBalanceValue_) {
    playerClass::gameBalance == newGameBalanceValue_;
    return true;
}

#endif