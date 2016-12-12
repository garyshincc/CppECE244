
/*
The following program reads 10 integers from the standard input until either an invalid integer is
given or the end-of-file is reached. The 10 integers appear on a single input line. Re-write the
program so it used a stringstream for input rather than cin. Recall that you must get a line
from the input into a string and then use to build the stringstream.
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
/*
int main()
{
	string line;
	int number;
	stringstream ss;
	getline(cin, line);
	ss.str(line);
	cout << ss.str() << endl;
	for (int i = 0; i < 10 && !cin.eof(); i++){
		ss >> number;
		if(ss.fail()){
			cout << "invalid input" << endl;
			return 0;
		}
		else if (cin.eof()){
			cout << "insufficient input" << endl;
			return 0;
		}
		else{
			cout << "Integer value is: " << number << endl;
		}
	}
	return 0;
}
*/
/*
int main()
{
	//// double = doubleptr
	stringstream ss;
	string myline;
	getline(cin, myline);
	ss.str(myline);
	int i;
	ss >> i;
	if(ss.fail()){
		cout << "failed" << endl;
	}
	cout << i << endl;
	return 0;
}
*/

