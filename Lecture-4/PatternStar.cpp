#include <iostream>
using namespace std;

int main() {

	int n, stars, row;
	cin >> n;

	for (row = 1; row <= n; ++row)
	{
		// 1. Print row times '*'
		for (stars = 0; stars < row; ++stars)
		{
			cout << '*';
		}

		// 2. print ' '
		cout  << " ";

		// 3. Print N-row+1 times '*'
		for (stars = 0; stars < n - row + 1; ++stars)
		{
			cout << '*';
		}

		// 4. Print ' '
		cout  << " ";

		// 5. Print N-row+1 times '*'
		for (stars = 0; stars < n - row + 1; ++stars)
		{
			cout << '*';
		}

		// 6. Print ' '
		cout  << " ";

		// 7. Print row times '*'
		for (stars = 0; stars < row; ++stars)
		{
			cout << '*';
		}


		cout << endl;
	}

	return 0;
}
















