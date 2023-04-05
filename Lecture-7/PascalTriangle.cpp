#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int r = 0; r < n; ++r)
	{
		int pt = 1;
		cout << pt << " ";
		for (int x = 0; x < r; ++x)
		{
			int nt = pt * (r - x) / (x + 1);
			cout << nt << " ";
			pt = nt;
		}
		cout << endl;
	}

	return 0;
}
















