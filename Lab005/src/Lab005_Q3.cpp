/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Hello World>
 * @app desc: <C++ Learning>
 * @history:
 *  - <2023/10/10> | <Lab005 Question 3>
 *      -- Answered Question 3 of Lab005
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

    //Variable declaration
    float multiplicand, multiplier, product;
    string result;

    // Ask user for input
    cout << "Let's multiply. Please enter the multiplicand." << endl;
    cin >> multiplicand;

    cout << "Please enter the multiplier." << endl;
    cin >> multiplier;

    // Multiplication
    product = multiplicand * multiplier;

    // Convert product to string type
    result = to_string(product);

    // Display result to user
    cout << "Product: " + result << endl;

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
