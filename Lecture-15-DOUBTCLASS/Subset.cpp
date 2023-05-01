#include <iostream>
#include <string>
using namespace std;

string ans[100000];
int l = 0;

int checkSum(int *a, int n) {
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}
	return ans;
}

void subsets(int *a, int i, int *out, int j, int n, int k) {
	// base case
	if (i == n) {
		if (checkSum(out, j) == k) {
			for (int i = 0; i < j; ++i)
			{
				ans[l] += to_string(out[i]);
			}
			l++;
		}
		return;
	}
	// recursive case
	subsets(a, i + 1, out, j, n, k);

	out[j] = a[i];
	subsets(a, i + 1, out, j + 1, n, k);
}

int main() {

	int a[1000], out[1000];
	int n, k;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cin >> k;

	subsets(a, 0, out, 0, n, 10);
	for (int i = 0; i < l; ++i)
	{
		for (int j = ans[i].size() - 1; j >= 0; --j)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}















