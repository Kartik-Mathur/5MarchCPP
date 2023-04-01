#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;

	// cin >> ch;
	ch = cin.get();
	while (ch != '$') {
		cnt++;

		// cin >> ch;
		ch = cin.get();
	}

	cout << "No of Characters: " << cnt << endl;

	return 0;
}
















