#include <iostream>
using namespace std;

int main() {

	// int a[3][3] = {
	int a[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	for (int r = 0; r < 3; ++r)
	{
		for (int c = 0; c < 3; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}


	return 0;
}
















