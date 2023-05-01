#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string original;
void dictionary(string s, string x) {
	// base case
	if (x.size() == 0) {
		if (s > original) {
			cout << s << endl;
		}
		return;
	}

	// recursive case
	for (int i = 0; i < x.size(); ++i)
	{

		dictionary(s + x[i],
		           x.substr(0, i) + x.substr(i + 1));
	}
}

int main() {

	string s = "";
	string x = "cab";
	// cin >> x;
	original = x;

	sort(x.begin(), x.end());
	// cout << x << endl;
	dictionary(s, x);
	// cin >> x;
	// int indx = 2;

	// cout << s.substr(0, indx) << endl;
	// cout << s.substr(indx + 1) << endl;
	// cout << s.substr(0, indx) + s.substr(indx + 1) << endl;
	// cout << s << endl;





	return 0;
}










