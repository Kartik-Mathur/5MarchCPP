#include <iostream>
using namespace std;

int knapsack(int *price, int* wt, int cap, int n, int dp[][100]) {
	// base case
	if (cap == 0  || n == 0) {
		return dp[n][cap] = 0;
	}
	if (dp[n][cap] != -1) return dp[n][cap];
	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;

	if (wt[n - 1] <= cap) {
		op1 = price[n - 1] + knapsack(price, wt, cap - wt[n - 1], n - 1, dp);
	}

	op2 = 0 + knapsack(price, wt, cap, n - 1, dp);
	return dp[n][cap] = max(op1, op2);
}

int bottomUp(int *price, int *wt, int capacity, int N) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1 = INT_MIN, op2 = INT_MIN;
			if (wt[n - 1] <= cap) {
				op1 =  price[n - 1] + dp[n - 1][cap - wt[n - 1]];
			}
			op2 = dp[n - 1][cap];

			dp[n][cap] = max(op1, op2);
		}
	}

	for (int n = 0; n <= N; ++n)
	{
		for (int cap = 0; cap <= capacity; ++cap)
		{
			cout  << dp[n][cap] << " ";
		}
		cout  << endl;
	}

	return dp[N][capacity];
}


int main() {

	int price[] = {10, 20, 15, 25};
	int weight[] = {1 , 3 , 4 , 2};
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	int cap = 5;
	cout << knapsack(price, weight, cap, 4, dp) << endl;
	cout << bottomUp(price, weight, cap, 4);

	return 0;
}
















