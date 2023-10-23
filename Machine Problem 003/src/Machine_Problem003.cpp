/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Machine Problem 3>
 * @app desc: <C++ Learning>
 * @history:
 *  - <Oct 23 2023> | <Machine Problem 003>
 *      -- Answered Machine Problem 003
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip> // for setprecision

using namespace std;


class Payslip {
    private:
        string name;
        string payGrade;
        float basicSalary;
        float overtimeHours;
        float overtimePay;
        float grossPay;
        float netPay;
        float withholdingTax;
        float taxRate;
    
    public:
        Payslip(string empName, float empBasicSalary, float empOTHrs) {
            name = empName;
            basicSalary = empBasicSalary;
            overtimeHours = empOTHrs;
        }

        void determinePayGradeAndTaxRate() {
            if(basicSalary >= 10000 && basicSalary <= 30000) {
                payGrade = "A";
            } else if(basicSalary >= 30000.01) {
                payGrade = "B";
            }

            if(basicSalary >= 10000 && basicSalary <= 15000) {
                taxRate = 0.10;
            } else if(basicSalary >= 15000.01 && basicSalary <= 25000) {
                taxRate = 0.15;
            } else if(basicSalary >= 25000.01 && basicSalary <= 35000) {
                taxRate = 0.20;
            } else if(basicSalary >= 35000.01 && basicSalary <= 45000) {
                taxRate = 0.25;
            } else if(basicSalary >= 45000.01) {
                taxRate = 0.30;
            }
        }

        void computePay() {
            float sss = 500.00;
            float pagibig = 200.00;
            float philhealth = 100.00;
            float fixedValues = sss + pagibig + philhealth;

            overtimePay = 0.01 * basicSalary * overtimeHours;
            grossPay = basicSalary + overtimePay;
            withholdingTax = grossPay * taxRate;
            netPay = grossPay - withholdingTax - fixedValues;

            cout << fixed << setprecision(2);

            cout << "\n";
            cout << "Employee Name    : " << name << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Basic Salary     : \u20B1" << basicSalary << endl;
            cout << "Pay Grade        : " << payGrade << endl;
            cout << "No. of OT Hours  : " << overtimeHours << endl;
            cout << "OT Pay           : \u20B1" << overtimePay << endl;
            cout << "Gross Pay        : \u20B1" << grossPay << endl;
            cout << "--------------------- Deductibles ---------------------" << endl;
            cout << "SSS              : " << sss << endl;
            cout << "Pag-Ibig         : " << pagibig << endl;
            cout << "PhilHealth       : " << philhealth << endl;
            cout << "Withholding Tax  : \u20B1" << withholdingTax << endl;
            cout << "-------------------------------------------------------" << endl;
            cout << "Net Pay          : \u20B1" << netPay << endl;
            cout << "\n";
        }
};

int main() {
    string employeeName;
    float employeeBasic;
    float employeeOvertime;

    cout << "Enter employee name." << endl;
    getline(cin, employeeName);
    cout << "Enter employee basic salary." << endl;
    cin >> employeeBasic;
    cout << "Enter employee overtime hours." << endl;
    cin >> employeeOvertime;

    Payslip employee001(employeeName, employeeBasic, employeeOvertime);
    employee001.determinePayGradeAndTaxRate();
    employee001.computePay();

    return 0;
}
