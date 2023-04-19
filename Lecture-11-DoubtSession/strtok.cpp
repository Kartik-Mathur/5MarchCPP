#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[10000] = "Hello world we are learning strings";

	// char a[10000] = "Hello....####...world@@@@#####.......   we#####@@@@ $$$$$are $$$$$$learning strings";

	char *x = strtok(a, " .#$@");
	cout << x << endl;

	// x = strtok(NULL, " .#$@");
	// cout << x << endl;

	while (x != NULL) {
		cout << x << endl;

		x = strtok(NULL, " .#$@");
	}


	return 0;
}
















