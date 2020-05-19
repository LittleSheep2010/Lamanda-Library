#include "Lamanda/Data/dataProcessing.h"
#include "Lamanda/Console/usingLibrary.h"

int main() {
    int readLine;
    
    while(1) {
        cout << "=--------------------------------------------------------=" << endl;
        cout << "[ Mainner ] > Ps: Enter 0 to exit" << endl;
        cout << "[ Mainner ] > Please enter need read line -> "; cin >> readLine;
        if(readLine == 0) {
            cout << "[ Mainner ] > Bye ~" << endl;
            return 0;
        } else {
            cout << "[ Mainner ] > Read out : " << endl;
            cout << readingLineStr("./Temp.txt", readLine, true) << endl;
        }
    }

    return 1;
}