#include <iostream>
using namespace std;

int main() {
	char a[100];
	int x;

	cin >> x;
	cin.get();
	cin.getline(a, 100, '.');

	cout << "Number :" << x << endl;
	cout << "String :" << a << endl;


	return 0;
}
















