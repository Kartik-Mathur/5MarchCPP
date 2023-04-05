#include <iostream>
using namespace std;

int sumOfDigits(int n) {
	int sum = 0;
	while (n > 0) {
		int ld = n % 10;
		sum = sum + ld;
		n = n / 10;
	}
	return sum;
}

int findFactorsSum(int no) {
	int sumOfFactors = 0;
	for (int factor = 2; factor <= no; ++factor)
	{
		while (no % factor == 0) {
			sumOfFactors = sumOfFactors + sumOfDigits(factor);
			no = no / factor;
		}
	}
	return sumOfFactors;
}

int main()

int n;
cin >> n;

int digitSum = sumOfDigits(n);
int primeFactorsSum = findFactorsSum(n);

if (digitSum == primeFactorsSum) {
	cout << "1\n";
}
else {
	cout << "0\n";
}

return 0;
}
















