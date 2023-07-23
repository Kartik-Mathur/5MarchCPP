#include <iostream>
using namespace std;


int minSteps(int n, int*dp) {
	// base case
	if (n == 1) return dp[n] = 0;

	if (dp[n] != -1) return dp[n];
	// recursive case
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;
	// 1. Divide by 3
	if (n % 3 == 0) op1 = minSteps(n / 3, dp);
	// 2. Divide by 2
	if (n % 2 == 0) op2 = minSteps(n / 2, dp);
	// 3. n-1
	op3 = minSteps(n - 1, dp);

	return dp[n] = 1 + min(op1, min(op2, op3));
}

int bottomUp(int n) {
	int dp[100000];
	dp[1] = 0;

	for (int i = 2; i <= n; ++i)
	{
		int op1, op2, op3;
		op1 = op2 = op3 = INT_MAX;

		if (i % 3 == 0) op1 = dp[i / 3];
		if (i % 2 == 0) op2 = dp[i / 2];
		op3 = dp[i - 1];

		dp[i] = 1 + min(op1, min(op2, op3));
	}
	return dp[n];
}

int main() {

	int n;
	cin >> n;
	int dp[100000];
	for (int i = 0; i <= n; ++i)
	{
		dp[i] = -1;
	}

	cout << minSteps(n, dp) << endl;
	cout << bottomUp(n) << endl;

	return 0;
}
















