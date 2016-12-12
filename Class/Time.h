#pragma once
#include <string>
using namespace std;
class Time{
	// class defaults to private, not public
	// if not specified, then its all private
	// struct is by default public
	private:
	int minute;
	int second;
	string name;

	public:
	Time();
	Time(string);
	~Time();
	void resetTime();
	void setName(string);
	string get_name();
	void setSeconds(int);
	void setMinutes(int);
	void operator+();
	int getSeconds();
	int getMinutes();
	void printTime();
};