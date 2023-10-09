/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Hello World>
 * @app desc: <C++ Learning>
 * @history:
 *  - <2023/10/09> | <Lab004 Question 3>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
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

    // Variable declaration
    string userName;
    string userAddress;

    // Ask for user input. We use the getline function to take the string
    // from the input field.
    cout << "What is your name?" << endl;
    getline(cin, userName);

    cout << "What is your address?" << endl;
    getline(cin, userAddress);

    // Display result to user
    cout << "Hi, I am " + userName + ". " + "I live at " + userAddress + ". " << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
