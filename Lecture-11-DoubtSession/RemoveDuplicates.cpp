#include <iostream>
using namespace std;

int main() {

	int a[100000];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << a[0] << " ";
	for (int i = 1; i < n; ++i)
	{
		if (a[i] != a[i - 1]) {
			cout << a[i] << " ";
		}
	}


	return 0;
}
















