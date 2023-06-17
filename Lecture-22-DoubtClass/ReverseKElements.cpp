#include <iostream>
#include <queue>
#include <stack>
using namespace std;


void reverseK(queue<int> &q, int k) {
	queue<int> q1;

	stack<int> s;
	for (int i = 0; i < k; ++i)
	{
		s.push(q.front());
		q.pop();
	}

	while (!s.empty()) {
		q1.push(s.top());
		s.pop();
	}

	while (!q.empty()) {
		q1.push(q.front());
		q.pop();
	}

	while (!q1.empty()) {
		cout << q1.front() << " ";
		q1.pop();
	}
	cout << endl;
}

int main() {

	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int data;
		cin >> data;
		q.push(data);
	}
	int k;
	cin >> k;

	reverseK(q, k);

	return 0;
}
















