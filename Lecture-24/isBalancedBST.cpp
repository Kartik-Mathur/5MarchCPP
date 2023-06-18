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

class Pair {
public:
	int height;
	bool isBalanced;
};

Pair checkHeightBalanced(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = 0;
		p.isBalanced = true;
		return p;
	}
	// recursive case
	Pair p;
	Pair left = checkHeightBalanced(root->left);
	Pair right = checkHeightBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	p.isBalanced = (abs(left.height - right.height) <= 1
	                and left.isBalanced and right.isBalanced) ?
	               true : false;
	return p;
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

	Pair p = checkHeightBalanced(root);
	if (p.isBalanced) {
		cout << "Balanced hai\n";
	}
	else {
		cout << "Balanced Nahi hai\n";
	}


	return 0;
}
















