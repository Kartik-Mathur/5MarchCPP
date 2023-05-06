#include <iostream>
using namespace std;

int* createArray(int n) {
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}
	return arr;
}

void print(int *a, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int *x = createArray(10);
	print(x, 10);

	delete[] x;
	x = NULL;

	for (int i = 0; i < 10; ++i)
	{
		cout << x[i] << " ";
	}
	cout << endl;

	return 0;
}
















