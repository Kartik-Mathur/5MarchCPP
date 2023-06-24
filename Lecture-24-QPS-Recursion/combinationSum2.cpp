class Solution {
public:
	vector<vector<int>> v;

	void solve(vector<int>& arr, int i, int n, int target, vector<int> &x) {
		// base case
		if (target == 0) {
			v.push_back(x);
			return;
		}
		// recursive case
		for (int j = i; j < n; ++j)
		{
			if (j != i and arr[j] == arr[j - 1]) continue;

			if (arr[j] <= target) {
				x.push_back(arr[j]);
				solve(arr, j + 1, n, target - arr[j], x);
				x.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
		sort(arr.begin(), arr.end());
		vector<int> x;
		solve(arr, 0, arr.size(), target, x);
		return v;
	}
};