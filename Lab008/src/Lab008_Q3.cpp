/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 008>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 17 2023> | <Lab008 Question 3>
 *      -- Answered Question 3 of Lab008
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

// fibonacci function using recursion
unsigned long long fibonacci(int n) {
    if(n <= 1) {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main() {
    // ask user for input
    int n;
    cout << "Enter a non-zero integer for n in nth Fibonacci number: \n";
    cin >> n;

    // display result to user
    cout << "\n" << n << "th Fibonacci number is " << fibonacci(n) << "\n\n";
    
    _pause();
    return EXIT_SUCCESS;
}
