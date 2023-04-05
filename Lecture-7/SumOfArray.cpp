#include <iostream>
using namespace std;

int arraySum(int a[], int n) {
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum = sum + a[i];
	}
	return sum;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int sum = arraySum(a, n);
	cout << "Sum: " << sum << endl;

	return 0;
}
















