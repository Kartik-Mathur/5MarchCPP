class Solution {
public:
	vector<vector<int> > v;
	void solve(int n, int k, int i, vector<int> &x) {
		// base case
		if (k == 0) {
			v.push_back(x);
			return;
		}
		// recursive case
		for (int no = i; no <= n; ++no)
		{
			x.push_back(no);
			solve(n, k - 1, i + 1, x);
			x.pop_back();
		}
	}

	vector<vector<int>> combine(int n, int k) {
		vector<int> x;
		solve(n, k, 1, x);

		return v;
	}
};