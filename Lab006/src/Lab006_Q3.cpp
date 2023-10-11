/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 006>
 * @app desc: <C++ Learning>
 * @history:
 *  - <2023/10/10> | <Lab006 Question 3>
 *      -- Answered Question 3 of Lab006
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    // Variable declaration and initialization
    int height;
    int currentLine = 1;

    // Ask user for input
    cout << "Please enter the height of the inverted triangle." << endl;
    cin >> height;
    cout << "\n";

    // DO-WHILE loop
    do {
        // Spaces
        for (int i = 1; i < currentLine; i++) {

            cout << " ";

        }

        // Asterisks
        for (int j = currentLine; j <= height; j++) {

            cout << "* ";

        }

        cout << "\n";
        
        currentLine++;

    } while (currentLine <= height);
    
    cout << "\n";

    _pause();
    return EXIT_SUCCESS;
}
