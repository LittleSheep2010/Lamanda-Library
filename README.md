# Lamanda-Library

Next generation for C++ library, maybe :cold_sweat:

Please kown, Lamanda Library It's changed by Cpcl, But Cpcl is not support !

## Install & Use

How to use Lamanda ? So eazy !

You only download you need version for Lamanda, and copy Lamanda folder to your project folder.

and in your code, add this code `#include "Lamanda/< library class >/< library all name >"`.

You can see This is a library list :

| Library class | Library all name      | Library include code                                |
| ------------- | --------------------- | --------------------------------------------------- |
| Console       | usingLibrary          | `#include "Lamanda/Console/usingLibrary.hpp"`       |
| Data          | temperatrueProcessing | `#include "Lamanda/Data/temperatrueProcessing.hpp"` |
| Data          | dataProcessing        | `#include "Lamanda/Data/dataProcessing.hpp"`        |
| GameEngine    | playerClass           | `#include "Lamanda/Data/playerClass.hpp"`           |

If you want include all Lamanda Library, only need add code
`#include "Lamanda/Lamanda.h"`
Just this ! :yum:

## Files

This chapter can help you decided Include what files, please look over !

| File name                 | Role                                                         |
| ------------------------- | ------------------------------------------------------------ |
| usingLibrary.hpp          | This file can help you Include order Library                 |
| temperatureProcessing.hpp | This file can help you change temperature                    |
| dataProcessing.hpp        | This file can help you load some file, and change file property |
| playerClass.hpp           | Support some game player Value and Function, But it is Demo too |



## Functions

If you don't want see code, but you want use Lamanda Library ? Please look this, this can help you !

### Function list

| Function name  | Class        | Using                                                     | In file          |
| -------------- | ------------ | --------------------------------------------------------- | ---------------- |
| loader         | configLoader | `configLoader(string filePath);`                          | configSystem.h   |
| readingLineStr | *Nope*       | `readingLineStr(string filePath, int readLine);`          | dataProccesing.h |
| deleteFile     | *Nope*       | `deleteFile(const string filePath);`                      | dataProccesing.h |
| filePresence   | *Nope*       | `filePresence(const string filePath);`                    | dataProccesing.h |
| changeFileName | *Nope*       | `changeFileName(string filePath,string changedFileName);` | dataProccesing.h |
| createFile     | *Nope*       | `createFile(const string filePath);`                      | dataProccesing.h |

**Ps : Why don't have "playerClass.h" ? Because it is very hard, so please to look code !**

### Using function code

There have using all in function list function code, if you need that, please look over !

#### configLoader

```C++
#include "Lamanda/Data/configSystem.h" // Load library
#include <iostream> // Load base library
using namespace std; // Using namespace

int main() {
  configLoader loaderTemp;
  loaderTemp.configLoader::loader("./TempConfig.txt");
  cout << loaderTemp.loadoutConfig << endl;
  return 0;
}
```

#### readingLineStr

```C++
#include "Lamanda/Data/dataProcessing.h" // Load library
#include <iostream> // Load base library
using namespace std; // Using namespace

int main() {
	string playerName = readingLineStr("./playerData", 20);
  cout << "> New player name : " << playerName << endl;
  return 0;
}
```

#### deleteFile

```C++
#include "Lamanda/Data/dataProcessing.h" // Load library
#include <iostream> // Load base library
using namespace std; // Using namespace

int main() {
	if(deleteFile("./Exam Answers.pdf") == true)
    cout << "> Oh my god, I survived." << endl;
  else
    cout << "> Oh my god, I can't survived !" << endl;
  return 0;
}
```

#### filePresence

```C++
#include "Lamanda/Data/dataProcessing.h" // Load library
#include <iostream> // Load base library
using namespace std; // Using namespace

int main() {
	if(filePresence("./Exam papers.docs") == true)
    cout << "> Oh my god, I survived." << endl;
  else
    cout << "> Oh my god, I can't survived !" << endl;
  return 0;
}
```

#### changeFileName

```C++
#include "Lamanda/Data/dataProcessing.h" // Load library
#include <iostream> // Load base library
using namespace std; // Using namespace

int main() {
	if(changeFileName("./Exam papers.docs", "Exam papers of LittleSheep_") == true)
    cout << "> Wyyyyyyy ~" << endl;
  else
    cout << "> WTF " << endl;
  return 0;
}
```

#### createFile

```C++
#include "Lamanda/Data/dataProcessing.h" // Load library
#include <iostream> // Load base library
using namespace std; // Using namespace

int main() {
	if(createFile("./Github README.md") == true)
    cout << "> What should I write?" << endl;
  else
    cout << "> * You broke the computer with a hammer. *" << endl;
  return 0;
}
```

LOL

## Feedback

Welcome feedback you using this library encountered BUG !

Email : [CLICK HERE](mailto:cadenjiang@outlook.com)

or

Using Github ISSUES system feedback.

Thank very much !
