// https://leetcode.com/problems/number-of-squareful-arrays/description/
class Solution {
public:
	int ans = 0;
	void solve(vector<int> a, int i) {
		// base case
		if (i >= 2) {
			int sum = a[i - 1] + a[i - 2];
			sum = sqrt(sum);
			if (sum * sum != (a[i - 1] + a[i - 2]) ) {
				return ;
			}
		}

		if (i == a.size()) {
			ans++;
			return;
		}
		// recursive case
		for (int j = i; j < a.size(); ++j)
		{
			if (i == j || a[i] != a[j]) {
				swap(a[i], a[j]);
				solve(a, i + 1);
			}
		}
	}

	int numSquarefulPerms(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		solve(nums, 0);

		return ans;
	}
};