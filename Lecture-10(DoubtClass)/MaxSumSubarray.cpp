#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, -3, 6, 3, -5, 8};
	int n = sizeof(a) / sizeof(int);
	int ps[10000];

	// Prefix sum
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
		ps[i] = ans;
	}

	int largest_sum = INT_MIN, s, e;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = 0;
			sum = ps[j] - ( (i - 1 >= 0) ? ps[i - 1] : 0 );
			// cout << ", SUM: " << sum;
			if (sum > largest_sum) {
				largest_sum = sum;
				s = i;
				e = j;
			}
			// cout << endl;
		}
	}

	cout << "Largest subarray sum: " << largest_sum << endl;
	for (int i = s; i <= e; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















