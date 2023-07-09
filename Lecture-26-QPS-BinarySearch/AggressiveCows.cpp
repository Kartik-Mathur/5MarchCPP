#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll n, cows, a[100001];

bool placeHui(ll mid) {
	ll pi = 0;
	ll cnt = 1;

	for (int i = 1; i < n; ++i)
	{
		if (a[i] - a[pi] >= mid) {
			pi = i;
			cnt++;
		}

		if (cnt == cows) return true;
	}
	return false;
}

ll aggressiveCows() {
	ll s = 0;
	ll e = 10e9;
	ll ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (placeHui(mid)) {
			s = mid + 1;
			ans = mid;
		}
		else {
			e = mid - 1;
		}
	}

	return ans;
}

int main() {

	int t;
	cin >> t;

	while (t--) {
		cin >> n >> cows;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a, a + n);

		cout << aggressiveCows() << endl;
	}

	return 0;
}
















