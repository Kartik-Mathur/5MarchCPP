class Solution {
public:
	bool comp(vector<int>a, vector<int>b) {
		return a[0] < b[0];
	}

	int minMeetingRooms(vector<vector<int>>& a) {
		sort(a.begin(), a.end(), comp);

		priority_queue<int, vector<int>, greater<int> > q;// Minheap

		for (int i = 0 ; i < a.size() ; i++) {
			if (q.empty()) {
				q.push(a[i][1]); // Current meeting ka end time push karo
			}
			else {
				// if (q.top() <= a[i][0]) {
				// 	q.pop();
				// 	q.push(a[i][1]);
				// }
				// else {
				// 	q.push(a[i][1]);
				// }

				if (q.top() <= a[i][0]) {
					q.pop();
				}

				q.push(a[i][1]);
			}
		}

		return q.size();

	}
};