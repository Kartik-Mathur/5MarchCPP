#include <iostream>
#include <queue>
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


class meraComparator
{
public:
	bool operator()(node* a, node* b) {
		return a ->data < b->data;
	}

};

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 0);

	priority_queue<node*, vector<node*>, meraComparator > q;

	while (head) {
		q.push(head);
		head = head->next;
	}

	while (!q.empty()) {
		cout << q.top()->data << endl;
		q.pop();
	}


	// printLL(head);

	return 0;
}
















