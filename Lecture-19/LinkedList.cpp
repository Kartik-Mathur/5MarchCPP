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

void insertAtMiddle(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 1; i < pos; ++i)
		{
			temp = temp->next;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

/////////////////////// DELETION in LL ///////////////////////////////
void deleteAtFront(node* &head, node* &tail) {
	if (!head) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (!head) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

/////////////////////// DELETION in LL ///////////////////////////////


////////////////////// REVERSE A LL //////////////////////////////////
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

void reverseLLRecHelper(node* c, node* p) {
	if (c == NULL) {
		return;
	}

	// recursive case
	node* n = c->next;
	c->next = p;
	reverseLLRecHelper(n, c);
}

void reverseLLRec(node* &head, node* &tail) {
	reverseLLRecHelper(head, NULL);
	swap(head, tail);
}
////////////////////// REVERSE A LL //////////////////////////////////

///////////////////// MIDDLE OF LL ///////////////////////////////////
node* midLL(node* head) {
	if (!head or !head->next) {
		return head;
	}

	node* slow = head, *fast = head->next;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
///////////////////// MIDDLE OF LL ///////////////////////////////////


//////////////////// MERGE LL ////////////////////////////////////////
node* mergeLL(node* a, node* b) {
	if (!a) {
		return b;
	}
	if (!b) {
		return a;
	}

	node* nH = NULL;
	if (a->data > b->data) {
		nH = b;
		nH -> next = mergeLL(a, b->next);
	}
	else {
		nH = a;
		nH -> next = mergeLL(a->next, b);
	}
	return nH;
}
//////////////////// MERGE LL ////////////////////////////////////////

void printLL(node * p) {

	while (p != NULL) {
		cout << p->data << "-->";
		p = p->next;
	}
	cout << "NULL\n";
}

int main() {

	node* head, *tail, *head1, *tail1;

	head = tail = NULL;
	head1 = tail1 = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 8);

	insertAtEnd(head1, tail1, 0);
	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head1, tail1, 4);
	insertAtEnd(head1, tail1, 7);
	insertAtEnd(head1, tail1, 9);
	insertAtEnd(head1, tail1, 10);

	node* nH = mergeLL(head1, head);
	printLL(nH);

	// printLL(head);

	// insertAtMiddle(head, tail, 15, 3);

	// printLL(head);

	// deleteAtFront(head, tail);
	// printLL(head);
	// deleteAtMid(head, tail, 6);
	// printLL(head);
	// // reverseLL(head, tail);
	// reverseLLRec(head, tail);
	// printLL(head);

	// node* mid = midLL(head);
	// if (mid) {
	// 	cout << mid->data << endl;
	// }


	return 0;
}
















