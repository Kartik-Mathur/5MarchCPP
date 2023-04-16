#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	int chotaAns1 = fibo(n - 1);
	int chotaAns2 = fibo(n - 2);
	int badaAns = chotaAns1 + chotaAns2;
	return badaAns;
}


int main() {

	int n;
	cin >> n;

	cout << fibo(n) << endl;

	return 0;
}
















