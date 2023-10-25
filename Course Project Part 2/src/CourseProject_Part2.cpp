/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Course Project Part 2>
 * @app desc: <C++ Learning>
 * @history:
 *  - <Oct 25 2023> | <Course Project Part 2>
 *      -- 
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string custName;
    int custAge;
    int custGuestCount;
    float custDayCount;
    float dailyRate;

    cout << "Enter customer name." << endl;
    getline(cin, custName);
    cout << "\n";
    cout << "Enter customer age." << endl;
    cin >> custAge;
    cout << "\n";
    cout << "How many guests will be staying?" << endl;
    cin >> custGuestCount;
    cout << "\n";
    cout << "How many days will you be staying with us?" << endl;
    cin >> custDayCount;

    switch(custGuestCount) {
        case 1:
            dailyRate = 1000;
            break;

        case 2:
            dailyRate = 1800;
            break;

        case 3:
            dailyRate = 2700;
            break;

        case 4:
            dailyRate = 3600;
            break;

        default:
            dailyRate = 4500;
            break;
    }

    float totalPayment = dailyRate * custDayCount;
    float downPayment = totalPayment * 0.40;
    float balance = totalPayment - downPayment;

    cout << "\n";
    cout << "-------------------- Hotel Reservation Slip --------------------" << endl;
    cout << "Customer Name      : " << custName << endl;
    cout << "Age                : " << custAge << endl;
    cout << "Number of guests   : " << custGuestCount << endl;
    cout << "Number of days     : " << custDayCount << endl;
    cout << fixed << setprecision(2);
    cout << "Total Payment      : \u20B1" << totalPayment << endl;
    cout << "Down Payment       : \u20B1" << downPayment << endl;
    cout << "Balance            : \u20B1" << balance << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "\n";

    return 0;
}
