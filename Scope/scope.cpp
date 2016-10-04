#include <iostream>
#include <string>
using namespace std;

int foo(int x, int y);

int main(){
	// stack calls a and b memory is called
	int a = 3;
	int b = 4;

	// foo will create its return type memory size.
	// in this case it will create return address.
	foo(a,b);
	// after foo has ended, the a1 is destroyed,
	// stack last address returns to end of b.
	return 0;
}

int foo(int x, int y){
	// after a and b are called, the a1 is created
	int a1 = 5;
	x++;
	cout << x << endl;
	return x;
}