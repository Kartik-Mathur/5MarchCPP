#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	for (int j = 0 ; j < n - 1 ; j++) {
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}

	}
}

void PairOfRoses(int a[], int n, int rupay) {
	bubbleSort(a, n);
	int i = 0, j = n - 1, rose1 = -1, rose2 = -1;
	while (i < j) {
		if (a[i] + a[j] > rupay) {
			j--;
		}
		else if (a[i] + a[j] == rupay) {
			rose1 = a[i];
			rose2 = a[j];
			i++;
			j--;
		}
		else {
			i++;
		}
	}
	cout << "Deepak should buy roses whose prices are " << rose1 << " and " << rose2 << "." << endl;
}


int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int a[100000];
		int n, rupay;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		cin >> rupay;

		PairOfRoses(a, n, rupay);
	}




	return 0;
}
















