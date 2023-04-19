#include <iostream>
using namespace std;
/*
bool incAndDec() {
	int pe, ce, n;
	cin >> n;
	cin >> pe;
	bool dec = true, inc = false;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> ce;
		if (dec == true and inc == false) {
			if (ce < pe) {
				pe = ce;
				continue;
			}
			else if (ce == pe) {
				return false;
			}
			else {
				inc = true;
				dec = false;
			}
		}
		else {
			if (ce > pe) {
				pe = ce;
				continue;
			}
			else if (ce <= pe) {
				return false;
			}
		}
	}

	return true;
}
*/

bool incAndDec() {
	int pe, ce, n;
	cin >> n;
	cin >> pe;
	bool dec = true;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> ce;
		if (ce == pe) {
			return false;
		}

		if (dec == true) {
			if (ce < pe) {
				pe = ce;
				continue;
			}
			else {
				dec = false;
			}
		}
		else {
			if (ce > pe) {
				pe = ce;
				continue;
			}
			return false;
		}
	}

	return true;
}

int main() {


	bool ans = incAndDec();
	if (ans) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}

	return 0;
}
















