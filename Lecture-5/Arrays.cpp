#include <iostream>
using namespace std;

int main() {

	int a[50];
	int n;
	cout << "Enter n(max value: 50): ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		// a[i] = i + 1;
		cin >> a[i];
	}
	// a[0] = 1;
	// a[1] = 2;
	// a[2] = 3;
	// a[3] = 4;
	// a[4] = 5;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	// cout << a[0] << endl;
	// cout << a[1] << endl;
	// cout << a[2] << endl;
	// cout << a[3] << endl;
	// cout << a[4] << endl;

	return 0;
}
















