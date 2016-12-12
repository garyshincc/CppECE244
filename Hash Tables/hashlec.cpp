#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map < string , double >::iterator it;
int main(){
	string name = "  ";
	double age;
	unordered_map < string , double > myListOfPpl;

	while (name != "quit"){
		cout << "enter your name pl0x: ";
		cin >> name;
		cout << "enter your age you old fuck: ";
		cin >> age;
		myListOfPpl.insert(pair < string, double >(name, age));
	}
	string searchname;
	cout << "lets see how fast i can search your name: ";
	cin >> searchname;
	it = myListOfPpl.find(searchname);
	cout << "your name was found: " << it->first << endl;
	cout << "holy fuck youre old as fuck: " << it->second << endl;

	return 0;
}

// some hash function
// take 1 integer, map it to another integer
// that is the index of the large array.
