#include <iostream>
#include <vector>
using namespace std;
#define int long long

int32_t main() {
	int n;
	int t;
	cin >> t;

	while (t--) {
		cin >> n;
		int r[n] = {0};
		r[0] = 1;
		int x, sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			sum += x;
			sum %= n;
			r[sum]++;
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ans += ( (int)r[i] * (int)(r[i] - 1) / 2);
		}
		cout << ans << endl;

	}

	return 0;
}
















