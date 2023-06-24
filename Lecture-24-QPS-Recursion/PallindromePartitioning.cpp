class Solution {
public:

	vector< vector<string> > v;

	bool isPalindrome(string &s, int i, int j) {
		while (i < j) {
			if (s[i++] != s[j--]) return false;
		}
		return true;
	}

	void solve(string &s, int i, vector<string> &x) {
		// base case
		if (i == s.size()) {
			v.push_back(x);
			return;
		}
		// recursive case
		for (int j = i; j < s.size(); ++j)
		{
			if (isPalindrome(s, i, j)) {
				x.push_back(s.substr(i, j - i + 1));
				solve(s, j + 1, x);
				x.pop_back();
			}
		}
	}

	vector<vector<string>> partition(string s) {
		vector<string> x;
		solve(s, 0, x);

		return v;
	}
};