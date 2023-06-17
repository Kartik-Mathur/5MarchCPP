#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string &s, int i, int j) {
	while (i < j) {
		if (s[i++] != s[j--])return false;
	}
	return true;
}

bool solve(string s) {

	if (isPalindrome(s, 0, s.size() - 1))
		return true;
	int n = s.size();
	if (n == 0 || n == 1) return true;

	for (int i = 0; i < n / 2; ++i)
	{
		int j = n - 1 - i;
		if (s[i] != s[j]) {
			return (isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1));
		}
	}
	return true;
}

int main() {

	string s;
	cin >> s;

	if (solve(s)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}

	return 0;
}
















