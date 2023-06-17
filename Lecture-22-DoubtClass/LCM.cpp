#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a == 0) return b;
	if (b == 0) return a;

	return gcd(b % a, a);
}

int main() {

	int a, b;
	cin >> a >> b;

	int x = gcd(a, b);
	int lcm = (a * b) / x;
	cout << lcm << endl;

	return 0;
}
















