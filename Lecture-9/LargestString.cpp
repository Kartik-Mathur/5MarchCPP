#include <iostream>
using namespace std;

void update(char *lar, char *arr) {
	int i = 0;
	int len_arr = strlen(arr);
	while (i <= len_arr) {
		lar[i] = arr[i];
		i++;
	}
}

int main() {
	char arr[100], lar[100];
	int lar_len = 0;

	int n;
	cin >> n;

	cin.get();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(arr, 100);
		if (strlen(arr) > lar_len) {
			lar_len = strlen(arr);
			update(lar, arr);
		}
	}

	cout << "Largest: " << lar << endl;
	cout << "Largest Len: " << lar_len << endl;


	return 0;
}
















