// PrintReverse.cpp
#include <iostream>
using namespace std;

int main() {

	// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// int n = sizeof(a) / sizeof(int);

	int a[100];
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << endl;
	}
	cout << endl;

	return 0;
}
















