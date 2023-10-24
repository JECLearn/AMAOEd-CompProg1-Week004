/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 24 2023> | <Lab012 Question 2>
 *      -- Answered Question 2 of Lab012
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // declare uninitialized float variable
    float firstFloat;

    // use pointer to firstFloat and initialize second float variable
    float* secondFloatPtr = &firstFloat;

    // display address and values of both float variables
    cout << "Logical address of firstFloat   : " << &firstFloat << endl;
    cout << "Value of firstFloat             : " << firstFloat << endl;
    cout << "\n";
    cout << "Logical address of secondFloat   : " << secondFloatPtr << endl;
    cout << "Value of secondFloat             : " << *secondFloatPtr << endl;
    cout << "\n";
    
    _pause();
    return EXIT_SUCCESS;
}
