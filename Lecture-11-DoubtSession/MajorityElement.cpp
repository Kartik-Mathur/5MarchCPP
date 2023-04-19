#include <iostream>
using namespace std;

int main() {

	int maj = 0, cnt = 0;
	int el;

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> el;
		if (cnt == 0) {
			maj = el;
		}

		cnt += (maj == el) ? 1 : -1;
	}
	cout << maj << endl;


	return 0;
}
















