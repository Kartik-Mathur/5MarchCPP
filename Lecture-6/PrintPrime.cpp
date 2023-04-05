#include <iostream>
using namespace std;

void checkPrime(int n) {
	int j;
	bool n_isPrime = true;

	// Agar i prime nahi hai, toh i_isPrime ko false kardo
	for (j = 2 ; j < n ; j++) {
		if (n % j == 0) {
			n_isPrime = false;
			break;
		}
	}

	if (n_isPrime) {
		cout << n << " ";
	}
}

int main() {

	checkPrime(110);
	checkPrime(13);

	return 0;
}
















