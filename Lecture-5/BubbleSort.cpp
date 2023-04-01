#include <iostream>
using namespace std;

int main() {
	// int x, y;

	// cout << (y = (x = 100)) << endl;
	int a[] = {5, 4, 3, 2, 1, 0, 6, 10, -1};
	int n = sizeof(a) / sizeof(int);

	for (int j = 0 ; j < n - 1 ; j++) {
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] > a[i + 1]) {
				// swap a:a[i],b:a[i+1]
				swap(a[i], a[i + 1]);
				// int temp = a[i];
				// a[i] = a[i + 1];
				// a[i + 1] = temp;
			}
		}

	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
















