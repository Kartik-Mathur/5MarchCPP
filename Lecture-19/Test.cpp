#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int main() {

	node a(1);
	node b(2);

	a.next = &b;

	cout << a.data << "-->" << a.next->data << "-->NULL" << endl;


	return 0;
}
















