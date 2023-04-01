/*
	To check prime --> n
	[2,n-1] agar n kisi se bhi divide ho gaya toh prime
	nahi hoga
	if kisi se divide nahi hua toh prime hoga
*/
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0;
		}

		i = i + 1;
	}
	cout << "Prime\n";


	return 0;
}
















