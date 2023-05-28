#include <iostream>
#include <vector>
using namespace std;

#define vvi(x,rows,cols) vector< vector<int> > x(rows, vector<int>(cols))

int main() {
	int rows, cols;
	cin >> rows >> cols;

	// vector< vector<int> > v(rows, vector<int>(cols));
	vvi(v, rows, cols);
	vvi(a, rows, cols);

	int number = 1;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			v[i][j] = number++;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout  << endl;
	}

	return 0;
}
















