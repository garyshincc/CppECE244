#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
    second = minute = 0;
    cout << "Time initialized" << endl;
}
Time::Time(string const name) : name(name){
}
Time::~Time()
{
    // if it isnt NULL,
    // then delete any pointers, free mallocs.getMinutes
    // if used with "new" then free it.
    cout << "Time destroyed" << endl;
}
// basically overriding the operator +
void Time::operator+ (){
    second = 12;
    minute = 21;
}
string Time::setName(string name){

}
string Time::get_name() const {
    return name;
}
void Time::resetTime()
{
    minute = second = 0;
}
void Time::setSeconds(int target){
    if(target > 60){
        second = 60;
    }
    else if (target < 0){
        second = 0;
    }
    else{
        second = target;
    }
}

void Time::setMinutes(int target){
    if(target > 60){
        minute = 60;
    }
    else if (target < 0){
        minute = 0;
    }
    else{
        minute = target;
    }
}

int Time::getSeconds(){
    return second;
}
int Time::getMinutes(){
    return minute;
}

void Time::printTime(){
    cout << minute << ":" << second << endl;
}