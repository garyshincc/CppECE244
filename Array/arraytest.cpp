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
	int *p = new int;
	*p = 100;
	cout << p << endl;
	cout << *p << endl;

	delete p;
	p = NULL;


	int *q;
	int y = 10;
	q = &y;
	cout << *q << endl;

	return 0;
}