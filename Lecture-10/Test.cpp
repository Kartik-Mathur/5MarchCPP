#include <iostream>
using namespace std;

void reverseString(char *a) {
	int n = strlen(a);
	int s = 0, e = n - 1;

	while (s < e) {
		swap(a[s], a[e]);
		s++;
		e--;
	}
}

int main() {

	char a[] = "abcde";

	cout << a << endl;
	reverseString(a);
	cout << a << endl;




	return 0;
}
















