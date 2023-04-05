#include <iostream>
using namespace std;

void printTable(int init, int fval, int step) {
	int far = init, c;
	while (far <= fval) {
		cout << far << " ";

		// c = (5 / 9.0) * (far - 32);
		c = (5 * (far - 32)) / 9;

		cout << c << endl;

		far = far + step;
	}
}

int main() {

	printTable(0, 100, 20);
	printTable(0, 200, 40);

	return 0;
}
















