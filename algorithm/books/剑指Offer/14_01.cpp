// 2021-06-10
// �����е�����k�����

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	int count = 0;
	ListNode* node = pListHead;
	while (pListHead != nullptr) {
		count++;
		pListHead = pListHead -> next;
	}
	count = count - k;
	if (count < 0) return nullptr;
	while (count--)
		node = node -> next;
	return node;
} 
