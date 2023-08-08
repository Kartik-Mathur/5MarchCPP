#include <iostream>
#include <vector>
using namespace std;

bool compare(vector<int> &v1, vector<int> &v2) {
	return v1.size() < v2.size();
}

int main() {

	vector<vector<int> > v  = {
		{1, 2, 3},
		{2, 4},
		{3, 4},
		{1}
	};

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
















