#include <iostream>
using namespace std;

bool check7(int *a, int n) {
	// base case
	if (n == 0) {
		return false;
	}

	// recursive case
	if (a[0] == 7) {
		return true;
	}
	return check7(a + 1, n - 1);
}

/*
	bool choteMeiHai = check7(a + 1, n - 1);
	if (choteMeiHai == true) {
		return true;
	}
	else {
		return false;
	}
	*/

int main() {

	int a[] = {1, 2, 3, 4, 5, 7};
	int n = sizeof(a) / sizeof(int);

	if (check7(a, n)) {
		cout << "Seven Hai\n";
	}
	else {
		cout << "Seven Nahi Hai\n";
	}

	return 0;
}
















