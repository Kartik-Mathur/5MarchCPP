#include <iostream>
using namespace std;


class Vector {
public:
	int *a;
	int cs;
	int ms;

	Vector() {}

	Vector(int n) {
		a = new int[n];
		cs = 0;
		ms = n;
	}

	void push_back(int d) {
		if (cs == ms) {
			int* olda = a;
			a = new int[2 * ms];
			ms = ms * 2;
			for (int i = 0; i < cs; ++i)
			{
				a[i] = olda[i];
			}
			delete[] olda;
		}

		a[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) {
			cs --;
		}
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ms;
	}

	bool empty() {
		return cs == 0;
	}
	// v[i];
	int& operator[](int indx) {
		return a[indx];
	}

};

int main() {

	int n;
	cout << "Enter n: ";
	cin >> n;
	Vector v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	// for (int i = 0; i < n; ++i)
	// {
	// 	int x;
	// 	cin >> x;
	// 	v.push_back(x);
	// 	cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

	// }

	// v.pop_back();
	// v.pop_back();
	// v.pop_back();





	return 0;
}
















