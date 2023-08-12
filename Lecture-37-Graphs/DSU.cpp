#include <iostream>
using namespace std;
// DSU() {}

// DSU(int n) {
// 	parent = new int[n + 1];
// 	for (int i = 0; i <= n; ++i)
// 	{
// 		parent[i] = i;
// 	}
// }

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
			// if (rank[l_v] < rank[l_u]) {
			// 	parent[l_v] = l_u;
			// 	rank[l_u] += rank[l_v];
			// }
			// else {
			// 	parent[l_u] = l_v;
			// 	rank[l_v] += rank[l_u];
			// }
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

int main() {


	int n = 6;
	DSU d;

	for (int i = 1; i <= n; ++i)
	{
		d.make_set(i);
	}


	d.union_set(1, 2);
	d.union_set(3, 2);
	d.union_set(3, 4);
	d.union_set(5, 6);



	return 0;
}
















