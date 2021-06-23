// 2021-06-23
// 删除链表中的重复结点 （三指针法）

ListNode* deleteDuplication(ListNode* pHead) {
	if (pHead == nullptr || pHead -> next == nullptr) return pHead;
	ListNode *Head = (ListNode*)malloc(sizeof(struct ListNode));
	ListNode *pre = (ListNode*)malloc(sizeof(struct ListNode));
	ListNode *cur = (ListNode*)malloc(sizeof(struct ListNode));
	Head -> next = pHead;
	pre = Head;
	cur = Head -> next;
	while (cur != nullptr) {
		if (cur -> next != nullptr && cur -> val == cur -> next -> val) {
			while (cur -> next != nullptr && cur -> val == cur -> next -> val) {
				cur = cur -> next;
			}
			pre -> next = cur -> next;
			cur = cur -> next;
		} else {
			pre = pre -> next;
			cur = cur -> next;
		}
	}
	return Head -> next;
} 
