/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 24 2023> | <Lab011 Question 1>
 *      -- Answered Question 1 of Lab011
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // initialize integer variable
    int variable = 900;

    // display variable and its memory address
    cout << "Integer value           : " << variable << endl;
    cout << "Integer Memory Address  : " << &variable << endl;

    _pause();
    return EXIT_SUCCESS;
}
