/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 007>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 11 2023> | <Lab007 Question 1>
 *      -- Answered Question 1 of Lab007
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    //Variable declaration and initialization
    const int arraySize = 5;
    int numbers[arraySize];

    // Ask user for input
    cout << "Please enter five numbers.\n";
    
    for(int i = 0; i < arraySize; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Display input to user
    cout << "\n";
    cout << "You entered the following numbers: \n";
    cout << "\n";

    for(int i = 0; i < arraySize; i++) {
        cout << "Number " << (i + 1) << ": " << numbers[i] << "\n";
    }
    cout << "\n";

    _pause();
    return EXIT_SUCCESS;
}
