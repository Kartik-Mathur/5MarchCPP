#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(vector<int>a, vector<int>b) {
	return a[0] < b[0];
}

// bool comp(int*a, int*b) {
// 	return a[0] < b[0];
// }

int main() {
	vector<vector<int> > a{{1, 4},
		{9, 15},
		{2, 8},
		{12, 20},
		{8, 13}};
	// int a[5][2] = {
	// 	{1, 4},
	// 	{9, 15},
	// 	{2, 8},
	// 	{12, 20},
	// 	{8, 13}
	// };

	// sort(*a, *a + 5, comp);
	sort(a.begin(), a.end(), comp);

	for (int i = 0; i < 5; ++i)
	{
		cout  << a[i][0] << " " << a[i][1] << endl;
	}


	return 0;
}


