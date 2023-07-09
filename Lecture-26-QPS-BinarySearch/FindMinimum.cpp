class Solution {
public:
	int findMin(vector<int>& a) {
		int s = 0;
		int e = a.size() - 1;
		int n = a.size();
		while (s <= e) {
			int mid = (s + e) / 2;

			// Pehle check karlo kahi pivot toh nhi
			if (mid > 0 and a[mid] < a[mid - 1]) return a[mid];
			else {
				if (a[mid] <= a[n - 1]) e = mid - 1;
				else s = mid + 1;
			}
		}
		return a[s];
	}
};