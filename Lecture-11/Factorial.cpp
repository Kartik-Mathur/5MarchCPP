#include <iostream>
using namespace std;

// int fact(int n) {
// 	// base case
// 	if (n == 0) {
// 		return 1;
// 	}

// 	// recurrance relation: fact(n) = n*fact(n-1)
// 	// Choti Problem ko solve krwana hai recursion se
// 	int chotaAns = fact(n - 1); // Pure Assumption hai ki answer aise mil jaega
// 	// Badi Problem ka answer calculate krlo
// 	int ans = n * chotaAns;
// 	return ans;
// }

int fact(int n) {
	if (n == 0) {
		return 1;
	}

	return n * fact(n - 1);
}

int main() {

	int n;
	cin >> n;
	cout << fact(n) << endl;

	return 0;
}
















