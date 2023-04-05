#include <iostream>
using namespace std;

void mergeSortedArrays(int a[],
                       int n, int b[], int m) {
	int k = m + n - 1;
	int i = n - 1;
	int j = m - 1;
	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			b[k] = a[i];
			k--;
			i--;
		}
		else {
			b[k] = b[j];
			k--;
			j--;
		}
	}

	while (j >= 0) {
		b[k] = b[j];
		k--;
		j--;
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[8] = {3, 5, 8};
	int n = 3;

	int b[5] = {1, 2, 6, 7, 9};
	int m = 5;


	mergeSortedArrays(a, n, b, m);
	printArray(b, m + n);


	return 0;
}
















