#include <iostream>
#include <stdlib.h>
using namespace std;

class Base {
	private:
		int a;
	protected:
		int p;
	public:
	Base (int _a){
		a = _a;
	}
	void set(int _a){
		a = _a;
	}
	void print(){
		cout << "base.a = " << a << endl;
	}
};

class Derived : public Base {
	private:
		int b;
	public:
		Derived() : Base(5){
			b = 0;
		}
		Derived(int _b) : Base(5){
			b = _b;
		}
		void set(int _a, int _b, int _p){
			Base::set(_a);
			b = _b;
			p = _p;
		}
		void print(){
			Base::print();
			cout << "Derived.b = " << b << endl;
			cout << "Protected.p = " << p << endl;
		}
};

int main(){
	Derived b;
	Derived c(10);
	c.print();
	b.set(1, 2, 3);
	b.print();
	return 0;
}