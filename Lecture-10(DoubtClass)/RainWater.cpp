#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int heights[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> heights[i];
	}

	int leftMax[100000];
	leftMax[0] = 0;
	int mx = heights[0];

	for (int i = 1; i < n; ++i)
	{
		leftMax[i] = mx;
		mx = max(heights[i], mx);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << leftMax[i] << " ";
	}

	// Let us calculate the right Max
	int rightMax[100000];
	rightMax[n - 1] = 0;
	mx = heights[n - 1];

	for (int i = n - 2; i >= 0; --i)
	{
		rightMax[i] = mx;
		mx = max(heights[i], mx);
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << rightMax[i] << " ";
	}

	// Calculate the water accumulated
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int chotiMax = min(rightMax[i], leftMax[i]);
		if (chotiMax - heights[i] > 0) {
			ans = ans + (chotiMax - heights[i]);
		}
	}
	cout << endl;
	cout << "Water accumulated: " << ans << endl;



	cout << endl;

	return 0;
}
















