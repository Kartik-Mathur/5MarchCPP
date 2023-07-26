#include <iostream>
#include <vector>
using namespace std;

void findLIS(int *a, int *dp, int indx, vector<int> &v, int prevIncludedVal, int len) {
	// base case
	if (indx == -1) {
		if (len == 0) {
			for (int i = v.size() - 1; i >= 0; --i)
			{
				cout << v[i] << "  ";
			}
			cout  << endl;
		}
		return;
	}

	// Agar first time aa rhey h
	//  Current indx, LIS ka part hoga
	if (dp[indx] == len and a[indx] < prevIncludedVal) {
		v.push_back(a[indx]);
		findLIS(a, dp, indx - 1, v, a[indx], len - 1);
		v.pop_back();
	}
	// else {
	// current indx,  LIS  ka part nhi hoga
	findLIS(a, dp, indx - 1, v, prevIncludedVal, len);
	// }

}


int main() {

	int a[] = {10, 9, 3, 5, 4, 11, 7, 8};
	int n = sizeof(a) / sizeof(int);

	int dp[10000];
	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}
	int ans = 0;
	int indx;
	for (int i = 1; i < n; ++i)
	{
		for (int j = i - 1; j >= 0 ; --j)
		{
			if (a[i] > a[j]) {
				dp[i] = max(dp[i], 1 + dp[j]);
				// ans = max(ans, dp[i]);
				if (dp[i] >= ans) {
					ans = dp[i];
					indx = i;
				}
			}
		}
	}

	cout << "Index: " << indx << endl;
	cout << ans << endl;
	vector<int> v;
	findLIS(a, dp, indx, v, INT_MAX, ans);




	return 0;
}
















