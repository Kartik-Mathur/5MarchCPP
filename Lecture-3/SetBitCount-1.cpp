#include <iostream>
using namespace std;

int main() {

	int n = -255;
	int cnt = 0;
	if (n < 0) {
		n = n * -1;
	}
	while (n != 0) {
		if ((n & 1) == 1) {
			cnt++;
		}

		n = n >> 1;
	}
	cout << "Set Bits: " << cnt << endl;

	return 0;
}
















