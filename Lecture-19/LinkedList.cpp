#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

// INSERTION
void insertAtFront(node* &head, node* &tail, int data) {
	if (!head) {
		head = tail = new node(data);
	}
	else {
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int data) {
	if (!head) {
		head = tail = new node(data);
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void printLL(node* p) {

	while (p != NULL) {
		cout << p->data << "-->";
		p = p->next;
	}
	cout << "NULL\n";
}

int main() {

	node* head, *tail;

	head = tail = NULL;
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);

	// insertAtFront(head, tail, 1);
	// insertAtFront(head, tail, 2);
	// insertAtFront(head, tail, 3);
	// insertAtFront(head, tail, 4);
	// insertAtFront(head, tail, 5);

	printLL(head);


	return 0;
}
















