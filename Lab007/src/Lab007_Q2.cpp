/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 007>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 11 2023> | <Lab007 Question 2>
 *      -- Answered Question 2 of Lab007
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    
    // Variable declaration and initialization
    char characters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int height;
    int characterIndex = 0;

    // Ask user for input
    cout << "Please enter a value between 1 and 10 to be the height of the triangle: ";
    cin >> height;
    cout << "\n";

    // Implement input value limit
    if (height < 1 || height > 10) {
        cout << "Invalid. Please enter a height between 1 and 10 only.\n";
        return 1;
    }

    // FOR loop
    for (int i = 1; i <= height; i++) {
        // Spaces
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }

        // Characters
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << characters[characterIndex];
            // Wrapping to enforce value limit of 10
            characterIndex = (characterIndex + 1) % 10;
        }

        cout << "\n";
    }
    cout << "\n";

    _pause();
    return EXIT_SUCCESS;
}
