/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 008>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 17 2023> | <Lab008 Question 2>
 *      -- Answered Question 2 of Lab008
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    short userNum;

    // ask user for input
    cout << "Please enter a value between 10 and 99.\n";
    cin >> userNum;

    // ensure user input is within required range
    if(userNum < 10 || userNum > 99) {
        cout << "Invalid. Please enter a value between 10 and 99.\n";
        return 1;
    }

    // get 10s and 1s place
    short tens = userNum / 10;
    short ones = userNum % 10;

    // display result to user
    cout << "\n" << tens << " " << ones << "\n" << endl;
    _pause();
    return EXIT_SUCCESS;
}
