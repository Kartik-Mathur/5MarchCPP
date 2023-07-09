class Solution {
public:
	vector<int> v;

	void findNodes(TreeNode* root, int k, int d = 0) {
		// base case
		if (!root) return;
		// recursive case
		if (d == k) {
			v.push_back(root->val);
			return;
		}
		findNodes(root->left, k, d + 1);
		findNodes(root->right, k, d + 1);
	}

	int solve(TreeNode* root, TreeNode* target, int k) {
		// base case
		if (!root) return -1;

		// recursive case
		if (root == target) {
			findNodes(root, k);
			return 0;
		}

		// Left subtree ka kaam
		int DL = solve(root->left, target, k);
		if (DL != -1) {
			if (DL + 1 == k) {
				v.push_back(root->val);
				return -1;
			}
			else {
				findNodes(root->right, k - 2 - DL);
				return DL + 1;
			}
		}

		int DR = solve(root->right, target, k);
		if (DR != -1) {
			if (DR + 1 == k) {
				v.push_back(root->val);
				return -1;
			}
			else {
				findNodes(root->left, k - 2 - DR);
				return DR + 1;
			}
		}

		return -1;
	}

	vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
		solve(root, target, k);
		return v;
	}
};















