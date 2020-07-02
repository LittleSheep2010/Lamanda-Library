#ifndef fileProcessing_hpp
#define fileProcessing_hpp

#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
using namespace std;

class fileProcessing {
    public:
        vector<string> readOutVector;

        string readingLineStr(const string filePath, int readLine);
        bool deleteFile(const string filePath);
        bool filePresence(const string filePath);
        bool changeFileName(const string filePath,const string changedFileName);
        bool createFile(const string filePath);
        int countFileLines(const string filePath);
        bool readingFile2Vector(const string filePath);
};

// Data of text code
string fileProcessing::readingLineStr(const string filePath, int readLine) {
    // Create file reading task
    ifstream readingFile; // Create file I - O value 
    readingFile.open(filePath, ios::in); // Write file I - O
    // Error determine
    if(readLine == 0 && readLine < 0) /* Read 0 line error; #304 */
        exit(1);
    else if(readingFile.fail()) /* Read file not had error; #404 */
        exit(1);

    // Read out
    string buffer; int i = 0;
    while(getline(readingFile, buffer) && i < readLine - 1) {
        i += 1;
    }

    readingFile.close(); return buffer;
}

int fileProcessing::countFileLines(const string filePath) {
    ifstream readingFile; readingFile.open(filePath, ios::in);
    int lineCount; string buffer;
    if(readingFile.fail())
        return;
    
    while(getline(readingFile, buffer, '\n')) { lineCount++; }
    readingFile.close(); return lineCount;
}

bool fileProcessing::readingFile2Vector(const string filePath) {
    ifstream readingFile; readingFile.open(filePath, ios::in);
    int fileLines = fileProcessing::countFileLines(filePath);
    if(readingFile.fail())
        return false;
    
    int nowReadingLine = 1;
    for(int i = 0; i <= fileLines; i++) {
        string pushBuffer;
        for(int i = 0; getline(readingFile, pushBuffer) && i < nowReadingLine - 1; i++) 
        { fileProcessing::readOutVector.push_back(pushBuffer); nowReadingLine++; }
    }
}

bool fileProcessing::deleteFile(const string filePath) {
    if(remove(filePath.c_str()) == 0)
        return true;
    else
        return false;
}

bool fileProcessing::filePresence(const string filePath) {
    fstream readingFile; readingFile.open(filePath, ios::in);
    if(!readingFile.fail())
        return true;
    else
        return false;    
}

bool fileProcessing::changeFileName(const string filePath,const string changedFileName) {
    if(rename(filePath.c_str(), changedFileName.c_str()) == 0)
        return true;
    else
        return false;
}

bool fileProcessing::createFile(const string filePath) {
     fstream readingFile; readingFile.open(filePath, ios::in | ios::app);
    if(!readingFile.fail())
        return true;
    else
        return false;
}
    
#endif