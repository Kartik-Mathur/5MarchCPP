#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 3, 2, 0, 5, -1, 9, 6};
	int n = sizeof(a) / sizeof(int);

	for (int pos = 0; pos < n - 1; ++pos)
	{
		int m = pos;
		for (int i = pos + 1; i < n; ++i)
		{
			if (a[i] < a[m]) {
				m = i;
			}
		}
		swap(a[m], a[pos]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















