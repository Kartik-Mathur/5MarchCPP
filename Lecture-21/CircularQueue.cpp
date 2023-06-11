#include <iostream>
using namespace std;

class Queue {
public:
	int* a;
	int n, cs, s, e;

	Queue(int qs = 5) {
		cs = 0;
		s = 0;
		n = qs;
		e = n - 1;
		a = new int[n];
	}

	void push(int d) {
		if (cs == n) {
			cout << "Overflow\n";
			return;
		}

		e = (e + 1) % n;
		a[e] = d;
		cs++;
	}

	void pop() {
		if (cs == 0) {
			cout << "Underflow\n";
			return;
		}

		s = (s + 1) % n;
		cs --;
	}

	bool empty() {
		return cs == 0;
	}

	int front() {
		return a[s];
	}

};

int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	return 0;
}
















