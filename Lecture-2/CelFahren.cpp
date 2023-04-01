#include <iostream>
using namespace std;

int main() {

	int init, fval, step, c;
	cin >> init >> fval >> step;

	int far = init;
	while (far <= fval) {
		cout << far << " ";

		// c = (5 / 9.0) * (far - 32);
		c = (5 * (far - 32)) / 9;

		cout << c << endl;

		far = far + step;
	}

	return 0;
}
















