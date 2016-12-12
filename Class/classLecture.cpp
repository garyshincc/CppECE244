#include "Time.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    Time* time_1 = new Time();
    time_1->resetTime();
    time_1->setMinutes(10);
    time_1->setSeconds(15);
    time_1->printTime();
    

    Time time_2;
    time_2.resetTime();
    time_2.setMinutes(10);
    time_2.setSeconds(55);
    time_2.printTime();
    // time_2 is an object, deleted automatically
    // time_1 is a pointer to the object, must be deleted with delete or free
    // both on stack.
    delete time_1;

    stringstream ss;
    string input;
    getline(cin,input);
    ss.str(input);
    string input1, input2,input3;
    ss >> input1 >> input2 >> input3;

    cout << input1 << " " << input2 << " " << input3 << endl;



    return 0;
}