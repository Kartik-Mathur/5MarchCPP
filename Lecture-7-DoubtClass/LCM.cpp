#include <iostream>
using namespace std;

int main() {

	int no1, no2;
	cin >> no1 >> no2;

	int chotaNumber = min(no1, no2);
	int hcf = -1;
	for (int factor = 1; factor <= chotaNumber; ++factor)
	{
		if ((no1 % factor == 0) and (no2 % factor == 0) ) {
			hcf = factor;
		}
	}

	int lcm = (no1 * no2) / hcf;
	cout << lcm << endl;

	return 0;
}
















