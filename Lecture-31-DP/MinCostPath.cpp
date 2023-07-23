#include <iostream>
using namespace std;

int solve(int cost[][4], int n, int m) {
	int dp[100][100] = {0};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i == 0 and j == 0) dp[i][j] = cost[i][j];
			else {
				int op1 = (i - 1 >= 0) ? dp[i - 1][j] : INT_MAX;
				int op2 = (j - 1 >= 0) ? dp[i][j - 1] : INT_MAX;
				dp[i][j] = min(op1, op2) + cost[i][j];
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n - 1][m - 1];
}

int main() {

	int cost[4][4] = {
		{1, 1, 8, 3},
		{8, 1, 1, 9},
		{15, 5, 1, 12},
		{20, 25, 1, 1}
	};

	cout << solve(cost, 4, 4) << endl;


	return 0;
}
















