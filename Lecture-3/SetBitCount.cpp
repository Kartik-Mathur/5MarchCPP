#include <iostream>
using namespace std;

int main() {

	int cnt = 0, rem;
	int n = 15;

	while (n > 0) {
		rem = n % 2;
		if (rem == 1) {
			cnt++;
		}

		n = n / 2;
	}
	cout << "Set Bits: " << cnt << endl;


	return 0;
}
















