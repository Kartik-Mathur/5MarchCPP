#include <iostream>
using namespace std;

void printHello();
// void add(int x, int y);
void add(int, int);

// void printHello() : Function Declaration
// void printHello() {
// 	cout << "Hello World!!\n";
// }

// Function definition

// Addition
// void add(int x, int y) {
// 	cout << x + y << endl;
// }

int main() {

	printHello(); // Function calling/Invoking

	int a = 10, b = 20;
	add(a, b);
	add(50, 60);



	return 0;
}

void printHello() {
	cout << "Hello World!!\n";
}


void add(int x, int y) {
	cout << x + y << endl;
}











