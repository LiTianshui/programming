// 2021-06-24
// 二叉搜索树的第K个节点

TreeNode* KthNode(TreeNode* pRoot, int k) {
	if (pRoot == nullptr) return nullptr;
	stack<TreeNode*> st;
	while (!st.empty() || pRoot != nullptr) {
		while (pRoot != nullptr) {
			st.push(pRoot);
			pRoot = pRoot -> left;
		}
		pRoot = st.top();
		st.pop();
		if (--k == 0) return pRoot;
		pRoot = pRoot -> right;
	}
	return nullptr;
} 
