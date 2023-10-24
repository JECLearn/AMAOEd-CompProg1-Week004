/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 24 2023> | <Lab011 Question 3>
 *      -- Answered Question 3 of Lab011
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // initialize float array and reference
    float floatArray[20];
    float (&floatRef)[20] = floatArray;

    // display values and logical address of floatArray
    cout << "Value of array: ";
    for(int i = 0; i < 20; i++) {
        cout << static_cast<int>(floatArray[i]) << " "; 
    }
    cout << "\n\n";

    // display logical address of floatArray and the reference
    cout << "Logical Address of floatArray : " << static_cast<void*>(floatArray) << endl;
    cout << "Logical Address of floatRef   : " << static_cast<void*>(floatRef) << "\n" << endl;

    _pause();
    return EXIT_SUCCESS;
}
