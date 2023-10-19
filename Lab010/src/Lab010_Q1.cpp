/* ****************************************************************
 * @author: <J. E. Cunanan>
 * @student number: <2022-0072254>
 * @app name: <Lab 010>
 * @app desc: <AMA C++ Learning>
 * @history:
 *  - <Oct 19 2023> | <Lab010 Question 1>
 *      -- Answered Question 1 of Lab010
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
// Question 1 LeggedMammal class
class LeggedMammal {
    private:
        int legCount;
        bool hasTail;
        string furType;
    
    public:
        LeggedMammal(int legs, string fur, bool tail)
            : legCount(legs), furType(fur), hasTail(tail) {}

        int getLegCount() {
            return legCount;
        }

        string getFurType() {
            return furType;
        }

        bool hasTailFlag() {
            return hasTail;
        }
};

class Dog : public LeggedMammal {
    private:
        string breed;
        string size;
        bool isRegistered;

    public:
        Dog(int legs, string fur, bool tail, string breed, string size, bool isReg)
            : LeggedMammal(legs, fur, tail), breed(breed), size(size), isRegistered(isReg) {}
        
        void setBreed(string newBreed) {
            breed = newBreed;
        }

        void setSize(string newSize) {
            size = newSize;
        }

        void setReg(bool newReg) {
            isRegistered = newReg;
        }

        string getBreed() {
            return breed;
        }

        string getSize() {
            return size;
        }

        bool getReg() {
            return isRegistered;
        }
};

int main() {
    // instantiate object and user input variables
    string dogBreed;
    string dogSize;
    bool dogReg;

    Dog dog1(4, "Short length, black", true, "Labrador", "Medium Size", true);

    // changing properties with mutators, asking user for input
    cout << "What is the dog's breed?\n";
    cin >> dogBreed;
    cout << "What is the dog's size?\n";
    cin >> dogSize;
    cout << "Is the dog registered? Enter 1 for true, 0 for false.\n";
    cin >> dogReg;

    dog1.setBreed(dogBreed);
    dog1.setSize(dogSize);
    dog1.setReg(dogReg);

    // Display data using accessors
    cout << "\nDog Information \n\n";
    cout << "Number of legs:  " << dog1.getLegCount() << "\n";
    cout << "Fur type:        " << dog1.getFurType() << "\n";
    cout << "Has tail:        " << (dog1.hasTailFlag() ? "Yes" : "No") << "\n";
    cout << "Breed:           " << dog1.getBreed() << "\n";
    cout << "Size:            " << dog1.getSize() << "\n";
    cout << "Registered:      " << (dog1.getReg() ? "Yes" : "No") << "\n\n";

    return 0;
}