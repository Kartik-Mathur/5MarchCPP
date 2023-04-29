#include <iostream>
using namespace std;

int nStairs(int n) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	return  nStairs(n - 1) + nStairs(n - 2) + nStairs(n - 3);
}

int StairWays(int n, int k) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += StairWays(n - i, k);
	}
	return ans;
}

int main() {

	cout << nStairs(7) << endl;
	cout << StairWays(7, 3) << endl;

	return 0;
}
















