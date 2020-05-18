#ifndef dataProcessing_h
#define dataProcessing_h

#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
using namespace std;

string readingLineStr(string filePath, int readLine, bool outDebugLog) {
    // Create file reading task
    ifstream readingFile; // Create file I - O value 
    readingFile.open(filePath, ios::in); // Write file I - O
    // Error determine
    if(outDebugLog)
    {
            if(readLine == 0 && readLine < 0) /* Read 0 line error; #304 */  {
            printf("[ Debug ] > Thrown errors, dataProcessing Api is load error. \n");
            printf("[ Debug ] > ERROR CODE #304 \n");
            printf("[ Debug ] > You can on Github sreach BUG mean. \n");
            printf("[ Debug ] > Severity : VERY HIGH & Threatening program security. \n");
            printf("[ Debug ] > Process thrown ! \n");
            exit(1);
        } else if(readingFile.fail()) /* Read file not had error; #404 */ {
            printf("[ Debug ] > Thrown errors, dataProcessing Api is load error. \n");
            printf("[ Debug ] > ERROR CODE #404 \n");
            printf("[ Debug ] > You can on Github sreach BUG mean. \n");
            printf("[ Debug ] > Severity : VERY HIGH & Threatening program security. \n");
            printf("[ Debug ] > Process thrown ! \n");
            exit(1);
        }
    } else {
        if(readLine == 0 && readLine < 0) {
            exit(1);
        } else if(readingFile.fail()) {
            exit(1);
        }
    }

    // Read out
    string buffer; int i = 0;
    while(getline(readingFile, buffer) && i < readLine - 1) {
        i += 1;
    }

    return buffer;
}

bool deleteFile(const string filePath, const bool outDebugLog) {
    if(outDebugLog)
        if(remove(filePath.c_str()) == 0) {
            printf("[ Debug ] > Detele completed ! \n");
            return true;
        } else {
            printf("[ Debug ] > Detele file error, ERROR CODE : #404 \n");
            return false;
        }
    else {
        if(remove(filePath.c_str()))
            return true;
        else 
            return false;
    }
}

bool filePresence(const string filePath, const bool outDebugLog) {
    if(outDebugLog) {
        fstream readingFile; readingFile.open(filePath, ios::in);
        if(!readingFile.fail()) {
            printf("[ Debug ] > File is presence ! \n");
            return true;
        } else {
            printf("[ Debug ] > File is not presence ! \n");
            return false;
        }
    } else {
        fstream readingFile; readingFile.open(filePath, ios::in);
        if(!readingFile.fail())
            return true;
        else
            return false;
    }
    
}

bool changeFileName(const string filePath,const string changedFileName , const bool outDebugLog) {
    if(outDebugLog) {
        if(rename(filePath.c_str(), changedFileName.c_str()) == 0) {
            printf("[ Debug ] > Change competed ! \n");
            return true;
        } else {
            printf("[ Debug ] > Change file name error, ERROR CODE : #404 \n");
            return false;
        }
    } else {
        if(rename(filePath.c_str(), changedFileName.c_str()) == 0)
            return true;
        else
            return false;
    }
}

bool createFile(const string filePath,const bool outDebugLog) {
    if(outDebugLog) {
        fstream readingFile; readingFile.open(filePath, ios::in | ios::app);
        if(!readingFile.fail()) {
            printf("[ Debug ] > Create completed ! \n");
            return true;
        } else {
            printf("[ Debug ] > Create error ! \n");
            return false;
        }
    } else {
        fstream readingFile; readingFile.open(filePath, ios::in | ios::app);
        if(!readingFile.fail())
            return true;
        else
            return false;
    }
}
    
#endif