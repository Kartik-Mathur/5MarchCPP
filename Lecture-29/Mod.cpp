#include <iostream>
using namespace std;

int main() {

	cout << (5 * 5 + 7 * 9) % 3 << endl;

	cout << ( ((5 % 3) * (5 % 3)) % 3 + ((7 % 3) * (9 % 3)) % 3 ) % 3 << endl;

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum = ((sum) % 4 + (a[i]) % 4) % 4;
		sum = sum % 4;
	}
	cout <<  sum  << endl;

	return 0;
}
















