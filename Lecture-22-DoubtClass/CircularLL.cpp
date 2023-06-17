#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

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

bool kyaDataPresentHai(node* head, int data) {
	while (head) {
		if (head->data == data) {
			return true;
		}
		head = head->next;
	}
	return false;
}

void printLL(node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}


void solve(node* &head, node* &tail) {
	int data;
	cin >> data;

	while (data != -1) {
		if (kyaDataPresentHai(head, data)) {
			break;
		}
		insertAtEnd(head, tail, data);
		cin >> data;
	}
	printLL(head);
}


int main() {

	node* head = NULL, *tail = NULL;
	solve(head, tail);

	return 0;
}
















