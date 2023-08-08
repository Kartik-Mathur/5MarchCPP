#include <iostream>
#include <cstring>
using namespace std;

// int reverseInt(int a) {
// 	int ans  = 0;
// 	while (a) {
// 		ans = ans * 10 + a % 10;
// 		a /= 10;
// 	}

// 	return ans;
// }

// bool compare(int a, int b) {
// 	int x = reverseInt(a);
// 	int x = reverseInt(b);
// }


int main() {

	// 0joyeta
	// joyeta


	string s[1900] = {
		"10",
		"100",
		"1",
		"200",
		"9",
		"90",
		"4230",
		"0",
	};
	int n = 8;
	// int n;
	// cin >> n;
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> s[i];
	// }

	sort(s, s + n);

	for (int i = 0; i < n; ++i)
	{
		cout << s[i] << "  ";
	}
	cout << endl;



	// 4443234 9
	// 1, 10, 2, 21, 9
	// 0
	// 1, 10, 11, 12, 13, 14 ..... 19
	// 2, 20, 21, 22, ....... 29
	// 3, 30, 31, 32  ........


	// int n = sizeof(a) / sizeof(int);

	// sort(a, a + n, compare);

	return 0;
}
















