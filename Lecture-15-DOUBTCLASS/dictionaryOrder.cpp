#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

string ans[1000];
int l = 0;

void permutations(char *a, int i) {
	// base case
	if (a[i] == '\0') {
		// cout << a << endl;
		ans[l++] = a;
		return;
	}

	// recursive case
	for (int j = i; a[j] != '\0' ; ++j)
	{
		swap(a[i], a[j]);
		permutations(a, i + 1);
		swap(a[i], a[j]); // backtrack
	}
}

bool meraCompare(string a, string b) {
	return a < b;
}

int main() {

	char a[12];

	cin >> a;

	string original = a;

	sort(a, a + strlen(a));
	// cout << a << endl;
	// string s = "";

	permutations(a, 0);
	sort(ans, ans + l, meraCompare);

	for (int i = 0; i < l; ++i)
	{
		if (ans[i] > original) {
			cout << ans[i] << " ";
		}
	}
	cout << endl;


	return 0;
}
















