#include <iostream>
using namespace std;

void revereString(char *a, int i, int j) {
	if (i >= j) {
		return;
	}

	swap(a[i], a[j]);
	revereString(a, i + 1, j - 1);
}

int main() {
	char a[10000] = "Hello world we are learning strings";

	// Output: olleH dlrow ew era gninrael sgnirts
	char *x = strtok(a, " ");
	while (x != NULL) {
		revereString(x, 0, strlen(x) - 1);
		cout << x << " ";
		x = strtok(NULL, " ");
	}

	return 0;
}
















