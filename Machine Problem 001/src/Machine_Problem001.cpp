/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Machine Problem 1>
 * @app desc: <C++ Learning>
 * @history:
 *  - <2023/10/10> | <Machine Problem 1>
 *      -- 
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Variable declaration
    string studentName, studentCourse, yearName;
    int yearLevel;
    float studentUnits, tuitionFee, downPayment, balance;

    // Initialize unit rate by year level
    float unitRate1 = 1500,
    unitRate2 = 1800,
    unitRate3 = 2000,
    unitRate4 = 2300;

    // Ask user for input
    cout << "Please enter your full name." << endl;
    getline(cin, studentName);
    cout << "\n" << endl;

    cout << "Please enter your Program/Course." << endl;
    getline(cin, studentCourse);
    cout << "\n" << endl;

    cout << "Please enter the number corresponding to your Year Level.\n"
    "1. Freshman\n"
    "2. Sophomore\n"
    "3. Junior\n"
    "4. Senior\n"
    "5. Senior\n" << endl;
    cin >> yearLevel;
    cout << "\n" << endl;

    cout << "Please enter the total number of units you are enrolling for." << endl;
    cin >> studentUnits;
    cout << "\n" << endl;

    // Compute payables
    switch (yearLevel) {

        case 1:
            yearName = "Freshman";
            tuitionFee = studentUnits * unitRate1;
            downPayment = tuitionFee * .30;
            balance = tuitionFee - downPayment;
            break;

        case 2:
            yearName = "Sophomore";
            tuitionFee = studentUnits * unitRate2;
            downPayment = tuitionFee * .30;
            balance = tuitionFee - downPayment;
            break;

        case 3:
            yearName = "Junior";
            tuitionFee = studentUnits * unitRate3;
            downPayment = tuitionFee * .30;
            balance = tuitionFee - downPayment;
            break;
        
        case 4:
        case 5:
            yearName = "Senior";
            tuitionFee = studentUnits * unitRate4;
            downPayment = tuitionFee * .30;
            balance = tuitionFee - downPayment;
            break;

        default:
            cout << "You entered an invalid Year Level." << endl;
            break;
    }

    // Set precision of payable float values
    ostringstream v1, v2, v3, v4;
    v1 << studentUnits;
    v2 << tuitionFee;
    v3 << downPayment;
    v4 << balance;

    string units = v1.str();
    string tuition = v2.str();
    string down = v3.str();
    string bal = v4.str();

    // Display data to user
    cout << "Student Name        : " + studentName << endl;
    cout << "Program/Course      : " + studentCourse << endl;
    cout << "Year Name           : " + yearName << endl;
    cout << "No. of Units        : " + units << endl;
    cout << "Tuition Fee         : " + tuition << endl;
    cout << "Down Payment        : " + down << endl;
    cout << "Balance             : " + bal << endl;
    cout << "\n" << endl;

    return 0;
}