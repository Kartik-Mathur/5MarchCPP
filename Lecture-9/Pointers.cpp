#include <iostream>
using namespace std;

int main() {

	// Whenever we create a pointer always initialise it with NULL
	int *p = NULL;

	int a = -10;
	p = &a;

	if (*p > 1) {
		cout << "Take Right\n";
	}
	else {
		cout << "Take Left\n";
	}


	return 0;
}
















