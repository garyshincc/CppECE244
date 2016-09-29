#include <iostream>

using namespace std;

int main()
{
	// a will contain pointers to the values
	// where b and c are stored
	// int works
	int *a[2];
	int b = 3;
	int c = 4;
	a[0] = &b;
	a[1] = &c;

	cout << a[0] << endl;
	cout << *a[0] << endl;
	return 0;
}