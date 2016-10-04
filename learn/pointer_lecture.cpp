#include <iostream>
using namespace std;

int main(){
	cout << "hello world" << endl;

	int s;
	int *p;

	// will print the memory address
	cout << &s << endl;
	cout << &p << endl;

	// setting the value stored in the memory to 0
	s = 0;
	// setting the memory address to 0x0
	p = NULL;

	// still print the memory address
	

	// p will contain the memory address of s
	p = &s;

	// *p will contain the contents of s
	// p will contain the address of s
	// &p will contain the address of p
	cout << *p << endl;
	cout << p << endl;
	cout << &p << endl;
	return 0;
}