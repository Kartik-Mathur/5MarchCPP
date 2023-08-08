#include <iostream>
#include <unordered_map>
#include <list>
#include <set>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list< pair<T, int> > > adj;

	void addEdge(T u, T v, int d, bool bidir = true) {
		adj[u].push_back({v, d});
		if (bidir) {
			adj[v].push_back({u, d});
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << ": ";
			for (auto ch : p.second) {
				cout << "(" << ch.first << ", " << ch.second << ") ";
			}
			cout << endl;
		}
	}

	void dijkstra(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;
		for (auto p : adj) {
			dist[p.first] = INT_MAX;
		}
		dist[src] = 0;
		parent[src] = src;

		set<pair<int, T>>s;

		s.insert({0, src});
		while (!s.empty()) {
			auto f = *s.begin();
			auto baap = f.second;
			auto bd = f.first;
			s.erase(s.begin());

			for (auto n : adj[baap]) {
				auto ch = n.first;
				auto ed = n.second;
				if (bd + ed < dist[ch]) {
					auto x = s.find({dist[ch], ch});
					if (x != s.end()) s.erase(x);

					dist[ch] = bd + ed;
					parent[ch] = baap;
					s.insert({dist[ch], ch});
				}
			}
		}
		cout << "Distance of " << src << " to " << des << " : " << dist[des] << endl;
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
	}

};

int main() {
	Graph<string> g;

	g.addEdge("Amritsar", "Delhi", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);
	g.addEdge("Jaipur", "Mumbai", 8);

	// g.print();
	g.dijkstra("Delhi", "Mumbai");


	return 0;
}
















