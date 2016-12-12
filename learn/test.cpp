#include <iostream>
#include <string>
#include "test.h"
using namespace std;

void func(int *&a){
	int * newint = new int;
	a = newint;
}

void func2(int * & b){
	cout << *b << endl;
	int * asdf;
	int c = 110;
	asdf = &c;
	b = asdf;
	cout << *b << endl;
}

void printEmployee(int n){
	cout << "some shit with emp: " << n << endl;
}

void printMultiple(){
	int n;
	cin >> n;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(cin.fail()){
			cout << "Done." << endl;
			return;
		}

		printEmployee(temp);
		cout << "Done." << endl;
	}
}

class Name{
private:
	string name;
public:
	Name(string name_){
		name = name_;
	}
	void printName();
	Name(Name &source);
};

void Name::printName(){
	cout << "Hello, " << name << endl;
}

void function1(Name somename){
	cout << "im reading this name" << endl;
}

Node::Node(){}
// copy constructor overloaded
Node::Node(const Node &source){
	name = source.name;
	cout << "copy constructor" << endl;
}


Node::Node(string name_){
	name = name_;
	cout << "created" << endl;
}
Node::~Node(){
	cout << "destroyed" << endl;
}
string Node::getName(){
	return name;
}

Node Node::operator= (Node rhs){
	name = rhs.name;
	return (*this);
}

void Node::copyAndChange(const Node & src){
	name = src.name;
	cout << name << " changed" << endl;
}

Node Node::operator+ (const Node & rhs){
	Node d(name + rhs.name);
	cout << "Add operator called" << endl;
	return d;
}



