#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, -10, 5, 4, 3};
	int n = sizeof(a) / sizeof(int);

	int sum = 0;
	int ans = 0;
	int total_sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		total_sum += a[i];
		if (sum < 0) {
			sum = 0;
		}
		ans = max(ans, sum);
	}

	// Original array reverse sign of it
	for (int i = 0; i < n; ++i)
	{
		a[i] = -1 * a[i];
	}

	sum = 0;
	int ans1 = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		if (sum < 0) {
			sum = 0;
		}
		ans1 = max(ans1, sum);
	}
	// cout << ans1 << endl;

	int doosraPossibleAns = total_sum - (-1 * ans1);

	cout << max(doosraPossibleAns, ans) << endl;


	return 0;
}
















