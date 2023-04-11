#include <iostream>
#include <cstring>
using namespace std;

void replacePi(char *a, char *op) {
	int n = strlen(a);
	int j = 0;

	for (int i = 0; i < n; )
	{
		if (a[i] == 'p'
		        and (i + 1) < n
		        and a[i + 1] == 'i') {
			op[j++] = '3';
			op[j++] = '.';
			op[j++] = '1';
			op[j++] = '4';
			i = i + 2;
		}
		else {
			op[j++] = a[i++];
		}
	}
	op[j] = '\0';
}

int main() {

	int t;
	cin >> t;
	cin.get();

	for (int i = 0; i < t; ++i)
	{
		char a[10000];
		cin.getline(a, 10000);

		char op[10000];

		replacePi(a, op);
		cout << op << endl;
	}


	return 0;
}
















