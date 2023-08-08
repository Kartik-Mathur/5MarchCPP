#include <iostream>
#include <map>
using namespace std;

map<int, bool>adj[200005];

int main() {
	int n, u, v, bfs[200005];
	cin >> n;

	for (int i = 0; i < n - 1; ++i)
	{
		cin >> u >> v;
		adj[u][v] = true;
		adj[v][u] = true;
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> bfs[i];
	}

	int j, i;
	for (i = 0, j = 1; i < n; ++i)
	{
		while (adj[bfs[i]][bfs[j]]  == true) {
			j++;
		}
	}

	if (j == n and bfs[0] == 1) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	return 0;
}
















