#include <iostream>
#include <queue>
#include <functional> // greater, less
using namespace std;

class meraComparator
{
public:
	bool operator()(int a, int b) {
		return a <= b;
	}

};

int main() {
	// heap == priority_queue

	// priority_queue<int> q; // Maxheap
	// priority_queue<int, vector<int>, greater<int> > q; // Minheap
	// priority_queue<int, vector<int>, less<int> > q; // Maxheap

	priority_queue<int, vector<int>, meraComparator > q; // Using comparator


	q.push(1);
	q.push(0);
	q.push(10);
	q.push(2);
	q.push(4);
	q.push(6);
	q.push(5);

	while (!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}

	return 0;
}
















