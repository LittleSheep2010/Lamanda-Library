#include "Lamanda/Data/dataProcessing.h"
#include "Lamanda/Console/usingLibrary.h"

int main() {
    int readLine;
    
    cout << "=--------------------------------------------------------=" << endl;
    int i = 1;
    while(1) {
        string using_ = readingLineStr("./Temp.txt", i, true);
        if(using_ == "* * * E N D * * *") break;
        cout << using_ << endl;
        usleep(1000000); i++;
    }
    cout << "=--------------------------------------------------------=" << endl;
    return 1;
}