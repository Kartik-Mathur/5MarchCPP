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

int main() {

	node* head, * tail;

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int data;
		cin >> data;

		insertAtEnd(head, tail, data);
	}

	printLL(head);




	return 0;
}
















