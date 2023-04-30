#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int n, int no) {
	// sabse pehle rows and cols check karlo, usmei no nahi hona chahiye
	for (int k = 0; k < n; ++k)
	{
		if (mat[i][k] == no || mat[k][j] == no) {
			return false;
		}
	}
	n = sqrt(n);
	// Ab chote box mei check karlo number hai ya nhi hai,
	// if hai toh again nhi rakh skte no ko
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int k = si; k < si + n; ++k)
	{
		for (int l = sj; l < sj + n; ++l)
		{
			if (mat[k][l] == no) {
				return false;
			}
		}
	}

	return true;
}

bool sudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// Print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	// if hum columns ko overshoot kar gaye-->(i+1,0)
	if (j == n) {
		return sudokuSolver(mat, i + 1, 0, n);
	}
	// Agar already cell filled hai toh agle cell par jaao
	if (mat[i][j] != 0) {
		return sudokuSolver(mat, i, j + 1, n);
	}
	// recursive case
	// Do the work for one empty cell
	for (int no = 1; no <= n; ++no)
	{
		// Agar number rakhna safe hai toh rakho
		if (isSafe(mat, i, j, n, no) == true) {
			mat[i][j] = no; // safe hai toh rakh diya
			// Baaki sudoku solve hua toh done hai
			bool kyaBakiHua = sudokuSolver(mat, i, j + 1, n);
			if (kyaBakiHua) {
				return true;
			}
			// nahi hua toh agla number rakhna padega current walo ko hatao
			mat[i][j] = 0; // backtracking
		}
	}

	// 1-n tak koi bhi number nhi rakh paaye toh return false
	return false;
}

int main() {
	int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};


	sudokuSolver(mat, 0, 0, 9);


	return 0;
}
















