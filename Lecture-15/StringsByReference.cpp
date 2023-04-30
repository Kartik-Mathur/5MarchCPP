#include <iostream>
using namespace std;

void updateString(string &s) {
	for (int i = 0; i < s.size(); ++i)
	{
		s[i]++;
	}
}


int main() {
	string s = "HelloWorld";
	updateString(s);
	cout << s << endl;

	return 0;
}
















