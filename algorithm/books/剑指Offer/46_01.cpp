// 2021-06-21
// 孩子们的游戏 （链表）

int LastRemaining_Solution(int n, int m) {
	ListNode* root = (ListNode*) malloc (sizeof(ListNode));
	root -> val = 0;
	ListNode* node = (ListNode*) malloc (sizeof(ListNode));
	node = root;
	for (int i = 0; i < n; ++i) {
		ListNode* temp = (ListNode*) malloc (sizeof(ListNode));
		temp -> val = i;
		node -> next = temp;
		node = node -> next;
	}
	node -> next = root;
	int count = 0, result = -1;
	while (root != nullptr && n != 1) {
		if (count++ == m - 1) {
			result = root -> val;
			root = root -> next;
			node -> next = root;
			count = 0;
			n--;
			continue;
		} 
		root = root -> next;
		node = node -> next;
	}
	result = root -> val;
	return result;
}
