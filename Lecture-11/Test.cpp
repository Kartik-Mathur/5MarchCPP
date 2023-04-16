#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int n = 3, m = 4;

	for (int c = 0; c < m; ++c)
	{
		if (c % 2 == 0) {
			for (int r = 0; r < n; ++r)
			{
				cout << a[r][c] << " ";
			}
		}
		else {
			for (int r = n - 1; r >= 0 ; --r)
			{
				cout << a[r][c] << " ";
			}
		}
	}

	cout << endl;

	return 0;
}
















