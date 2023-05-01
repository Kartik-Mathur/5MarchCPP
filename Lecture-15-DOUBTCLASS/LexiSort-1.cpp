#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int number;

void printSorted(char *a, int i, char *out,
                 int j, int digits_cnt, int current_digit) {
	// base case
	if (j == digits_cnt) {
		out[j] = '\0';
		int ans = stoi(out);
		if (ans <= number) {
			cout << ans  << " ";
		}
		return;
	}

	if (current_digit > 1) {
		out[j] = '\0';
		int ans = stoi(out);
		if (ans <= number) {
			cout << ans  << " ";
		}
	}

	// recursive case

	int start_val;
	current_digit == 1 ? (start_val = 1 ) :  start_val = 0;

	for (int i = start_val; i <= 9; ++i)
	{
		out[j] = i + '0';
		printSorted(a, i + 1, out, j + 1, digits_cnt, current_digit + 1);
	}


}

int main() {

	char a[100];
	cin >> a;
	number = stoi(a);
	cout << '0' << " ";
	// cout << number + 1 << endl;
	// cin >> a;
	char out[100];
	printSorted(a, 0, out, 0, strlen(a), 1);

	return 0;
}
















