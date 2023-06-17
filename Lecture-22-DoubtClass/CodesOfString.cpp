#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<string> v;

void solve(char *a, int i, string s) {
	// base case
	if (a[i] == '\0') {
		v.push_back(s);
		return;
	}
	// recursive case
	int one_digitNo = a[i] - '0';
	char ch = 'a' + one_digitNo - 1;
	solve(a, i + 1, s + ch);

	// Double Digit Work
	if (a[i + 1] != '\0') {
		int dbl_digitNo = (a[i] - '0') * 10 +
		                  (a[i + 1] - '0');
		if (dbl_digitNo <= 26) {
			char ch = 'a' + dbl_digitNo - 1;
			solve(a, i + 2, s + ch);
		}
	}
}

int main() {

	char a[100000];
	cin >> a;
	solve(a, 0, "");
	cout << "[";
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i];
		if (i != v.size() - 1) {
			cout << ", ";
		}
	}
	cout << "]";
	return 0;
}
















