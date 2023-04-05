#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 1, 2, 0};
	int n = sizeof(a) / sizeof(int), j;
	for (int i = 1; i < n; ++i)
	{
		int hpc = a[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (hpc < a[j]) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}
		a[j + 1] = hpc;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















