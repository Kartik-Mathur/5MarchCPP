#include <iostream>
using namespace std;

int main() {

	int x = 10;
	float f = 10.11;
	char ch = 'A';

	int *xp = &x;
	float *fp = &f;
	char* chp = &ch;
	// char * chp = &ch;
	// char *chp = &ch;

	cout << "Address of x : " << &x << endl;
	cout << "Address of x + 1: " << &x + 1 << endl;
	cout << "xp : " << xp << endl;
	cout << "&xp : " << &xp << endl;
	cout << "&xp+1 : " << &xp + 1 << endl;
	cout << "Address of f : " << &f << endl;
	cout << "fp : " << fp << endl;
	cout << "Address of ch : " << &ch << endl;
	cout << "chp : " << chp << endl;


	return 0;
}
















