#include <iostream>
#include <vector>
using namespace std;

class Minheap {

	void heapify(int i) {
		int left = 2 * i;
		int right = left + 1;

		int mi = i;
		if (left < v.size() and v[mi] > v[left]) {
			mi = left;
		}
		if (right < v.size() and v[mi] > v[right]) {
			mi = right;
		}
		if (i != mi) {
			swap(v[i], v[mi]);
			heapify(mi);
		}
	}
public:
	vector<int> v;

	Minheap() {
		v.push_back(-1);
	}

	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;

		while (c > 1 and v[c] < v[p]) {
			swap(v[c], v[p]);
			c = p;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();

		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;
	h.push(11);
	h.push(1);
	h.push(3);
	h.push(2);
	h.push(10);

	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}

	return 0;
}
















