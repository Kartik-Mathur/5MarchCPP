class meraComparator
{
public:
	bool operator()(ListNode* a, ListNode* b) {
		return a ->val > b->val;
	}

};

class Solution {
public:

	ListNode* mergeKLists(vector<ListNode*> lists) {
		priority_queue<ListNode*, vector<ListNode*>, meraComparator > q;

		ListNode* dummy = new ListNode(), *dummy1;
		dummy1 =  dummy;

		for (int i = 0; i < lists.size(); ++i)
		{
			if (list[i] != NULL) q.push(lists[i]);
		}

		while (!q.empty()) {
			ListNode* cL = q.top();
			q.pop();
			if (cL and cL->next) {
				q.push(cL->next);
			}

			// cL->next = NULL;
			dummy1->next  = cL;
			dummy1 = cL;
		}

		return dummy->next;

	}
};














