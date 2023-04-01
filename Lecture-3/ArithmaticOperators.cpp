#include <iostream>
using namespace std;

int main() {

	int a = 1;
	cout << a++ << endl; // 1
	cout << ++a << endl; // 3

	// a = 3
	int x  = 100;
	int y = --x;

	int z = (a++) + (++a);
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "z : " << z << endl;

	return 0;
}
















