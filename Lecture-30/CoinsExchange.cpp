#include <iostream>
using namespace std;

int solve(int amt, int *deno, int n, int *dp) {
	//base case
	if (amt == 0) return dp[amt] = 0;
	if (dp[amt] != -1) return dp[amt];
	//recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int x = solve(amt - deno[i], deno, n, dp);
			if (x != INT_MAX) ans = min(ans, x + 1);
		}
	}
	return dp[amt] = ans;
}

int bottomUp(int totalAmt, int *deno, int n) {
	int *dp = new int[totalAmt + 1];
	for (int i = 0; i <= totalAmt; ++i)
	{
		dp[i] = INT_MAX;
	}

	dp[0] = 0;

	for (int rupay = 1; rupay <= totalAmt; ++rupay)
	{
		for (int i = 0; i < n; ++i)
		{
			if (rupay >= deno[i]) {
				int kamRupay = rupay - deno[i];
				if (dp[kamRupay] != INT_MAX)
					dp[rupay] =  min(dp[rupay], dp[kamRupay] + 1);
			}
		}
	}

	return dp[totalAmt];
}

int main() {

	int deno[] = {1, 7, 10};
	int n = sizeof(deno) / sizeof(int);
	int amt;
	cin >> amt;

	int dp[100000];
	for (int i = 0; i <= amt; ++i)
	{
		dp[i] = -1;
	}

	cout << solve(amt, deno, n, dp) << endl;
	cout << bottomUp(amt, deno, n) << endl;

	return 0;
}
















