/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 24 2023> | <Lab012 Question 3>
 *      -- Answered Question 3 of Lab012
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // declare uninitialized string variable
    string exclamation;

    // display variable before update
    cout << "Variable before update : " << exclamation << endl;
    cout << "\n";

    // use pointer to variable's memory address to initialize exclamation variable
    string* stringPtr = &exclamation;
    *stringPtr = "This is it!";

    // display variable after update
    cout << "Variable after update  : " << exclamation << endl;
    cout << "\n";

    _pause();
    return EXIT_SUCCESS;
}
