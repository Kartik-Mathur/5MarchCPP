#include <iostream>
using namespace std;


class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

node *oh, *eh, *ot, *et;


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


void printLL(node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void seperateLL(node* head) {
	int indx = 1;

	while (head) {
		node* n = head;
		head = head->next;
		n->next = NULL;

		if (indx % 2 == 0) {
			if (eh == NULL) {
				eh = et = n;
			}
			else {
				et->next = n;
				et = n;
			}
		}
		else {
			if (oh == NULL) {
				oh = ot = n;
			}
			else {
				ot->next = n;
				ot = n;
			}
		}

		indx++;
	}

	ot->next = eh;
	cout << "Modified List: ";
	printLL(oh);
}

int main() {

	node* head = NULL, *tail = NULL;
	oh = eh = ot = et = NULL;
	int n, data;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> data;
		insertAtEnd(head, tail, data);
	}
	cout << "Original List: ";
	printLL(head);

	seperateLL(head);


	return 0;
}
















