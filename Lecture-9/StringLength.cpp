#include <iostream>
using namespace std;

int length(char *a) {

	int cnt = 0, i;

	for (i = 0; a[i] != '\0' ; ++i)
	{
		cnt++;
	}
	// cout << "CNT: " << cnt << ", i: " << i << endl;
	return cnt;
}

int main() {

	char a[] = "Hello World";

	cout << length(a) << endl;


	return 0;
}
















