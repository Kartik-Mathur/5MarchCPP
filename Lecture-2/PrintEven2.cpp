#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;
	while (i <= n) {

		if (i % 2 == 0) {
			cout << i << " ";
		}

		i = i + 1;
	}
	cout << endl;
	return 0;
}
















