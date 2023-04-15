#include <iostream>
using namespace std;

int main() {

	int a[1000][1000];
	int n, m;
	cout << "Enter n and m\n";
	cin >> n >> m;
	int number = 1;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			// cin >> a[r][c];
			a[r][c] = number ++;
		}
	}

	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}

	return 0;
}
















