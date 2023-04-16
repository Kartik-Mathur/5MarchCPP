#include <iostream>
using namespace std;
/* Recurrance Relation
isSorted(a, n) {
	bool isChotaSorted = isSorted(a + 1, n - 1);
	if (a[0] <= a[1] and isChotaSorted) {
		return true;
	}
	else {
		return false;
	}
}
*/


bool isSorted(int *a, int n) {
	// base case
	if (n <= 1) {
		return true;
	}

	// recursive case
	bool isChotaSorted = isSorted(a + 1, n - 1);
	if (a[0] <= a[1] and isChotaSorted) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted2(int a[], int n) {
	// base case
	if (n <= 1) {
		return true;
	}

	// recursive case
	bool isChotaSorted = isSorted2(a, n - 1);
	if (a[n - 1] >= a[n - 2] and isChotaSorted) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 7};
	int n = sizeof(a) / sizeof(int);

	bool ans = isSorted2(a, n);
	if (ans) {
		cout << "Sorted\n";
	}
	else {
		cout << "Not Sorted\n";
	}

	return 0;
}
















