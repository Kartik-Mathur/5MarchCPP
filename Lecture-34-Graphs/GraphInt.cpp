#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
public:
	vector<list<int> > adj;
	int n;
	Graph(int v) {
		n = v;
		adj.resize(n);
	}

	void addEdge(int u, int v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir)
			adj[v].push_back(u);
	}

	void print() {
		for (int i = 0; i < n; ++i)
		{
			cout << i << "--> ";
			for (auto neighbours : adj[i]) {
				cout << neighbours << ", ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(2, 1);
	g.addEdge(2, 3);

	g.print();

	return 0;
}
















