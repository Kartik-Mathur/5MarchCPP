#include <iostream>
#include <stack>
using namespace std;
int n, a[200005];

int solve() {
	stack<int> s;
	int ps[200005], ns[200005];
	ps[0] = -1;
	s.push(0);

	for (int i = 1; i < n; ++i)
	{
		int  hc = a[i];
		while (!s.empty() and hc <= a[s.top()]) s.pop();

		if (s.empty()) ps[i] = -1;
		else ps[i] = s.top();
		s.push(i);
	}

	while (!s.empty()) s.pop();

	ns[n - 1] = n;
	s.push(n - 1);
	for (int i = n - 2; i >= 0; --i)
	{
		int hc = a[i];
		while (!s.empty() and hc <= a[s.top()]) s.pop();
		if (s.empty())ns[i] = n;
		else  ns[i] = s.top();

		s.push(i);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int w = ns[i] - ps[i] - 1;
		int h = a[i];
		ans = max(ans, w * h);
	}
	return  ans;
}


int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];

	cout << solve() << endl;

	return 0;
}
















