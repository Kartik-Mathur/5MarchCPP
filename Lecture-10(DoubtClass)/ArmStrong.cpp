#include <iostream>
using namespace std;

int digitCount(int n) {
	int ans = 0;
	while (n > 0) {
		ans ++;
		n = n / 10;
	}
	return ans;
}

int calculatePower(int a, int b) {
	int ans = 1;
	for (int i = 0; i < b; ++i)
	{
		ans = ans * a;
	}
	return ans;
}

int sumOfDigitsPower(int n, int p) {
	int ans = 0;
	while (n > 0) {
		int cd = n % 10;

		ans = ans + calculatePower(cd, p);

		n = n / 10;
	}
	return ans;
}

bool isArmstrong(int n) {
	int digitCnt = digitCount(n);
	int powerSum = sumOfDigitsPower(n, digitCnt);
	if (n == powerSum) {
		return true;
	}
	else {
		return false;
	}
}

int main() {


	int n;
	cin >> n;

	if (isArmstrong(n) == true) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}

	return 0;
}
















