/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Hello World>
 * @app desc: <C++ Learning>
 * @history:
 *  - <2023/10/09> | <Lab004 Question 2>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    // variable declaration
    float userBudget;
    float product;

    // ask for user input
    cout << "What is your daily financial budget?" << endl;
    cin >> userBudget;

    // multiplication
    product = userBudget * userBudget;

    // display product to user. To ensure cout displays up to two decimal
    // places, we use setprecision. To use setprecision, we need ot add
    // #include <iomanip> in our header file list at the top.
    cout << fixed << setprecision(2) << product << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
