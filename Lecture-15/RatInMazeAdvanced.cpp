#include <iostream>
using namespace std;

bool RatInMaze(char maze[][10], int i, int j, int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// print the solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
	// recursive case
	// Pehle right dekhlo
	sol[i][j] = 1;
	if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1) {
		bool kyaRightSeRaastaMilla = RatInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeRaastaMilla) {
			return true;
		}
	}
	// Down dekhlo
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool kyaNeechseSeRaastaMilla = RatInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeechseSeRaastaMilla) {
			return true;
		}
	}

	// left dekhlo
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool kyaPeecheSeRaastaMilla = RatInMaze(maze, i, j - 1, n, m, sol);
		if (kyaPeecheSeRaastaMilla) {
			return true;
		}
	}

	// upwards dekhlo
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool kyaUparSeRaastaMilla = RatInMaze(maze, i - 1, j, n, m, sol);
		if (kyaUparSeRaastaMilla) {
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][10] = {
		"0X0000",
		"0X00X0",
		"0XX0X0",
		"0X00X0",
		"0X0X00",
		"000X00"
	};
	int sol[10][10] = {0};
	RatInMaze(maze, 0, 0, 6, 6, sol);

	return 0;
}
















