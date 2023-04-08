#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;
	while (s <= e) {

		int m = (s + e) / 2;

		if (a[m] == key) {
			return m;
		}
		else if (key > a[m]) {
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}

	return -1;
}

int main() {

	int a[] = {1, 2, 5, 8, 9};
	int n = sizeof(a) / sizeof(int);
	int key = 8;

	int ans = binarySearch(a, n, key);
	if (ans != -1) {
		cout << "Element found at index: " << ans << endl;
	}
	else {
		cout << "Element Not Found\n";
	}




	return 0;
}
















