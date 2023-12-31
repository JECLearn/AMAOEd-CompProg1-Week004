/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 19 2023> | <Lab010 Question 2>
 *      -- Answered Question 2 of Lab010
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
// Question 2 Person class
class Person {
    private:
        string name;
        string address;
        string gender;
        int age;
        string occupation;

    public:
        Person(string n, string addr, string g, int a, string o)
            : name(n), address(addr), gender(g), age(a), occupation(o) {}
        
        string getName() {
            return name;
        }

        string getAddress() {
            return address;
        }

        string getGender() {
            return gender;
        }

        int getAge() {
            return age;
        }

        string getOccupation() {
            return occupation;
        }
};

class Student : public Person {
    private:
        string academicProgram;
        int collegeYear;
        string university;
    
    public:
        Student(string n, string addr, string g, int a, string o,
                string program, int year, string univ)
            : Person(n, addr, g, a, o), academicProgram(program),
                    collegeYear(year), university(univ) {}

        void setAcademicProgram(string program) {
            academicProgram = program;
        }        

        void setCollegeYear(int year) {
            collegeYear = year;
        }

        void setUniversity(string univ) {
            university = univ;
        }

        string getAcademicProgram() {
            return academicProgram;
        }

        int getCollegeYear() {
            return collegeYear;
        }

        string getUniversity() {
            return university;
        }

};

int main() {
    // instantiate object and user input variables
    string studentProgram;
    int studentYear;
    string studentUniv;

    Student student1("J. E. Cunanan", "143 Heaven St.", "Male", 35,
                    "Student", "Computer Science", 2, "AMA");

    // ask user for input
    cout << "Enter academic program.\n";
    getline(cin, studentProgram);
    cout << "Enter university.\n";
    getline(cin, studentUniv);
    cout << "Enter college year.\n";
    cin >> studentYear;

    student1.setAcademicProgram(studentProgram);
    student1.setCollegeYear(studentYear);
    student1.setUniversity(studentUniv);

    //displaying data using accessors
    cout << "\nStudent Information\n\n";
    cout << "Student Name:           " << student1.getName() << "\n";
    cout << "Address:                " << student1.getAddress() << "\n";
    cout << "Gender:                 " << student1.getGender() << "\n";
    cout << "Age:                    " << student1.getAge() << "\n";
    cout << "Occupation:             " << student1.getOccupation() << "\n";
    cout << "Academic Program:       " << student1.getAcademicProgram() << "\n";
    cout << "College Year:           " << student1.getCollegeYear() << "\n";
    cout << "Enrolled University:    " << student1.getUniversity() << "\n\n";

    return 0;
}
