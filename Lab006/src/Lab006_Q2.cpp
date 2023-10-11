/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 006>
 * @app desc: <C++ Learning>
 * @history:
 *  - <2023/10/10> | <Lab006 Question 2>
 *      -- Answered Question 2 of Lab006
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    // Variable declaration and initialization
    int height;
    int i = 1;

    // Ask user for input
    cout << "Please enter the height of the right triangle." << endl;
    cin >> height;

    // FOR loop
    for (int i = 1; i <= height; i++) {

        // Spaces
        for (int j = height; j > i; j--) {

            cout << " ";

        }

        // Asterisks
        for (int k = 1; k <= i; k++) {
            
            cout << "*";

        }
        
        cout << "\n";
    }
    
    _pause();
    return EXIT_SUCCESS;
}
