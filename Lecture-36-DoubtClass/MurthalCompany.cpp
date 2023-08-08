#include <iostream>
#include <climits>
using namespace std;
#define int long long

int parathas, n, cookRank[100];

bool isPossible(int time) {
	int totalParathas = 0;

	for (int i = 0; i < n; ++i)
	{
		int r = cookRank[i];
		int currentCookTime = 0;
		int mul = 1;
		while (currentCookTime + r * mul <= time) {
			totalParathas++;
			currentCookTime += r * mul;

			mul++;
		}
	}
	if (totalParathas >= parathas) return true;
	return false;
}

int solve() {
	int s = 0, e = INT_MAX;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;

		if (isPossible(mid)) {
			ans = mid;
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return ans;
}

int32_t main() {

	cin >> parathas >> n;
	for (int i = 0; i < n; ++i) cin >> cookRank[i];

	cout << solve() << endl;




	return 0;
}
















