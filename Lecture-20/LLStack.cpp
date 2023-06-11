#include <iostream>
using namespace std;

template<typename U>
class node {
public:
	U data;
	node<U>* next;
	node(U d) {
		data = d;
		next = NULL;
	}
};

template<typename T>
class Stack {
public:
	node<T>* head;
	Stack() {
		head = NULL;
	}

	void push(T d) {
		node<T>* n = new node(d);
		n->next = head;
		head = n;
	}

	void pop() {
		if (!head) {
			return;
		}
		else {
			node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty() {
		return head == NULL;
	}

	T top() {
		return head->data;
	}
};

int main() {
	Stack<char> s;

	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);

	while (!s.empty()) {
		cout << s.top() << endl;

		s.pop();
	}

	return 0;
}
















