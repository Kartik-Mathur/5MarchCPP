#include <iostream>
#include <set>
using namespace std;


int main() {

	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);

	auto x = s.find(3);
	if (x != s.end()) {
		cout << "Found: " << *x << endl;
	}

	while (!s.empty()) {
		auto f = s.begin();
		cout << *f << endl;

		s.erase(s.begin());
	}

	return 0;
}
















