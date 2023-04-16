#include <iostream>
using namespace std;

void spiralPrint(int a[][30], int n, int m) {

	int sr = 0, er = n - 1, sc = 0, ec = m - 1;
	while (sr <= er and sc <= ec) {
		// 1. Print sr, [sc->ec], sr++
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[sr][col] << " ";
		}
		sr++;

		// 2. Print ec, [sr->er], ec--
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << " ";
		}
		ec--;

		// 3. Print er, [ec->sc], er--
		if (sr < er) {
			for (int col = ec; col >= sc; --col)
			{
				cout << a[er][col] << " ";
			}
			er--;
		}
		// 4. Print sc, [er->sr], sc++
		if (sc < ec) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}
	cout << endl;
}

int main() {

	int a[10][30];
	int n, m;
	cin >> n >> m;
	int number = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	spiralPrint(a, n, m);


	return 0;
}
















