#include <iostream>
using namespace std;

int main() {

	int n, i, j;
	cin >> n;


	for (i = 2 ; i <= n ; i++) {
		// cout << i << " ";
		// Print karna i ko only if it is prime
		// otherwise ignore kardo i ko
		// Lets assume that every i is prime initially
		bool i_isPrime = true;

		// Agar i prime nahi hai, toh i_isPrime ko false kardo
		for (j = 2 ; j < i ; j++) {
			if (i % j == 0) {
				i_isPrime = false;
				break;
			}
		}

		if (i_isPrime) {
			cout << i << " ";
		}
	}

	cout << endl;


	return 0;
}
















