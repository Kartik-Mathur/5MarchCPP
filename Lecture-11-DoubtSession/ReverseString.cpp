#include <iostream>
#include <cstring>
using namespace std;

void revereString(char *a, int i, int j) {
	if (i >= j) {
		return;
	}

	swap(a[i], a[j]);
	revereString(a, i + 1, j - 1);
}

int main() {

	char a[10000];
	cin.getline(a, 10000);

	int i = 0, j = strlen(a) - 1;

	revereString(a, i, j);
	cout << a << endl;

	return 0;
}
















