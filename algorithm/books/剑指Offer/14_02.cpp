// 2021-06-10
// �����е�����k����� ������ָ�룩 

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	ListNode* slowNode = pListHead;
	while (k != 0) {
		k--;
		if (pListHead != nullptr) pListHead = pListHead -> next;
		else
			return nullptr;
	}
	while (pListHead != nullptr) {
		slowNode = slowNode -> next;
		pListHead = pListHead -> next;
	}
	return slowNode;
}
