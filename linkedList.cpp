#include <iostream>
#include <stdlib.h>
// you will be able to include "linked_list.h"
//#ifndef LINKED_LIST_H
// always guard your header file.
//#define LINKED_LIST_H
using namespace std;

// you can write without typedef
// but typedef will allow you to initialize variables
// just typing Node node1 = null;
// without, you need struct Node node1 = null;
typedef struct Node {
  int value;
  struct Node* next;
} Node;

Node* list_insert(Node* head, int value);

Node* list_search(Node* head, int value);

Node* remove_link(Node* head);

int main (){
	cout << "Welcome to linked list" << endl;

	Node* head = NULL;
	head = list_insert(head, 3);
	cout << "inserted: 3" << endl;
	head = list_insert(head, 15);
	cout << "inserted: 15" << endl;
	head = list_insert(head, 183);
	cout << "inserted: 183" << endl;
	head = list_insert(head, 5);
	cout << "inserted: 5" << endl;

	head = remove_link(head);

	return 0;
}

Node* remove_link(Node* head){
	if(head == NULL){
		cout << "nothing was there" << endl;
		return NULL;
	}

	Node * child = head->next;
	do
	{
		cout << "deleting: " << head->value << endl;
		child = head->next;
		free(head);
		head = child;
	}while(child != NULL);
	return NULL;
}

Node* list_search(Node* head, int find_value){
	for (Node * current = head; current != NULL; current = current->next){
		if(current->value == find_value){
			return current;
		}
	}
	return NULL;
}

Node* list_insert(Node* head, int new_value){
	Node* new_head = (Node*) malloc(sizeof(Node));
	if(new_head == NULL){
		// if null, then it ran out of memeory (most likely)
		return NULL;
	}
	new_head->value = new_value;
	new_head->next = head;
	return new_head;
}