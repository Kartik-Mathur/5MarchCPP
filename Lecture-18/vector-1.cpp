#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	// vector<int> v(buckets,Initialisation_value_of_everyBucket);
	// vector<int> v(n, 100);
	vector<int> v(n);

	cout << "Capacity: " << v.capacity() << endl;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v.push_back(-1);

	cout << "Capacity: " << v.capacity() << endl;


	return 0;
}
















