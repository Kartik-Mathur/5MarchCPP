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


void insertAtFront(node* &head, node* &tail, int data) {
	if (!head) {
		head = tail	= new node(data);
	}
	else {
		node* n = new node(data);
		n->next = head;
		head = n;
	}
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

int lengthLL(node* h) {
	int cnt = 0;
	while (h) {
		cnt++;
		h = h->next;
	}
	return cnt;
}

void solve(node* xh, node* xt, node* yh, node* &yt) {
	int carry = 0;
	while (xh and yh) {
		int sum = xh->data + yh->data + carry;
		int digit = sum % 10;
		carry = sum / 10;

		yh->data = digit;
		xh = xh->next;
		yh = yh->next;
	}

	while (carry and yh) {
		yh->data += carry;
		carry = yh->data / 10;
		yh->data %= 10;
		yh = yh->next;
	}

	if (carry and yh == NULL) {
		node* n = new node(carry);
		yt->next = n;
		yt = n;
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

int main() {
	int data;

	node* head1, *tail1, *head2, *tail2;
	head1 = head2 = tail1 = tail2 = NULL;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> data;
		insertAtEnd(head1, tail1, data);
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> data;
		insertAtEnd(head2, tail2, data);
	}

	int len_h1 = lengthLL(head1);
	int len_h2 = lengthLL(head2);
	if (len_h1 > len_h2) {
		solve(head2, tail2, head1, tail1);
		reverseLL(head1, tail1);
		printLL(head1);
	}
	else {
		solve(head1, tail1, head2, tail2);
		reverseLL(head2, tail2);
		printLL(head2);
	}

	return 0;
}
















