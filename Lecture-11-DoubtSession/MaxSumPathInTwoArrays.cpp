#include <iostream>
using namespace std;
#define ll long long

void solve(ll a[], ll n, ll b[], ll m) {

	ll i = 0, j = 0, sa = 0, sb = 0, ans = 0;
	while (i < n and j < m) {
		if (a[i] < b[j]) {
			sa += a[i++];
		}
		else if (a[i] > b[j]) {
			sb += b[j++];
		}
		else {
			ans += ((sa > sb) ? sa : sb);
			ans += a[i];
			i++;
			j++;
			sa = sb = 0;
		}
	}

	while (i < n) {
		sa += a[i++];
	}
	while (j < m) {
		sb += b[j++];
	}
	ans += ((sa > sb) ? sa : sb);
	cout << ans << endl;
}


int main() {
	int t;
	cin >> t;

	while (t--) {
		ll a[100000], b[100000], n, m;
		cin >> n >> m;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < m; ++i)
		{
			cin >> b[i];
		}
		solve(a, n, b, m);
	}


	return 0;
}
















