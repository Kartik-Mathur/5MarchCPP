#include <iostream>
using namespace std;

int x = 1000;

int main() {

	cout << x << endl; // 1000

	int x = 10;

	if (x > 0) {
		int x = 100;

		cout << x << endl; // 100
	}
	// Scope Resolution Operator --> ::
	::x = ::x + 1;
	cout << ::x << endl; // 1001


	return 0;
}
















/*
int i;
for (i = 0; i < 10; ++i)
{
	cout << i << " ";
}

cout << "Outside i: " << i << endl;

*/
