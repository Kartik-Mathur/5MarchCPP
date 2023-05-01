#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string a[], int n, int i, int j) {
	// base case
	if (i == n - 1) {
		return ;
	}

	// recursive case
	if (j == n - 1) {
		bubbleSort(a, n, i + 1, 0);
	}
	else {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		bubbleSort(a, n, i, j + 1);
	}
}
int main() {

	string a[10000];
	int n;
	cin >> n;
	// n = 10;

	for (int i = 0; i <= n; ++i)
	{
		a[i] = to_string(i);
	}

	bubbleSort(a, n + 1, 0, 0);
	for (int i = 0; i <= n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















