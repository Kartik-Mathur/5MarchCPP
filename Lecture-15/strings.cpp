#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[100] = "Hello";
	string s = "Hello";

	cout << a << endl;
	cout << s << endl;
	// printing the string using loops
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << " ";
	}
	cout << endl;

	// Copying string to another string

	char b[100];
	strcpy(b, a);
	// b = a; // Not allowed
	cout << b << endl;

	string s1 = s;
	cout << s1 << endl;

	// concatenate strings
	char c[1000] = "Learning";
	// c = c + b;(Not allowed) // LearningHello
	strcat(c, b); // LearningHello
	cout << c << endl;

	string s2 = "Learning";
	s2 += s1;
	cout << s2 << endl;

	return 0;
}
















