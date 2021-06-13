// 2021-06-13
// 二叉搜索树与双向链表 （借助栈） 

TreeNode* Convert(TreeNode* pRootOfTree) {
	TreeNode* head = NULL, *pre = NULL;
	stack<TreeNode*> s;
	while (pRootOfTree || !s.empty()) {
		while (pRootOfTree != nullptr) {
			s.push(pRootOfTree);
			pRootOfTree = pRootOfTree -> left;
		}
		if (!s.empty()) {
			pRootOfTree = s.top();
			s.pop();
			if (pre != NULL) {
				pre -> right = pRootOfTree;
				pRootOfTree -> left = pre;
			} else {
				head = pRootOfTree;
			}
			pre = pRootOfTree;
			pRootOfTree = pRootOfTree -> right;
		}
	}
	return head;
} 
