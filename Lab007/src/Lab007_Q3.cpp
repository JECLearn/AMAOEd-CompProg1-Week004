/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 007>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 11 2023> | <Lab007 Question 3>
 *      -- Answered Question 3 of Lab007
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    // Variable declaration and initialization
    const int arraySize = 6;
    int numbers[arraySize];

    cout << "Please enter six integers:\n";

    // Input integers into the array
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    cout << "\n";

    // Bubble Sort to sort the integers in ascending order
    for (int i = 0; i < arraySize - 1; i++) {
        for (int j = 0; j < arraySize - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted integers in ascending order:\n";
    cout << "\n";

    // Display the sorted integers
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n" << endl;

    _pause();
    return EXIT_SUCCESS;
}
