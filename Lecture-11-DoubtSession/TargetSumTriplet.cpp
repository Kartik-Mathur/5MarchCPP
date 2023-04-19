#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int a[10000], sum;
	int n;
	cin >> n;



	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cin >> sum;

	// SORTING KA ASAAN TAREEKA
	sort(a, a + n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				if ((a[i] + a[k] + a[j]) == sum) {
					cout << a[i] << ", " << a[j] << " and " << a[k] << endl;
				}
			}
		}
	}

	return 0;
}
















