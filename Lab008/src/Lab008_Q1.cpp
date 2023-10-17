/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 008>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 17 2023> | <Lab008 Question 1>
 *      -- Answered Question 1 of Lab008
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

// division function
int divide(int a, int b) {
    if(b == 0) {
        cout << "You cannot divide by zero.\n";
        return 0;
    }
    return a / b;
}

int main() {

    //
    for(int i = 0; i <= 2; i++) {
        int num1, num2;
        cout << "Please enter two integers.\n";
        cin >> num1 >> num2;

        int quotient = divide(num1, num2);
        
        cout << "Quotient: " << quotient << endl;
    }

    _pause();
    return EXIT_SUCCESS;
}
