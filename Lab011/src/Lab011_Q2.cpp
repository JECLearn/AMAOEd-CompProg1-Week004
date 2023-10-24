/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 24 2023> | <Lab011 Question 2>
 *      -- Answered Question 2 of Lab011
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // initialize character array
    char charArray[10];
    char* charPointer = charArray;

    // display values of charArray
    cout << "charArray value: ";
    for(int i = 0; i < 10; i++) {
        cout << static_cast<int>(charArray[i]) << " ";
    }
    cout << "\n";

    cout << "Logical address of charArray: " << static_cast<void*>(charArray) << endl;
    cout << "Logical address of charPointer: " << static_cast<void*>(charPointer) << endl;
    
    _pause();
    return EXIT_SUCCESS;
}
