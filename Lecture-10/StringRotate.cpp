#include <iostream>
using namespace std;

void rotateString(char *a, int n) {
	int len = strlen(a);
	n %= len; // n = n % len;
	// 1. Har character ko n times aage shift karo
	// taaki shuru mei n buckets empty ho paaye
	int i = len;
	while (i >= 0) {
		a[i + n] = a[i];
		i--;
	}

	// 2. Bring the last n characters at front
	i = 0;
	int j = len;
	while (i < n) {
		a[i] = a[j];
		i++;
		j++;
	}

	// 3. Add Null character at len position
	a[len] = '\0';
}

int main() {

	char a[10000];
	cin.getline(a, 10000);
	int n = 5;

	cout << a << endl;
	rotateString(a, n);
	cout << a << endl;

	return 0;
}
















