#include <iostream>
using namespace std;
// c1	c2 	c3	c4
// 1 	3 	7 	19
// nr	nc
// 2 	3
// r1	r2
// 2 	5
// c1	c2	c3
// 4 	4 	4
int c1, c2, c3, c4;
int nr, nc;
int rickshawRides[10000], cabRides[10000];

void solve() {
	// Rickshaw ko solve karo
	// - Ya toh individually rides book krlo ek rickshaw ki or
	//    us rickshaw ko monthly hire karlo
	int rickshaw_cost = 0;
	for (int i = 0; i < nr; ++i)
	{
		rickshaw_cost = rickshaw_cost + min(rickshawRides[i] * c1, c2);
	}
	rickshaw_cost = min(rickshaw_cost, c3);

// Cabs ko solve karo
	// - Ya toh individually rides book krlo ek cab ki or
	//    us cab ko monthly hire karlo
	int cab_cost = 0;
	for (int i = 0; i < nc; ++i)
	{
		cab_cost = cab_cost + min(cabRides[i] * c1, c2);
	}
	cab_cost = min(cab_cost, c3);

	int total_cost = min(cab_cost + rickshaw_cost, c4);
	cout << total_cost << endl;
}

int main() {


	int t;
	cin >> t;

	while (t--) {
		cin >> c1 >> c2 >> c3 >> c4;


		// Take input of number of rickshaw and number of cabs

		cin >> nr >> nc;

		// Kaunse rickshaw mei kitni baar ride krenge
		for (int i = 0; i < nr; ++i)
		{
			cin >> rickshawRides[i]; // ith rickshaw mei kitni rides lenge
		}

		// Kaunsi cab mei kitni baar ride krenge
		for (int i = 0; i < nc; ++i)
		{
			cin >> cabRides[i]; // ith cab mei kitni rides lenge
		}

		solve();
	}

	return 0;
}
















