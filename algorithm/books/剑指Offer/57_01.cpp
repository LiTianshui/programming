// 2021-06-23
// 二叉树的下一个结点

TreeLinkNode* GetNext(TreeLinkNode* pNode) {
	if (pNode == nullptr) return nullptr;
	if (pNode -> right != nullptr) {
		pNode = pNode -> right;
		while (pNode -> left != nullptr)
			pNode = pNode -> left;
		return pNode;
	}
	while (pNode -> next != nullptr) {
		TreeLinkNode* proot = pNode -> next;
		if (proot -> left == pNode)
			return proot;
		pNode = pNode -> next;
	}
	return nullptr;
} 
