#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		// cout << a[i] << " "; // a[i] == *(a+i)
		cout << *(a + i) << " ";
	}
	cout << endl;
}

// void bubbleSort(int a[], int n) {
void bubbleSort(int *a, int n) {
	// a[i] == *(a+i)
	// a[j] == *(a+j)
	cout << "Inside bubbleSort sizeof(a) " << sizeof(a) << endl;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (*(a + j) > *(a + j + 1)) { // a[j+1] == *(a+j+1)
				swap(*(a + j), *(a + j + 1));
			}
		}
	}
}

int main() {

	int a[] = {6, 5, 4, 3, 2, 1};
	int b[] = {1, 2, 3, 4, 5};

	// a = b; Not allowed
	int *p = a;
	printArray(p, 6);

	p = b;
	printArray(p, 5);

	int n = sizeof(a) / sizeof(int);
	cout << "Inside Main sizeof(a) " << sizeof(a) << endl;

	// cout << a << endl;
	// cout << &a[0] << endl;

	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);

	return 0;
}
















