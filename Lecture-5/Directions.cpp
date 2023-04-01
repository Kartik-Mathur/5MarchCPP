#include <iostream>
#include <cmath>
using namespace std;

int main() {

	// SSSNEEEW
	char ch;
	ch = cin.get();
	int x = 0, y = 0;
	while (ch != '\n') {
		if (ch == 'N') {
			y++;
		}
		else if (ch == 'S') {
			y--;
		}
		else if (ch == 'E') {
			x++;
		}
		else {
			x--;
		}

		ch = cin.get();
	}

	// if (x >= 0 && y >= 0) {
	if (x >= 0 and y >= 0) {
		for (int i = 0; i < x; ++i)
		{
			cout << "E";
		}

		for (int i = 0; i < y; ++i)
		{
			cout << "N";
		}
	}
	else if (x <= 0 and y >= 0) {
		x = x * -1; // x = abs(x);
		for (int i = 0; i < y; ++i)
		{
			cout << "N";
		}

		for (int i = 0; i < x; ++i)
		{
			cout << "W";
		}
	}
	else if (x <= 0 and y <= 0) {
		x = x * -1;
		y = y * -1;

		for (int i = 0; i < y; ++i)
		{
			cout << "S";
		}

		for (int i = 0; i < x; ++i)
		{
			cout << "W";
		}
	}
	else { // x >=0 and y<=0
		y = y * -1;
		for (int i = 0; i < x; ++i)
		{
			cout << "E";
		}

		for (int i = 0; i < y; ++i)
		{
			cout << "S";
		}
	}


	return 0;
}
















