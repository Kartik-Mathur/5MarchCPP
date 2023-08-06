#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> >adj(2005);
int c[2005];

vector<int> solve(int src, int parent) {
	vector<int> v;
	for (auto ch : adj[src]) {
		if (ch != parent) {
			vector<int> x = solve(ch, src);

			for (auto e : x) {
				v.push_back(e);
			}
		}
	}

	if (v.size() < c[src]) {
		cout << "NO\n";
		exit(0); // Program khatam
	}
	v.insert(v.begin() + c[src], src);
	return v;
}

int main() {

	int n;
	cin >> n;
	int root;
	for (int i = 1; i <= n; ++i)
	{
		int p;
		cin >> p >> c[i];
		if (p == 0) {
			root = i;
		}
		adj[p].push_back(i);
		adj[i].push_back(p);
	}

	vector<int> x = solve(root, 0);

	vector<int> ans(n + 1);
	for (int i = 0; i < x.size(); i++) {
		ans[x[i]] =  i + 1;
	}
	cout << "YES\n";
	for (int i = 1; i <= n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;


	return 0;
}
















