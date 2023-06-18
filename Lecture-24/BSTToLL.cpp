#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class node {
public:
	int data;
	node*left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	if (!root) {
		root = new node(data);
		return root;
	}

	if (data < root->data) {
		root->left = insertInBST(root->left, data);
	}
	else {
		root->right = insertInBST(root->right, data);
	}
	return root;
}

node* createTree() {
	int data;
	cin >> data;
	node* root = NULL;
	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}
	return root;
}

void preOrder(node* root) {
	if (!root) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

class LinkedList {
public:
	node* head, *tail;
	LinkedList() {
		head = tail = NULL;
	}
};

LinkedList BSTtoLL(node* root) {
	// base case
	LinkedList l;
	if (!root) {
		return l;
	}
	// recursive case
	if (root->left and root->right) {
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		// 1->2->3     8     9->10->11
		// Left LL ke tail ka right should be root
		left.tail->right = root;// 1->2->3----->8     9->10->11
		root->right = right.head;// 1->2->3----->8---->9->10->11
		// create newHead and newTail
		l.head = left.head;
		l.tail = right.tail;
		// l.head->1->2->3----->8---->9->10->11<-l.tail
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList right = BSTtoLL(root->right);
		// NULL   8     9->10->11
		root->right = right.head;
		// NULL   8---->9->10->11
		l.head = root;
		l.tail = right.tail;
		// NULL   l.head->8---->9->10->11<-l.tail
		return l;
	}
	else if (root->left and !root->right) {
		LinkedList left = BSTtoLL(root->left);
		// 1->2->3     8     NULL

		left.tail->right = root;
		// 1->2->3---->8     NULL
		l.head = left.head;
		l.tail = root;
		// l.head->1->2->3---->8<-l.tail    NULL
		return l;
	}
	else {
		// NULL    8     NULL
		l.head = l.tail = root;
		// NULL    l.head->8<-l.tail     NULL
		return l;
	}
}

void printLL(node* root) {
	while (root) {
		cout << root->data << "-->";
		root = root->right;
	}
	cout << "NULL\n";
}

int main() {

	node* root = NULL;

	root = createTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	LinkedList l = BSTtoLL(root);

	printLL(l.head);

	return 0;
}
















