#include <iostream>
using namespace std;

int main() {

	// int a[5] = {1, 2, 3, 4, 5};
	int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);

	cout << "n: " << n << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















