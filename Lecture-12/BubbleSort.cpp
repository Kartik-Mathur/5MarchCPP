#include <iostream>
using namespace std;

// void bubbleSort(int *a, int n, int i) {
// 	// base case
// 	if (i == n - 1) {
// 		return ;
// 	}

// 	// recursive case
// 	for (int j = 0; j < n - 1; ++j)
// 	{
// 		if (a[j] > a[j + 1]) {
// 			swap(a[j], a[j + 1]);
// 		}
// 	}
// 	bubbleSort(a, n, i + 1);
// }

void bubbleSort(int *a, int n, int i, int j) {
	// base case
	if (i == n - 1) {
		return ;
	}

	// recursive case
	if (j == n - 1) {
		bubbleSort(a, n, i + 1, 0);
	}
	else {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		bubbleSort(a, n, i, j + 1);
	}
}
int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort(a, n, 0, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















