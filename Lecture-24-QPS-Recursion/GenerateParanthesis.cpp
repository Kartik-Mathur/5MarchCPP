class Solution {
public:
	vector<string> v;

	void solve(int open, int close, string &s, int n) {
		// base case
		if (s.size() == 2 * n) {
			v.push_back(s);
			return;
		}
		// recursive case
		if (open < n) {
			s.push_back('(');
			solve(open + 1, close, s, n);
			s.pop_back();
		}

		if (close < open) {
			s.push_back(')');
			solve(open, close + 1, s, n);
			s.pop_back();
		}
	}

	vector<string> generateParenthesis(int n) {
		string s;
		solve(0, 0, s, n);
		return v;
	}
};