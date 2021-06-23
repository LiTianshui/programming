// 2021-06-23
// ����������һ�����

TreeLinkNode* GetNext(TreeLinkNode* pNode) {
	if (pNode == nullptr) return nullptr;
	TreeLinkNode* node = nullptr;
	if (pNode -> right != nullptr) {
		node = pNode -> right;
		while (node -> left != nullptr)
			node = node -> left;
		return node;
	}
	node = pNode;
	while (node -> next != nullptr && node == node -> next -> right) {
		node = node -> next;
	}
	return node -> next;
}
