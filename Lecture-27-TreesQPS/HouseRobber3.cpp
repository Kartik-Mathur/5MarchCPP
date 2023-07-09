class Pair {
public:
	int choriHui;
	int choriNahiHui;
	Pair() {
		choriHui = choriNahiHui = 0;
	}
};

class Solution {
public:

	Pair solve(TreeNode* root) {
		Pair p;
		// base case
		if (!root) {
			return p;
		}

		// recursive case
		Pair left = solve(root->left);
		Pair right = solve(root->right);

		// 1. Root par chori karli
		p.choriHui = root->val + left.choriNahiHui + right.choriNahiHui;

		// 2. Root par chori nahi kri
		p.choriNahiHui = max(left.choriHui, left.choriNahiHui) +
		                 max(right.choriHui, right.choriNahiHui);
		return p;
	}

	int rob(TreeNode* root) {
		Pair p = solve(root);
		return max(p.choriHui, p.choriNahiHui);
	}
};












