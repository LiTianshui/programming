// 2021-06-11
// 反转链表 （头插法） 

ListNode* ReverseList(ListNode* pHead) {
	struct ListNode* Head = NULL;
	struct ListNode* node = (ListNode*) malloc (sizeof(struct ListNode));
	
	while (pHead != nullptr) {
		node = pHead;
		pHead = pHead -> next;
		node -> next = Head;
		Head = node;
	}
	return Head;
}
