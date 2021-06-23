// 2021-06-23
// �����л�����ڽ�� ������ָ�룩

ListNode* EntryNodeOfLoop(ListNode* pHead) {
	if (pHead == nullptr || pHead -> next == nullptr) return nullptr;
	ListNode *fast = pHead, *slow = pHead;
	while (fast != nullptr && fast -> next != nullptr) {
		fast = fast -> next -> next;
		slow = slow -> next;
		if (fast == slow) break;
	}
	if (fast == nullptr || fast -> next == nullptr) return nullptr;
	slow = pHead;
	while (fast != slow) {
		fast = fast -> next;
		slow = slow -> next;
	}
	return fast;
}
