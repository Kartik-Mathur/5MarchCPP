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

	void topologicalSortHelper(T node, list<T> &l, unordered_map<T, bool> &visited) {
		visited[node] = true;
		for (auto ch : adj[node]) {
			if (!visited[ch]) {
				topologicalSortHelper(ch, l, visited);
			}
		}

		l.push_front(node);
	}


	void topologicalSort() {
		list<T> l;
		unordered_map<T, bool> visited;
		for (auto n : adj) {
			if (!visited[n.first]) {
				topologicalSortHelper(n.first, l, visited);
			}
		}

		for (auto e : l) {
			cout << e << " ";
		}
		cout << endl;
	}
};

int main() {

	Graph<string> g;
	g.addEdge("English", "DSA", false);
	g.addEdge("C++", "DSA", false);
	g.addEdge("DSA", "Python", false);
	g.addEdge("Python", "Data Science", false);
	g.addEdge("Data Science", "Job", false);
	g.addEdge("DSA", "Web", false);
	g.addEdge("Web", "Job", false);
	g.addEdge("Web", "Competitive", false);

	g.topologicalSort();

	return 0;
}
















