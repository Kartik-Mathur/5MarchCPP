#include <iostream>
using namespace std;


int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int), i;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int key;
	cin >> key;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key found at index: " << i;
			break;
		}
	}

	if (i == n) {
		cout << "Key not found";
	}

	cout << endl;

	return 0;
}

















