#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int lcs(string &s1, string  &s2, int i, int j , int dp[][100]) {
	// base case
	if (i == s1.size() || j == s2.size()) return dp[i][j] = 0;

	if ( dp[i][j] != -1) return  dp[i][j];
	// recursive case
	if (s1[i] == s2[j])
		return  dp[i][j] = 1 + lcs(s1, s2, i + 1, j + 1, dp);

	return  dp[i][j] = max(lcs(s1, s2, i + 1, j, dp), lcs(s1, s2, i, j + 1, dp));
}

vector<string> allLCS;
void printLCS(string &s1, string &s2, int n, int m, string &ans,
              vector<vector<int> > &dp, int len) {
	// base  case
	if (len == 0) {
		// cout << ans << endl;
		allLCS.push_back(ans);
		return;
	}
	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		ans.push_back(s1[n - 1]);
		printLCS(s1, s2, n - 1, m - 1, ans, dp, len - 1);
		ans.pop_back();
	}
	else {
		if (len == dp[n][m - 1]) {
			printLCS(s1, s2, n, m - 1, ans, dp, len);
		}

		if (len == dp[n - 1][m]) {
			printLCS(s1, s2, n - 1, m, ans, dp, len);
		}
	}

}

int bottomUp(string &s1, string  &s2) {
	int n = s1.size();
	int m = s2.size();
	vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] =  1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}


	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	string ans = "";
	printLCS(s1, s2, n, m, ans, dp, dp[n][m]);

	return dp[n][m];
}
/*
for (int i = 1; i <= n; ++i)
	for (int j = 1; j <= m; ++j)
		dp[i][j] = (s1[i - 1] == s2[j - 1]) ?
		           (1 + dp[i - 1][j - 1]) : max(dp[i - 1][j], dp[i][j - 1]);

return dp[n][m];
*/

/*
for (int i = 1; i <= n; ++i)
	for (int j = 1; j <= m; ++j)
		if (s1[i - 1] == s2[j - 1]) dp[i][j] =  1 + dp[i - 1][j - 1];
		else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

return dp[n][m];
*/




int main() {

	string s1 = "abcde";
	string s2 = "abdce";

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << lcs(s1, s2, 0, 0, dp) << endl;

	cout << bottomUp(s1, s2) << endl;

	for (int i = 0; i < allLCS.size(); ++i)
	{
		reverse(allLCS[i].begin(), allLCS[i].end());
		cout << allLCS[i] << endl;
	}

	return 0;
}
















