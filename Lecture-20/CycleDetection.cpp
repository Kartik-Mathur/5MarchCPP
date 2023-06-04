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

void printLL(node * p) {

	while (p != NULL) {
		cout << p->data << "-->";
		p = p->next;
	}
	cout << "NULL\n";
}

void createCycle(node* head, node* tail) {
	tail->next = head->next->next->next->next->next;
}

void breakCycle(node* f, node* head) {
	node* s = head;
	node* p = head;
	while (p->next != f) {
		p = p->next;
	}

	while (f != s) {
		p = f;
		f = f->next;
		s = s->next;
	}
	p->next = NULL;
}

bool isCyclic(node* head) {
	node* s = head, *f = head;

	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;

		if (f == s) {
			breakCycle(f, head);
			return true;
		}
	}
	return false;
}


int main() {

	node* head, *tail;

	head = tail = NULL;

	insertAtEnd(head, tail, 0);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 18);
	insertAtEnd(head, tail, 80);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 20);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 87);
	printLL(head);

	createCycle(head, tail);

	if (isCyclic(head) == true) {
		cout << "Cycle hai\n";
	}
	else {
		cout << "Cycle Nahi hai\n";
	}
	printLL(head);



	return 0;
}
















