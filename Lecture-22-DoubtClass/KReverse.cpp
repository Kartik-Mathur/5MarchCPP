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

void printLL(node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void insertAtEnd(node* &head, node* &tail, int data) {
	if (!head) {
		head = tail	= new node(data);
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void reverseLL(node* &head, node* &tail) {
	node* p = NULL, *c = head;
	while (c) {
		node* n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}

void kReverse(node* &head, int k) {
	node* ch, *ct, *n, *p;
	ch = head;
	p = NULL;

	while (ch) {
		ct = ch;
		for (int i = 0; i < k - 1; ++i)
		{
			ct = ct->next;
		}
		n = ct->next;
		ct->next = NULL;
		reverseLL(ch, ct);

		if (p == NULL) {
			head = ch;
			ct->next = n;
			p = ct;
			ch = n;
		}
		else {
			p->next = ch;
			ct->next = n;
			ch = n;
			p = ct;
		}
	}
}

int main() {

	node* head, *tail;
	head = tail = NULL;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int data;
		cin >> data;
		insertAtEnd(head, tail, data);
	}

	kReverse(head, k);

	printLL(head);


	return 0;
}
















