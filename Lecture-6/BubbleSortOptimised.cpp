#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1, 0, 6};
	int n = sizeof(a) / sizeof(int);

	for (int j = 0 ; j < n - 1 ; j++) {
		for (int i = 0; i < n - 1 - j; ++i)
		{
			if (a[i] < a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
















