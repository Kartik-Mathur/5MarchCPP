#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int sumEven = 0, sumOdd = 0;
		while (n > 0) {
			int ld = n % 10;
			if (ld % 2 == 0) {
				sumEven += ld;
			}
			else {
				sumOdd += ld;
			}
			n /= 10;
		}

		if ((sumEven % 4 == 0) || (sumOdd % 3 == 0)) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}

	}
	return 0;
}
















