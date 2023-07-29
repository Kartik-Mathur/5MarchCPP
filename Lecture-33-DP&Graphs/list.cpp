#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> l;

	// NULL
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	// 1->2->3->NULL
	// l.push_front(4);
	// Iterating with the help of iterator
	list<int>::iterator it;
	for (it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";


	for (auto it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	// Insertion at middle
	it = l.begin();
	int pos = 3;
	for (int i = 0; i < pos; ++i)
	{
		it++;
	}

	l.insert(it, 100);
	list<int>::iterator n;

	for (auto it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
		if (*it == 100) n = it;
	}
	cout << "NULL\n";

	l.erase(n);

	for (auto it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	// FOR EACH LOOP
	for (auto x : l) {// For every data that belongs to linkedList l
		cout << x  << "-->";
	}
	cout << endl;



	return 0;
}
















