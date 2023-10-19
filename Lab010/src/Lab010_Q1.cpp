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
// Question 1 LeggedAnimal class
class LeggedAnimal {
    private:
        int legCount;
        bool hasTail;
        string furType;
    
    public:
    LeggedAnimal(int legs, string fur, bool tail)
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

int main() {

    return 0;
}