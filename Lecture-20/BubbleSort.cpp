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

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
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

void printLL(node * p) {

	while (p != NULL) {
		cout << p->data << "-->";
		p = p->next;
	}
	cout << "NULL\n";
}

void bubbleSortLL(node* &head) {
	int lenLL = lengthLL(head);

	for (int i = 0; i < lenLL - 1; ++i)
	{
		node* c = head;
		node* p = NULL;
		node* n;

		while (c != NULL and c->next != NULL) {
			n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				// 1. Head change hoga
				if (p == NULL) {
					c->next = n->next;
					n->next = c;
					p = head = n;
				}
				else { // 2. Head change nahi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// swapping nhi hogi
				p = c;
				c = n;
			}
		}
	}
}

int main() {

	node* head, *tail;

	head = tail = NULL;

	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 0);
	printLL(head);
	bubbleSortLL(head);
	printLL(head);


	return 0;
}
















