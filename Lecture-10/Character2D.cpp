#include <iostream>
using namespace std;

int main() {

	// a[0] : Represents the starting address of 0th row
	// a[1] : Represents the starting address of 1st row
	// a[2] : Represents the starting address of 2nd row
	char a[][3] = {
		{'A', 'B', '\0'},
		{'C', 'D', '\0'},
		{'E', 'F', '\0'}
	};

	// char a[][10] = {
	// 	"Ritik",
	// 	"Krishna",
	// 	"Ayush",
	// 	"Aaryan"
	// };

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	// cout << a[3] << endl;



	return 0;
}





