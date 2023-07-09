
class Solution {
public:
	int cameras = 0;
	int solve(TreeNode* root) {
		if (!root) return 0;

		int left = solve(root->left);
		int right = solve(root->right);

		if (left == -1 || right == -1) {
			cameras++;
			return 1;
		}

		if (left == 1 || right == 1) {
			return 0;
		}
		return -1;
	}

	int minCameraCover(TreeNode* root) {
		int val = solve(root);
		if (val == -1)
			cameras ++;
		return cameras;
	}

};








