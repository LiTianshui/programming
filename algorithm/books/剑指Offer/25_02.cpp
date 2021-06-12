// 2021-06-12
// ��������ĸ��� ����ϣ��ĵݹ飩

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
