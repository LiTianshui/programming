// 2021-06-11
// 反转链表 （借助三个结点） 

ListNode* ReverseList(ListNode* pHead) {
	struct ListNode* node0 = NULL;
	struct ListNode* node1 = (ListNode*) malloc (sizeof(struct ListNode));
	struct ListNode* node2 = (ListNode*) malloc (sizeof(struct ListNode));
	node1 = pHead;
	node2 = pHead -> next;
	while (node1 != nullptr) {
		node1 -> next = node0;
		node0 = node1;
		node1= node2;
		if (node2 != nullptr) {
			node2 = node2 -> next;
		}
	} 
	return node0;
}
