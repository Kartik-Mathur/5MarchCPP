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

	void bfs(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, bool> visited;
		unordered_map<T, int> distance;

		queue<T> q;

		visited[src] = true;
		q.push(src);
		parent[src] = src;
		distance[src] = 0;

		while (!q.empty()) {
			T f = q.front();
			q.pop();

			// cout << f << " ";

			for (auto ch : adj[f]) {
				if (!visited[ch]) {
					q.push(ch);
					visited[ch] = true;
					parent[ch] = f;
					distance[ch] = distance[f] + 1;
				}
			}
		}

		// cout << endl;
		// for (auto p : distance) {
		// 	cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		// }
		int minMoves = distance[des];
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
		cout << minMoves << endl;
	}
};

int main() {

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u, v, false);
		}
	}

	// g.addEdge(0, 1);
	// g.addEdge(3, 1);
	// g.addEdge(3, 2);
	// g.addEdge(4, 2);
	// g.addEdge(4, 3);
	// g.addEdge(4, 5);
	// g.addEdge(0, 2);

	// g.print();
	g.bfs(0, 36);

	return 0;
}
















