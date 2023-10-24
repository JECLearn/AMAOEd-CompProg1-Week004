/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 24 2023> | <Lab012 Question 1>
 *      -- Answered Question 1 of Lab012
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // initialize integer and pointer to the integer
    int integer = 654321;
    
    // display integer value before update
    cout << "Integer before update: " << integer << endl;
    cout << "\n";

    // use arithmetic to change the integer value
    integer -= 626375;

    // display integer value after update
    cout << "Integer after update: " << integer << endl;
    cout << "\n";

    _pause();
    return EXIT_SUCCESS;
}
