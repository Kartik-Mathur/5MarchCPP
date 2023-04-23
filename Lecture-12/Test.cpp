#include <iostream>
using namespace std;

void printDec(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursion case

	cout << n << " ";
	printDec(n - 1);
}


void printInc(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursion case
	printInc(n - 1);
	cout << n << " ";

}

int main() {

	int n;
	cin >> n;

	printDec(n);
	cout << endl;
	printInc(n);
	cout << endl;

	return 0;
}
















