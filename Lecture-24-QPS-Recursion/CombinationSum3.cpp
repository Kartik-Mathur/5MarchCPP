class Solution {
public:
	vector<vector<int>> v;
	void solve(int start, int target, int k, vector<int> &x) {
		// base case
		if (k == 0 and target == 0) {
			v.push_back(x);
			return;
		}
		if (k <= 0 || target <= 0) return;

		// recursive case
		for (int no = start; no <= 9; ++no)
		{
			if (no <= target) {
				x.push_back(no);
				solve(no + 1, target - no, k - 1, x);
				x.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> x;
		solve(1, n, k, x);

		return v;
	}
};