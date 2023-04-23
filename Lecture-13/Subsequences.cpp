#include <iostream>
using namespace std;

void subsequences(char *in, char *out, int i, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	// recursive case
	// 1. Ignore the ith character
	subsequences(in, out, i + 1, j);
	//  2. prefix the ith character
	out[j] = in[i];
	subsequences(in, out, i + 1, j + 1);
}

int main() {

	char a[] = "abc";
	char output[100];

	subsequences(a, output, 0, 0);



	return 0;
}
















