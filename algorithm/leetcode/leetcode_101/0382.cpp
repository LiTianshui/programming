// 2021-07-12
// 382. 链表随机节点

class Solution {
	ListNode *h;
public:
	Solution(ListNode *head): h(head) {}
	int getRandom() {
		int ans = h -> val;
		ListNode *node = h -> next;
		int i = 2;
		while (node) {
			if ((rand() % i) == 0) {
				ans = node -> val;
			}
			++i;
			node = node -> next;
		}
		return ans;
	}
}; 
