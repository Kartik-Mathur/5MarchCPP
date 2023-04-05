#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	for (int j = 0 ; j < n - 1 ; j++) {
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}

	}
}

// void printArray(int a[9], int n) {
void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[9] = {5, 4, 8, 7, 6, 3, 2, 1, 0};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);



	return 0;
}
















