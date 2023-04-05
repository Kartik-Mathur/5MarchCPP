#include <iostream>
using namespace std;

void numberSwapKaro(int &x, int &y) {
	swap(x, y);
}

int main() {

	int a = 10, b = 20;

	cout << "a: " << a << ", " << "b: " << b << endl;
	numberSwapKaro(a, b);
	cout << "a: " << a << ", " << "b: " << b << endl;


	return 0;
}
















