#include <iostream>
using namespace std;
#define int long long

int32_t main() {

	int len;

	cin >> len;

	int ans = 0;

	ans += 2 * len;
	ans += (len * (len - 1)) / 2;
	ans += (len - 1) * len;
	ans += len * (len - 1) * (len - 2) / 2;
	ans += 1;
	cout << ans << endl;

	return 0;
}
