#include <iostream>
#include <cmath>
using namespace std;
#define int long long

int countDigits(int n) {
	int cnt = 0;
	while (n > 0) {
		cnt++;
		n = n / 10;
	}
	return cnt;
}

int combine(int x, int y) {
	int digitsOfy = countDigits(y);
	int ans = x * pow(10, digitsOfy) + y;
	return ans;
}

void solve(int arr[], int n) {

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			int a = arr[j];
			int b = arr[j + 1];
			int ab = combine(a, b);
			int ba = combine(b, a);
			if (ab > ba) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		cout << arr[i];
	}
	cout << endl;
}

int32_t main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;

		int a[100000];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		solve(a, n);
	}

	return 0;
}
















