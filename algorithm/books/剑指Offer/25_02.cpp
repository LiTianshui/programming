// 2021-06-12
// 复杂链表的复制 （哈希表的递归）

class Solution {
public:
	unordered_map<RandomListNode*, RandomListNode*> unmp;
	RandomListNode* Clone(RandomListNode* pHead) {
		if (pHead == NULL) return NULL;
		RandomListNode* head = new RandomListNode(pHead -> label);
		unmp[pHead] = head;
		head -> next = Clone(pHead -> next);
		head -> random = NULL;
		if (pHead -> random != nullptr) head -> random = unmp[pHead -> random];
		return head;
	}
}; 
