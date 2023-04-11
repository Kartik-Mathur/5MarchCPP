#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *a) {
	int i = 0;
	int j = strlen(a) - 1;

	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {

	char a[] = "madam";
	// if (isPalindrome(a) == true) {
	if (isPalindrome(a)) {
		cout << "Pallindrome hai\n";
	}
	else {
		cout << "Pallindrome Nahi hai\n";
	}



	return 0;
}
















