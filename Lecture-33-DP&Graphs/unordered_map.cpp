#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, int> h;
	// Insertion ways
	h["Mango"] = 100;

	// we insert a pair of key and value
	h.insert(make_pair("Apple", 120));
	h.insert({"Kiwi", 50});
	h.insert({"asdasd", 50});
	h.insert({"dadawd", 50});
	h.insert({"asdaweqw", 50});

	// For each loop
	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}

	if (h.count("Banana") == 1) {
		cout  << "Found Banana\n";
	}
	else {
		cout  << "Not Found Banana\n";
	}

	for (int i = 0; i < h.bucket_count(); ++i)
	{
		cout << i << ": ";
		for (auto it = h.begin(i); it != h.end(i); it++) {
			cout << "(" << (*it).first << "," << (*it).second << ") ";
		}
		cout  <<  endl;
	}

	return 0;
}
















