#include <iostream>
using namespace std;
int main() {
	int n, i, j;
	cin >> n;
	for (i = 1 ; i < (n + 1) / 2 ; ++i ) {
		if (i == 1) {
			for (j = 1; j <= n ; ++j) {
				if (1 < j and j < (n + 1) / 2) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
		}
		else {
			for (j = 1; j <= n; j++) {
				if (j == 1 || j == (n + 1) / 2) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}

		}
		cout << endl;
	}

	if (i == (n + 1) / 2) {
		for (j = 1; j <= n; ++j) {
			cout << "*";
		}
		cout << endl;
		i++;
	}

	for (i = ((n + 1) / 2) + 1 ; i <= n ; ++i ) {
		if (i == n) {
			for (j = n; j > 0 ; --j) {
				if (j == n || j == 1) {
					cout << "*";
				}
				else if ((n + 1) / 2 <= j and j < n) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		else {
			for (j = 1; j <= n; j++) {
				if (j == n || j == (n + 1) / 2) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}

		}
		cout << endl;
	}

	return 0;
}

