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

node* treeUsingSortedArray(int a[], int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}

	// recursive case
	int m = (s + e) / 2;
	node* root = new node(a[m]);
	root->left = treeUsingSortedArray(a, s, m - 1);
	root->right = treeUsingSortedArray(a, m + 1, e);
	return root;
}

int main() {

	node* root = NULL;

	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(int);
	// root = createTree();
	root = treeUsingSortedArray(a, 0, n - 1);

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;


	return 0;
}
















