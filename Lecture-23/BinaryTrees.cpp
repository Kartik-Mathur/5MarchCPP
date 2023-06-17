#include <iostream>
#include <queue>
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
	if (!root) {
		return 0;
	}

	return countNodes(root->left) + countNodes(root->right) + 1;
}

int height(node* root) {
	if (!root) return 0;

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	return max(leftHeight, rightHeight) + 1;
}

void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

void levelOrderPrint(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left != NULL) {
				q.push(x->left);
			}
			if (x->right != NULL) {
				q.push(x->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

node* levelOrderCreateTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	node* root = new node(data);
	queue<node*> q;
	q.push(root);
	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		cout << "Enter Children of : " << x->data << endl;
		int left, right;
		cin >> left >> right;

		if (left != -1) {
			x->left = new node(left);
			q.push(x->left);
		}

		if (right != -1) {
			x->right = new node(right);
			q.push(x->right);
		}
	}

	return root;
}

int pre[] = {8 , 10, 1 , 6 , 4 , 7 , 3, 14 , 13};
int k = 0;

node* buildTree(int* in, int s, int e) {
	if (s > e) {
		return NULL;
	}

	node* root = new node(pre[k]);
	int indx = -1;
	for (int i = s; i <= e; ++i)
	{
		if (in[i] == pre[k]) {
			indx = i;
			break;
		}
	}
	k++;

	root->left = buildTree(in, s, indx - 1);
	root->right = buildTree(in, indx + 1, e);
	return root;
}

int main() {

	node* root = NULL;
	int in[] = {1 , 10 , 4 , 6, 7 , 8 , 3, 13, 14};
	root = buildTree(in, 0, sizeof(in) / sizeof(int) - 1);
	// root = createTree();
	// root = levelOrderCreateTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	levelOrderPrint(root);
	mirror(root);
	levelOrderPrint(root);


	return 0;
}
















