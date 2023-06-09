#include <iostream>
using namespace std;

/////////////////////////////// BLUEPRINT ////////////////////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;
	int	seats;

	// 1. Default Constructor: We create objects with the help of constructor
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterised Constructor:This is a function only
	Car(char *n, int p, int m, int s) {
		cout << "Inside Parameterised Constructor\n";

		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	Car(char *n, int p, int m) {
		cout << "Inside Parameterised Constructor - 2\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = 4;
	}

	Car(int p, int m, char *n) {
		cout << "Inside Parameterised Constructor - 3\n";
		strcpy(name, n);
		price = p;
		model = m;
		seats = 4;
	}

	// 3. Copy Constructor: Ek object se doosre object ko banane ke liye
	// Car A = B;
	// Car A(B);
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. COPY ASSIGNMENT OPERATOR
	// A = B; // To update the value of already created object A, with object B
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
};
/////////////////////////////// BLUEPRINT ////////////////////////////////////////

int main() {


	Car A; // Object of Car
	strcpy(A.name, "BMW");
	A.price = 10;
	A.model = 2020;
	A.seats = 4;

	// cout << A.name << endl;
	// cout << A.price << endl;
	// cout << A.model << endl;
	// cout << A.seats << endl;


	Car B;
	strcpy(B.name, "Maruti");
	B.price = 100;
	B.model = 2022;
	B.seats = 7;

	Car C("Audi", 200, 2023, 2);
	Car D(50, 2023, "Bentley");
	// Car D("Bentley", 50, 2023, 4);
	// Car E("Honda", 1200, 2023, 6);
	// Car D = C;
	Car E(D);


	// Copy Assignment Operator
	// Bane huye object E ko A se update krna, by default bhi yeh exist
	// karta hai
	E = A;

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();

	// cout << B.name << endl;
	// cout << B.price << endl;
	// cout << B.model << endl;
	// cout << B.seats << endl;

	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';




	return 0;
}
















