// 2021-06-11
// 合并两个有序链表 （常规）

ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
	if (pHead1 == nullptr) return pHead2;
	if (pHead2 == nullptr) return pHead1;
	
	ListNode* Head = (ListNode*) malloc (sizeof(struct ListNode));
	
	if (pHead1 -> val <= pHead2 -> val) {
		Head = pHead1;
		pHead1 = pHead1 -> next;
	} else {
		Head = pHead2;
		pHead2 = pHead2 -> next;
	}
	
	ListNode* node = (ListNode*) malloc (sizeof(struct ListNode));
	node = Head;
	
	while (pHead1 && pHead2) {
		if (pHead1 -> val <= pHead2 -> val) {
			node -> next = pHead1;
			pHead1 = pHead1 -> next;
			node = node -> next;
		} else {
			node -> next = pHead2;
			pHead2 = pHead2 -> next;
			node = node -> next; 
		}
	}
	if (pHead1 != nullptr) node -> next = pHead1;
	else node -> next = pHead2;
	return Head; 
} 
