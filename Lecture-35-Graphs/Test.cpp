#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
#include<queue>
using namespace std;

template<typename  T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir)
			adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto neighbours : p.second) {
				cout << neighbours << " ";
			}
			cout << endl;
		}
	}

	void dfsHelper(T src, unordered_map<int, bool>& visited) {
		cout << src << " ";
		visited[src] =  true;

		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				dfsHelper(ch, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;
		int totalComponents = 1;
		dfsHelper(src, visited);


		for (auto  p : adj) {
			if (!visited[p.first]) {
				dfsHelper(p.first, visited);
				totalComponents++;
			}
		}
		cout << endl << "Total Components : " << totalComponents << endl;
	}

};

int main() {

	Graph<int> g;


	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 4);
	g.addEdge(2, 3);
	g.addEdge(4, 3);
	g.addEdge(5, 3);
	g.addEdge(2, 1);
	g.addEdge(20, 11);
	g.addEdge(20, 21);

	// unordered_map<int, bool> visited;
	// g.dfs(0, visited);

	g.dfs(0);

	cout << endl;



	return 0;
}
















