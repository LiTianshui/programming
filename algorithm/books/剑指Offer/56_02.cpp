// 2021-06-23
// 删除链表中的重复结点 （变种，保留一个重复点）

ListNode* deleteDuplication(ListNode* pHead) {
	if (pHead == nullptr) return nullptr;
	ListNode* node = (ListNode*)malloc(sizeof(struct ListNode));
	node = pHead;
	while (node != nullptr) {
		if (node -> next != nullptr && node -> val == node -> next -> val) {
			while (node -> next != nullptr && node -> val == node -> next -> val) {
				node -> next = node -> next -> next;
			}
		}
		node = node -> next;
	}
	return pHead;
}
