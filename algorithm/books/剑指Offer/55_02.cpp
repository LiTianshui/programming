// 2021-06-23
// 链表中环的入口结点 （set）

ListNode* EntryNodeOfLoop(ListNode* pHead) {
	set<ListNode*> s;
	ListNode* node = pHead;
	while (node != NULL) {
		if (s.insert(node).second)
			node = node -> next;
		else
			return node;
	}
	return node;
}
