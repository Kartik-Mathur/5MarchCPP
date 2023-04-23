#include <iostream>
using namespace std;

int first7(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}
	// recursive case
	if (a[0] == 7) {
		return 0;
	}

	int choteMeiIndex = first7(a + 1, n - 1);
	if (choteMeiIndex == -1) {
		return -1;
	}
	else {
		return choteMeiIndex + 1;
	}
}

int pehla7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		return i;
	}

	return pehla7(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 3, 17, 71, 4, 17, 5};
	int n = sizeof(a) / sizeof(int);

	cout << first7(a, n) << endl;
	cout << pehla7(a, n, 0) << endl;


	return 0;
}
















