#include <iostream>

using namespace std;

class A{
	public:
		A(int i) {cout << "A ctor with param" << endl;}
		A() {cout << "A ctor" << endl;}
		~A() {cout << "A dtor" << endl;}
};

class B : public A{
	public:
		B() {cout << "B ctor" << endl;}
		~B() {cout << "B dtor" << endl;
			delete myInstanceOfA;}
	protected:
		A *myInstanceOfA = new A(1234);
};

int main(){
	B myB;
	return 0;

}
