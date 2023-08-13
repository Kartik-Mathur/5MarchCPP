#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	bool checkBipartiteHelper(unordered_map<T, int> &color, int node, int currentRang, int parent) {
		color[node] = currentRang;

		for (auto children : adj[node]) {
			if (color[children] == 0) {
				bool bacheBipartiteHai = checkBipartiteHelper(color, children, 3 - currentRang, node);

				if (!bacheBipartiteHai) return false;

			}
			else if (children != node and color[children] == currentRang) return false;
		}

		return true;
	}

	bool checkBipartite() {
		unordered_map<T, int> color;
		for (auto p : adj) {
			color[p.first] = 0;
		}
		for (auto p : adj) {
			if (color[p.first] == 0) {
				if (!checkBipartiteHelper(color, p.first, 1, p.first)) {
					return false;
				}
			}
		}
		return true;
	}
};


int main() {

	Graph<int> g;
	// g.addEdge(1, 2);
	// g.addEdge(1, 4);
	// g.addEdge(3, 4);
	// g.addEdge(5, 4);
	// g.addEdge(3, 2);
	g.addEdge(1, 2);
	g.addEdge(1, 4);
	g.addEdge(3, 2);
	g.addEdge(3, 5);
	g.addEdge(4, 5);


	cout << g.checkBipartite() << endl;


	return 0;
}
















