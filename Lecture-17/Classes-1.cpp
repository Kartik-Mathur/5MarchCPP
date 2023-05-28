#include <iostream>
using namespace std;

/////////////////////////////// BLUEPRINT ////////////////////////////////////////
class Car {
private:
	int price;
public:
	char *name;
	int model;
	int	seats;
	const int tyres;

	// 1. Default Constructor: We create objects with the help of constructor
	Car(): tyres(4), name(NULL) {
		// name = NULL;
		cout << "Inside Default Constructor\n";
	}

	Car(char *n, int p, int m, int s): tyres(4) {
		cout << "Inside Parameterised Constructor\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		seats = s;
	}

	Car(const Car &X): tyres(4) {
		cout << "Inside Copy Constructor\n";
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. COPY ASSIGNMENT OPERATOR
	void operator=(const Car X) {
		cout << "Inside Copy Assignment Operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 5. Operator Overloading
	// A+=B;
	void operator+=(const Car &X) {

		char *oldName = name;
		name = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(name, oldName);
		strcat(name, X.name);
		delete[] oldName;
		oldName = NULL;

		price += X.price;
		model += X.model;
		seats += X.seats;
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


	// GETTER
	int getPrice() {
		return price;
	}

	// SETTER
	void setPrice(int p) {
		if (p > 50 and p < 100) {
			price = p;
		}
		else {
			price = 70;
		}
	}

	// DESCRUCTOR
	~Car() {
		cout << "Deleting car: " << name << endl;
		delete []name;
	}
};
/////////////////////////////// BLUEPRINT ////////////////////////////////////////

int main() {


	Car A; // Object of Car
	// strcpy(A.name, "BMW");
	A.updateName("BMW");
	// A.price = 10;
	A.setPrice(10);
	A.model = 2020;
	A.seats = 4;


	Car B;
	B.updateName("Maruti");
	// strcpy(B.name, "Maruti");
	B.setPrice(-100);
	B.model = 2022;
	B.seats = 7;
	cout << A.getPrice() << endl;
	// Car C("Audi", 200, 2023, 2);
	// Car D("Bentley", 50, 2023, 4);
	// Car E("Honda", 1200, 2023, 6);


	// Copy Assignment Operator
	// Bane huye object E ko A se update krna, by default bhi yeh exist
	// karta hai
	// E = A;
	// C.updateName("Tata");

	Car C = B;

	Car D(C);

	D.name[0] = 'T';

	A += D;

	A.print();
	B.print();
	C.print();
	D.print();
	// E.print();



	return 0;
}
















