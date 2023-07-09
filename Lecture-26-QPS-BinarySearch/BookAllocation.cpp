#include <iostream>
using namespace std;
#define ll long long

ll n, totalStudents, books[100005];

bool padhPaaye(ll pages) {
	ll currentBacha = 1;
	ll currentPages = 0;

	for (int i = 0; i < n; ++i)
	{
		if (currentPages + books[i] <= pages) {
			currentPages += books[i];
		}
		else {
			currentBacha++;
			currentPages = books[i];
			if (currentBacha > totalStudents) return false;
		}
	}

	return true;
}


ll pages(ll totalPages) {
	ll s = books[n - 1];
	ll e = totalPages;
	ll ans = -1;
	while (s <= e) {
		ll mid = (s + e) / 2;
		if (padhPaaye(mid)) {
			ans = mid;
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}


int main() {

	int t;
	cin >> t;

	while (t--) {
		cin >> n >> totalStudents;
		ll sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> books[i];
			sum += books[i];
		}

		cout << pages(sum) << endl;
	}

	return 0;
}
















