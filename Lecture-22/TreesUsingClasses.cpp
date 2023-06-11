#include <iostream>
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

class BinaryTree {
public:
	node* root;

	BinaryTree() {
		root = NULL;
	}

	node* createTree() {
		int data;
		cin >> data;

		if (data == -1) {
			return NULL;
		}

		node* r = new node(data);
		r->left = createTree();
		r->right = createTree();
		return r;
	}

	void buildTree() {
		root = createTree();
	}


	void preOrderHelper(node* root) {
		if (!root) return;

		cout << root->data << " ";
		preOrderHelper(root->left);
		preOrderHelper(root->right);
	}

	void preOrder() {
		preOrderHelper(root);
	}

	void inOrderHelper(node* root) {
		if (!root) return;

		inOrderHelper(root->left);
		cout << root->data << " ";
		inOrderHelper(root->right);
	}

	void inOrder() {
		inOrderHelper(root);
	}

	void postOrderHelper(node* root) {
		if (!root) return;

		postOrderHelper(root->left);
		postOrderHelper(root->right);
		cout << root->data << " ";
	}

	void postOrder() {
		postOrderHelper(root);
	}

};


int main() {

	BinaryTree t;
	t.buildTree();

	t.preOrder();
	cout << endl;
	t.inOrder();
	cout << endl;
	t.postOrder();
	cout << endl;

	return 0;
}
















