#include <iostream>
using namespace std;

void printArray(char*a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << "-";
	}
	cout << endl;
}

void readAString(char *a, int max_size, char delimiter = '\n') {
	char ch = cin.get();
	int i = 0;
	while (ch != delimiter and i < max_size - 1) {
		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';
}

int main() {

	char a[100];
	int x;
	cin >> x;
	cin.get();
	readAString(a, 100, '.');
	// printArray(a);
	cout << "Number :" << x << endl;
	cout << "String :" << a << endl;

	return 0;
}
















