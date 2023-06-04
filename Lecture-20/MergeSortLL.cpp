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


// MERGE-SORT-LL
node* mergeSortLL(node* head) {
	// base case
	if (head == NULL || head->next == NULL) {
		return head;
	}
	// recursive case
	// 1. Divide
	node* mid = midLL(head);
	node* a = head;
	node* b = mid->next;
	mid->next = NULL;

	// 2. Sort
	a = mergeSortLL(a);
	b = mergeSortLL(b);

	// 3. Merge kardo sorted lists ko
	return mergeLL(a, b);
	// node* nH = mergeLL(a, b);
	// return nH;
}


void printLL(node * p) {

	while (p != NULL) {
		cout << p->data << "-->";
		p = p->next;
	}
	cout << "NULL\n";
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
	head = mergeSortLL(head);
	printLL(head);


	return 0;
}
















