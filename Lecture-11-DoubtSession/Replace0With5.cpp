#include <iostream>
using namespace std;

int main() {

	int n, ans = 0;
	cin >> n;

	while (n > 0) {
		int ld = n % 10;
		ans = ans * 10 + ((ld == 0) ? 5 : ld);
		n /= 10;
	}

	int x = 0;
	while (ans > 0) {
		int ld = ans % 10;
		x = x * 10 + ld;
		ans /= 10;
	}

	cout  << x << endl;
	return 0;
}
















