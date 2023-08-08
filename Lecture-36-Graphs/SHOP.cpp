#include <iostream>
#include <queue>
using namespace std;
#define int long long
char a[27][27];
int samay[27][27];
int n, m;
int src_i, src_j, des_i, des_j;
const int inf = 1e7;

bool isValid(int x, int y) {
	if (x >= 0 and x < n  and y >= 0 and y < m  and a[x][y] != 'X') {
		return true;
	}
	return false;
}

void solve() {
	queue<pair<int, int> > q;
	q.push({src_i, src_j});
	int x[] = { -1, 1, 0, 0};
	int y[] = {0 , 0, -1, 1};
	samay[src_i][src_j] = 0;

	while (!q.empty()) {
		int ci = q.front().first;
		int cj = q.front().second;

		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int ni = ci + x[i];
			int nj = cj + y[i];

			if (isValid(ni, nj) and (samay[ni][nj] > samay[ci][cj] + (a[ni][nj] - '0'))) {
				// agar ni and nj tak ka time kam aa gaya  toh update
				// karo and unke aage phr se jaakar dekhne ke liye
				// unhe queue mei push kro
				samay[ni][nj] = samay[ci][cj] + (a[ni][nj] - '0');
				q.push({ni, nj});
			}
		}
	}

	cout << samay[des_i][des_j] << endl;
}

int32_t main() {


	cin >> m >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
			samay[i][j] = inf;
			if (a[i][j] == 'S') src_i = i, src_j = j, a[i][j] = '0';
			if (a[i][j] == 'D') des_j = j, des_i = i, a[i][j] = '0';
		}
	}

	solve();

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << samay[i][j] << " ";
		} cout << endl;
	}

	return 0;
}
















