#include <iostream>
using namespace std;

int factorial(int n) {
	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans = ans * i;
	}

	return ans;
}

int NCR(int n, int r) {
	int fact_n = factorial(n);
	int fact_r = factorial(r);
	int fact_nr = factorial(n - r);

	int ans = fact_n / (fact_r * fact_nr);
	return ans;
}

int main() {
	int n = 10, r = 2;
	cout << NCR(10, 2) << endl;
	// helloWorld();

	// cin >> n;

	// int ans = factorial(n);

	// cout << ans << endl;

	return 0;
}
















