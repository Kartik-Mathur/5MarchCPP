#include <iostream>
#include <stack>
using namespace std;
int k;
class Pair {
public:
	char ch;
	int cnt;
	Pair(char c) {
		ch = c;
		cnt = 1;
	}
};

void solve(string &a) {
	stack<Pair> s;

	for (int i = 0; i < a.size(); i ++) {
		if (s.empty()) {
			Pair p(a[i]);
			s.push(p);
		}
		else {
			Pair p = s.top();
			s.pop();
			char ch = a[i];
			if (ch != p.ch) {
				s.push(p);
				Pair p1(ch);
				s.push(p1);
			}
			else {
				p.cnt++;
				if (p.cnt != k) {
					s.push(p);
				}
			}
		}
	}


	// Form the answer
	string ans = "";
	while (!s.empty()) {
		Pair p = s.top();
		s.pop();

		string x = "";
		for (int i = 0; i < p.cnt; ++i)
		{
			x.push_back(p.ch);
		}
		ans = x + ans;
	}
	cout << ans << endl;
}

int main() {



	string s;
	cin >> s;
	cin >> k;

	solve(s);

	return 0;
}
















