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


int countNodes(node* root) {
	// base case
	if (!root) {
		return 0;
	}

	// recursive case
	return countNodes(root->left) + countNodes(root->right) + 1;
	// int LST_NodesCount = countNodes(root->left);
	// int RST_NodesCount = countNodes(root->right);
	// return LST_NodesCount + RST_NodesCount + 1;
}

int height(node* root) {
	if (!root) return 0;

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	return max(leftHeight, rightHeight) + 1;
}

int diameter(node* root) {
	// base case
	if (!root) return 0;

	// recursive case
	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}


class Pair {
public:
	int height;
	int diameter;
	Pair() {
		height = diameter = 0;
	}
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) {
		Pair p;
		return p;
	}
	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);
	Pair p;
	p.height = max(left.height, right.height) + 1;
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1, max(op2, op3));
	return p;
}


void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

node* findNode(node* root, int key) {
	// base case
	if (!root) return NULL;

	// recursive case
	if (root->data == key) {
		return root;
	}

	node* ans = findNode(root->left, key);
	if (ans != NULL) {
		return ans;
	}

	ans = findNode(root->right, key);
	if (ans != NULL) {
		return ans;
	}
	return NULL;
}

int main() {

	node* root = NULL;

	root = createTree();
	mirror(root);
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	cout << "Count Nodes: " << countNodes(root) << endl;
	cout << "Tree Height: " << height(root) << endl;
	cout << "Diameter Tree: " << diameter(root) << endl;

	Pair p = fastDiameter(root);
	cout << "Fast height: " << p.height << endl;
	cout << "Fast diameter: " << p.diameter << endl;

	return 0;
}
















