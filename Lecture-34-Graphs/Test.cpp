#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, int> h;
	h.insert({"Mango", 100});
	h.insert(make_pair("Apple", 120));

	h["Kiwi"] = 50;

	for (auto p : h) {
		cout  << p.first  << "  " << p.second << endl;
	}


	return 0;
}
















