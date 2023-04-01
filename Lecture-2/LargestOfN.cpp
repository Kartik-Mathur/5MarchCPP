#include <iostream>
#include <climits> // INT_MAX: 2^31 - 1, INT_MIN: -2^31
using namespace std;

int main() {

	int n, no;
	cin >> n;

	int i = 1, lar = INT_MIN;
	while (i <= n) {

		cin >> no;

		if (no > lar) {
			lar = no;
		}

		i = i + 1;
	}
	cout << "Largest Number: " << lar << endl;

	return 0;
}
















