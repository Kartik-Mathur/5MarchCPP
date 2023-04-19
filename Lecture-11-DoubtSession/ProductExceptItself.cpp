#include <iostream>
using namespace std;
#define ll long long

int main() {

	ll a[1000];
	ll n;
	cin >> n;
	ll product = 1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		product *= a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << (product / a[i]) << " ";
	}
	cout << endl;

	return 0;
}
















