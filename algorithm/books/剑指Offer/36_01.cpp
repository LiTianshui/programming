// 2021-06-17
// �������������еĵ�һ�������ڵ� ��������������

ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
	if (pHead1 == NULL || pHead2 == NULL) return NULL;
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	while (pHead1 != NULL) {
		node = pHead2;
		while (node != NULL) {
			if (node == pHead1) return node;
			else
				node = node -> next;
		}
		pHead1 = pHead1 -> next;
	}
	return NULL;
} 
