#include <iostream>
using namespace std;

int main() {
	// We can only have small latin characters
	char a[] = "abcde";
	char b[] = "edacb";
	int freq[26] = {0};

	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = a[i] - 'a';
		freq[indx]++;
	}

	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = b[i] - 'a';
		freq[indx]--;
	}
	bool permutationHaiKya = true;
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			permutationHaiKya = false;
			break;
		}
	}

	if (permutationHaiKya == true) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	// for (int i = 0; i < 26; ++i)
	// {
	// 	cout << freq[i] << " ";
	// }
	// cout << endl;
	// for (char ch = 'a' ; ch <= 'z' ; ch++) {
	// 	cout << ch << " ";
	// }
	// cout << endl;


	return 0;
}




