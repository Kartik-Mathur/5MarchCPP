#include <iostream>
using namespace std;

class Car {
public:

	void operator()() {
		cout << "Apne Operator overloading kari hai--> ()\n";
	}
};


int main() {


	Car A;
	A(); // Function Calling + Operator Overloading -> Functor

	return 0;
}
















