#include <iostream>
using namespace std;

template <typename T>
class Vector {
public:
	T *a;
	int cs;
	int ms;

	Vector() {}

	Vector(int n) {
		a = new T[n];
		cs = 0;
		ms = n;
	}

	void push_back(T d) {
		if (cs == ms) {
			T* olda = a;
			a = new T[2 * ms];
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
	T& operator[](int indx) {
		return a[indx];
	}

};

int main() {

	int n;
	cout << "Enter n: ";
	cin >> n;
	Vector<char> v(n);
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
















