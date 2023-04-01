#include <iostream>
using namespace std;

// #define MACRO_NAME MACRO_VALUE
#define PI 3.14+1
#define PRINT cout<<
#define NEWLINE endl

int main() {

	int r = 1;

	// PI = 3.14;

	PRINT 2 * PI * r << NEWLINE ;

	const float pi = 3.14 + 1;

	cout << "Using const wala variable : " << 2 * pi * r << endl;


	return 0;
}
















