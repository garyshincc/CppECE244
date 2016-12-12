#include <string>
#include <iostream>
#include "test.h"
using namespace std;

int main(){

	Node n1("hello");
	Node n2("world");

	cout << n1.getName() << endl;
	cout << n2.getName() << endl;

	Node n3 = n2 + n1;

	cout << n3.getName() << endl;
	
	return 0;
}