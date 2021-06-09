// 2021-06-09
// 从尾到头打印链表 -逆序 

vector<int> printListFromTailToHead(ListNode* head) {
	if (head == nullptr) return vector<int>();
	
	vector<int> result;
	while (head != nullptr) {
		result.push_back(head -> val);
		head = head -> next;
	}
	
	return vector<int>(result.rbegin(), result.rend());
}
