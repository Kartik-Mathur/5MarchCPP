#include <iostream>
using namespace std;

/////////////////////////////// BLUEPRINT ////////////////////////////////////////
class Car {
public:
	char *name;
	int price;
	int model;
	int	seats;

	// 1. Default Constructor: We create objects with the help of constructor
	Car() {
		name = NULL;
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterised Constructor:This is a function only
	Car(char *n, int p, int m, int s) {
		cout << "Inside Parameterised Constructor\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Copy Constructor: Ek object se doosre object ko banane ke liye
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		name = new char[strlen(X.name) + 1];

		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. COPY ASSIGNMENT OPERATOR
	void operator=(Car X) {
		cout << "Inside Copy Assignment Operator\n";

		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	void print() {
		cout << "Name  : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Model : " << model << endl;
		cout << "Seats : " << seats << endl << endl;
	}

	void updateName(char *n) {
		if (name != NULL) {
			delete []name;
			name = NULL;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
};
/////////////////////////////// BLUEPRINT ////////////////////////////////////////

int main() {


	Car A; // Object of Car
	// strcpy(A.name, "BMW");
	A.updateName("BMW");
	A.price = 10;
	A.model = 2020;
	A.seats = 4;


	Car B;
	B.updateName("Maruti");
	// strcpy(B.name, "Maruti");
	B.price = 100;
	B.model = 2022;
	B.seats = 7;

	Car C("Audi", 200, 2023, 2);
	Car D("Bentley", 50, 2023, 4);
	// Car E("Honda", 1200, 2023, 6);


	// Copy Assignment Operator
	// Bane huye object E ko A se update krna, by default bhi yeh exist
	// karta hai
	// E = A;
	C.updateName("Tata");

	A.print();
	B.print();
	C.print();
	D.print();
	// E.print();



	return 0;
}
















