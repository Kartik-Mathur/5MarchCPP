#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int cnt = 0;
void subsequence(char *in, int i, char *out, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << " ";
		cnt ++;
		return ;
	}
	// recursive case
	// ith character ko chhod do
	subsequence(in, i + 1, out, j);

	// ek baari ith character ko lelo
	out[j] = in[i];
	subsequence(in, i + 1, out, j + 1);

	// ek baari ith character ke ascii code ko lelo
	int asciiVal = in[i];
	string a = to_string(asciiVal);

	int k;
	for (k = 0; k < a.size(); ++k)
	{
		out[j + k] = a[k];
	}

	subsequence(in, i + 1, out, j + a.size());
}

int main() {
	char a[10000];
	cin >> a;
	char out[1000];
	subsequence(a, 0, out, 0);
	cout << endl << cnt << endl;

	return 0;
}
















