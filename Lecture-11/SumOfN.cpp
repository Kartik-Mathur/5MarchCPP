#include <iostream>
using namespace std;

int sum(int n) {
	// base case
	if (n == 1) {
		return 1;
	}
	// recurrance relation, sum(n) = n + sum(n-1);
	int chotaAns = sum(n - 1); // Assumption
	int badaAns = n + chotaAns;
	return badaAns;
}

int sum(int n) {
	if (n == 1) {
		return 1;
	}

	return n + sum(n - 1);
}


int main() {

	int n;
	cin >> n;
	cout << sum(n) << endl;

	return 0;
}
















