#include <iostream>

using namespace std;

class A{
	public:
		A() {cout << "A ctor" << endl;}
		~A() {cout << "A dtor" << endl;}

		virtual void foo(){cout << "A foo()" << endl;}

		A& operator= (const A& rhs){cout << "A op=" << endl;}

};

class B : public A{
	public:
		B() {cout << "B ctor" << endl;}
		~B() {cout << "B dtor" << endl;}
		virtual void foo(){cout << "B foo()" << endl;}
		//B& operator=(const B& rhs) {cout << "B op=" << endl;}
	protected:
		A myInstanceOfA;
};

A foo(A & input){
	input.foo();
	return input;
}

int main(){
	B myB;
	B myOtherB;
	A myA;

	myOtherB = myB;
	return 0;
	
}
