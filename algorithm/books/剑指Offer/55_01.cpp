// 2021-06-23
// 链表中环的入口结点 （unordered_map）

ListNode* EntryNodeOfLoop(ListNode* pHead) {
	if (pHead == nullptr) return NULL;
	unordered_map<ListNode*, int> unmp;
	while (pHead != NULL) {
		unmp[pHead]++;
		if (unmp[pHead] == 2) return pHead;
		pHead = pHead -> next;
	}
	return NULL;
} 
