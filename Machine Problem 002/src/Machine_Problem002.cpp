/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Machine Problem 2>
 * @app desc: <C++ Learning>
 * @history:
 *  - <Oct 17, 2023> | <Machine Problem 2>
 *      -- 
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// seat grid function
const int rows = 5;
const int columns = 7;

void seatGrid(int seats[rows][columns]) {
    cout << "\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(seats[i][j] == 0) {
                cout << setw(5) << "0";
            } else {
                cout << setw(5) << seats[i][j];
            }
        }
        cout << "\n";
    }
}

int main() {
    // grid numbering
    int seats[rows][columns];
    int seatNumber = 1;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            seats[i][j] = seatNumber++;
        }
    }

    // loop handling user input
    while(true) {
        seatGrid(seats);

        int userSeat;
        cout << "Please enter seat number to reserve. Enter 0 to exit.\n";
        cout << "Seat number: ";
        cin >> userSeat;

        if(userSeat == 0) {
            cout << "Exiting...\n";
            break;
        }

        if(userSeat < 1 || userSeat > rows * columns) {
            cout << "Invalid seat number. Please try again.\n";
            continue;
        }
    }

    return 0;
}