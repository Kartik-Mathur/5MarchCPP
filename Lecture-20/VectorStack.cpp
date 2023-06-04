#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack {
public:
	vector<T> v;
	void push(T d) {
		v.push_back(d);
	}

	void pop() {
		v.pop_back();
	}

	bool empty() {
		return v.size() == 0;
	}

	T top() {
		return v[v.size() - 1];
	}
};

int main() {

	Stack<char> s;

	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

	while (!s.empty()) {
		cout << s.top() << endl;

		s.pop();
	}


	return 0;
}
















