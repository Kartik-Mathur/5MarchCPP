#include <iostream>
using namespace std;

int last7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}

	// recursive case
	if (a[i] != 7) {
		return last7(a, n, i + 1);
	}
	else {
		int aageIndex = last7(a, n, i + 1);
		if (aageIndex == -1) {
			return i;
		}
		else {
			return aageIndex;
		}
	}
}


int main() {

	int a[] = {1, 2, 3, 4, 5, 7, 5, 7, 7, 8, 7, 10};
	int n = sizeof(a) / sizeof(int);
	cout << n << endl;
	cout << last7(a, n, 0) << endl;


	return 0;
}
















