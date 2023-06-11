#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s, int temp) {
	// base case
	if (s.empty()) {
		s.push(temp);
		return;
	}
	// recursive case
	int ct = s.top();
	s.pop();
	push_bottom(s, temp);
	s.push(ct);
}

void reverseStack(stack<int> &s) {
	// base case
	if (s.empty()) {
		return;
	}

	// recursive case
	int temp = s.top();
	s.pop();
	reverseStack(s);
	push_bottom(s, temp);
}

void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
}

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	printStack(s);

	reverseStack(s);

	printStack(s);

	return 0;
}
















