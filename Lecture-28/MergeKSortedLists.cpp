class Solution {
public:
	ListNode* mergeLL(ListNode* a, ListNode* b) {
		if (!a) {
			return b;
		}
		if (!b) {
			return a;
		}

		// ListNode* nH = NULL;
		if (a->val >= b->val) {
			// nH = b;
			b -> next = mergeLL(a, b->next);
			return b;
		}
		else {
			// nH = a;
			a -> next = mergeLL(a->next, b);
			return a;
		}
	}

	ListNode* mergeKLists(vector<ListNode*> lists) {
		if (lists.size() == 0) return NULL;

		for (int i = 1; i < lists.size(); ++i)
		{
			lists[0] = mergeLL(lists[0], lists[i]);
		}

		return lists[0];
	}
};














