#include <iostream>
using namespace std;

int main() {

	int i, n;
	cin >> n;

	for (i = 2; i <= n - 1; ++i) {
		// Work
		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0;
		}
	}

	cout << "Prime\n";


	return 0;
}
















