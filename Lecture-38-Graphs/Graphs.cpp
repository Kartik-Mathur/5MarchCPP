#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
using namespace std;
vector<vector<int> > a;

// 6 4
// 1 2 1
// 3 4 3
// 2 4 3
// 1 4 2
// 1 3 2
// 2 3 1
// ANS: 4
class DSU {
public:
	int parent[200000];
	int rank[200000];
	int size[200000];

	void make_set(int u) {
		parent[u] = u;
		rank[u] = 0;
		size[u] = 1;
	}

	int find_set(int u) {
		if (parent[u] == u) return u;
		return parent[u] = find_set(parent[u]);
	}

	void union_set(int u, int v) {
		int l_u  = find_set(u);
		int l_v  = find_set(v);

		if (l_v != l_u) {
			if (rank[l_u] < rank[l_v])
				swap(l_u, l_v);

			parent[l_v] = l_u;
			if (rank[l_u] == rank[l_v]) {
				rank[l_u]++;
			}
			size[l_u] += size[l_v];
		}
	}
};

int mst() {
	int n, u, v, w, vertices;
	cin >> n >> vertices;
	// v.push_back({w, u, v});

	for (int i = 0; i < n; ++i)
	{
		cin >> u >> v >> w;
		a.push_back({w, u, v});
	}

	sort(a.begin(), a.end());
	DSU d;
	for (int i = 1; i <= vertices; ++i)
	{
		d.make_set(i);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int w = a[i][0];
		int u = a[i][1];
		int v = a[i][2];

		if (d.find_set(u) != d.find_set(v)) {
			ans += w;
			d.union_set(u, v);
		}
	}

	return ans;

}

int main() {

	cout << mst() << endl;


	return 0;
}
















