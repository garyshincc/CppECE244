#include <iostream>
using namespace std;
class A{
    public:
    A() {cout << "A instantiated" << endl;}
    ~A() {cout << "A destroyed" << endl;}
};

A a; // instantiated first
A* foo(){
    A b; // instantiated
    A* p = NULL; // p is a pointer but not instantiated, only the pointer
    cout << "In foo" << endl;
    p = new A[2]; // 2 objects of A on the Heap
    return p;
    // b is destroyed, p is not destroyed, cuz its created with new
}
int main(){
    A c[3]; // 3 objects of A on the stack, and instantiated
    A* q = NULL; // q is a pointer to A but A is not instantiated, just the pointer is.
    cout << "In main" << endl;
    q = foo(); // q takes in foo
    delete [] q; // destroys the q
    cout << "done" << endl;

    A* w[10]; // each element is a pointer to an object A, doesnt instantiated
    w[0] = new A(); // now the 0th index is pointing to an instantiated A

    int * p = new int();
    *p = 10;
    cout << "p is: " << *p << endl;
    delete p;



    return 0;
    // c is destroyed 
    // a is destroyed
}
