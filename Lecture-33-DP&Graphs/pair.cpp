#include <iostream>
using namespace std;

int main() {

	pair<int, float> p;
	p.first = 1;
	p.second = 20.11;

	cout << p.first << ", " << p.second << endl;

	pair<int, pair<float, string> > p1;
	p1.first = 100;
	p1.second.first = 1201.11;
	p1.second.second = "Hello";

	cout << p1.first << ", " << p1.second.first << ", " << p1.second.second << endl;

	pair<int, float> p2  = {10, 30.1};
	cout << p2.first << ", " << p2.second << endl;

	pair<int, float> p3  = make_pair(10, 32.11);
	cout << p3.first << ", " << p3.second << endl;


	return 0;
}
















