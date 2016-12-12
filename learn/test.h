
#ifndef TEST_H
#define TEST_H
#include <string>
#include <iostream>
using namespace std;

class Node {
public:
	Node();
	Node(const Node &);
	Node(string);
	~Node();
	string getName();
	//Node & operator=(const Node&);
	Node operator=(Node);
	void copyAndChange(const Node&);
	Node noAction(Node &);
	Node operator+(const Node & rhs);
private:
	string name;
};

#endif