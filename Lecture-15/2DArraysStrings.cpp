#include <iostream>
using namespace std;

char keys[][10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

string mapping[10] = {
	"Hello",
	"Learning",
	"Hello World"
};

int main() {

	for (int i = 0; i < 3; ++i)
	{
		cout << mapping[i] << endl;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < mapping[i].size(); ++j)
		{
			cout << mapping[i][j] << "-";
		}
		cout << endl;
	}
	return 0;
}
















