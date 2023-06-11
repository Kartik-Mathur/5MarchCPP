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
};


int main() {

	BinaryTree t;
	t.buildTree();

	return 0;
}
















