// PatternStars.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int row, i, number;
	number = 1;
	row = 1;

	while (row <= n) {
		// Work
		i = 1;
		while (i <= row) {
			cout << number << " ";
			number = number + 1;
			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















