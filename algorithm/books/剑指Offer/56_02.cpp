// 2021-06-23
// ɾ�������е��ظ���� �����֣�����һ���ظ��㣩

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
