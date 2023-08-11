#include <iostream>
#include <queue>
#include <map>
#include <list>
using namespace std;

class node {
public:
	node* left, *right;
	int data;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

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

map<int, list<int > > ans;

void solve(node*root, int d) {
	// base case
	if (!root) return;

	// recursive case
	ans[d].push_back(root->data);
	solve(root->left, d - 1);
	solve(root->right, d + 1);
}



int main() {

	int n;
	cin >> n;

	node* root = levelOrderCreateTree();
	solve(root, 0);

	for (auto p : ans) {
		// cout  << p.first<<"-->";
		for (auto e : p.second) {
			cout << e << " ";
		}
	}
	cout << endl;



	return 0;
}
















