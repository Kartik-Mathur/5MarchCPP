#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, -10, 6, 8, -18, 5, 4, -3, 9, -5};
	int n = sizeof(a) / sizeof(int);

	int sum = 0;
	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		if (sum < 0) {
			sum = 0;
		}
		ans = max(ans, sum);
	}

	cout << "Max sum: " << ans << endl;

	return 0;
}

















