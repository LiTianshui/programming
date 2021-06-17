// 2021-06-17
// 返回两个链表中的第一个公共节点 （使用两个指针）

ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
	if (pHead1 == NULL || pHead2 == NULL) return NULL;
	ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
	p1 = pHead1;
	p2 = pHead2;
	while (p1 != p2) {
		p1 = (p1 == NULL ? pHead2 : p1 -> next);
		p2 = (p2 == NULL ? pHead1 : p2 -> next);
	}
	return p1;
}
