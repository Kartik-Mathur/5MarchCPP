#include <iostream>
using namespace std;

void sum(int a, int b)
{
	cout << a + b << endl;
}

int sum1(int a, int b) {
	int ans = a + b;

	return ans;
}

int main() {

	sum(10, 20);

	int ans = sum1(20, 31);
	cout << ans << endl;
	if (ans % 2 == 0) {
		cout << "Sum is even\n";
	}
	else {
		cout << "Sum is odd\n";
	}

	return 0;
}
















