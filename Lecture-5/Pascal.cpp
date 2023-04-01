#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; ++row)
	{
		// spaces
		for (int spaces = 1; spaces <= n - row; ++spaces)
		{
			cout << "  ";
		}

		// increasing
		int no = row;
		for (int i = 0; i < row; ++i)
		{
			cout << no++ << " ";
		}

		// decreasing
		no = 2 * row - 2;
		for (int i = 0; i < row - 1; ++i)
		{
			cout << no-- << " ";
		}

		cout << endl;
	}


	// Mirroring
	for (int row = n - 1; row >= 1; --row)
	{
		// spaces
		for (int spaces = 1; spaces <= n - row; ++spaces)
		{
			cout << "  ";
		}

		// increasing
		int no = row;
		for (int i = 0; i < row; ++i)
		{
			cout << no++ << " ";
		}

		// decreasing
		no = 2 * row - 2;
		for (int i = 0; i < row - 1; ++i)
		{
			cout << no-- << " ";
		}

		cout << endl;
	}

	return 0;
}
















