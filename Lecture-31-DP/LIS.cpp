#include <iostream>
using namespace std;

int main() {

	int a[] = {10, 9, 3, 5, 4, 11, 7, 8};
	int n = sizeof(a) / sizeof(int);

	int dp[10000];
	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}
	int ans = 0;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (a[i] > a[j]) {
				dp[i] = max(dp[i], 1 + dp[j]);
				ans = max(ans, dp[i]);
			}
		}
	}

	cout << ans << endl;




	return 0;
}
















