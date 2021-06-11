// 2021-06-11
// 合并两个有序链表 （递归）

ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
	if (pHead1 == nullptr) return pHead2;
	if (pHead2 == nullptr) return pHead1;
	
	if (pHead1 -> val <= pHead2 -> val) {
		pHead1 -> next = Merge(pHead1 -> next, pHead2);
		return pHead1;
	} else {
		pHead2 -> next = Merge(pHead1, pHead2 -> next);
		return pHead2;
	}
}
