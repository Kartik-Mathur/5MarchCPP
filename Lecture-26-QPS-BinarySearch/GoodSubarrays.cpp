#include <iostream>
#include <vector>
using namespace std;

void print(int *a, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void initialise(int *a, int n, int v) {
	for (int i = 0; i < n; ++i)
	{
		a[i] = v;
	}
}

void goodSubarray(int *a, int n) {
	int *csum = new int[n];
	initialise(csum, n, 0);
	// print(a, n);

	vector<int> r(n, 0);
	r[0] = 1;
	for (int i = 0; i < n; ++i)
	{
		csum[i] = a[i] + ((i - 1) >= 0 ? csum[i - 1] : 0);
		csum[i] %= n;
		r[csum[i]]++;
	}

	// print(csum, n);
	int ans = 0;
	for (int i = 0; i < r.size(); ++i)
	{
		// cout << r[i] << " ";
		ans += (r[i] * (r[i] - 1) / 2);
	}
	// cout << endl;
	cout << ans << endl;
}


int main() {
	int n;
	int t;
	cin >> t;

	while (t--) {
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		goodSubarray(a, n);
	}





	return 0;
}
















