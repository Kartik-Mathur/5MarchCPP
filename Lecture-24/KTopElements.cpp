#include <iostream>
#include <queue>
#include <functional> // greater, less
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > q) {
	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {

	// priority_queue<int> q; // Maxheap
	priority_queue<int, vector<int>, greater<int> > q; // Minheap

	int cs = 0, k = 3;
	int data;

	while (1) {
		cin >> data;

		if (data ==  -1) {
			// Print kardo heap ko
			printHeap(q);
		}
		else {
			if (cs == k) {
				if (data > q.top()) {
					q.pop();
					q.push(data);
				}
			}
			else {
				q.push(data);
				cs++;
			}
		}
	}


	return 0;
}
















