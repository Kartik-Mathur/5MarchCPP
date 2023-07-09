class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		// base case
		if (!root) {
			return NULL;
		}

		// Recursion case
		// 1. Agar root par hi koi p/q exist krna hai, toh root hi LCA hai
		if (root == p or root == q) {
			return root;
		}

		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);

		// 2. Root node ke LST mei ek LCA hai, ek RST mei LCA hai
		// this means root is LCA
		if (left and right) return root;
		if (left) return left;
		if (right) return right;

		return NULL;
	}
};