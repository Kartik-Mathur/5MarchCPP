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

	// 3. Copy Constructor: Ek object se doosre object ko banane ke liye
	// Car A = B;
	// Car A(B);
	Car(Car &B) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, B.name);
		price = B.price;
		model = B.model;
		seats = B.seats;
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
	// Car D("Bentley", 50, 2023, 4);
	// Car E("Honda", 1200, 2023, 6);
	Car D = C;
	Car E(D);

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
















