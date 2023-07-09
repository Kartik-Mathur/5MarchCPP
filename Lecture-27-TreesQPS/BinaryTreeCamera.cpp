class Pair {
public:
	int rootParHai;
	int rootParNahiHai;
	Pair() {
		rootParHai = rootParNahiHai = 0;
	}
};

class Solution {
public:

	Pair solve(TreeNode* root) {
		Pair p;
		// base case
		if (!root) return p;
		if (!root->left and !root->right) {
			p.rootParHai = 1;
			p.rootParNahiHai = 0;
			return p;
		}

		// recursive case
		Pair left = solve(root->left);
		Pair right = solve(root->right);

		p.rootParHai = 1 + left.rootParNahiHai + right.rootParNahiHai;
		p.rootParNahiHai = min( left.rootParHai + right.rootParHai,
		                        min(left.rootParHai + right.rootParNahiHai,
		                            left.rootParNahiHai + right.rootParHai)
		                      );
		return p;
	}

	int minCameraCover(TreeNode* root) {
		Pair p = solve(root);
		return min(p.rootParNahiHai, p.rootParHai);
	}
};







