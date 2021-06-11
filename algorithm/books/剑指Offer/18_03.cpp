// 2021-06-11
// 二叉树的镜像 （栈的迭代）

void Mirror(TreeNode* pRoot) {
	if (pRoot == nullptr) return;
	stack<TreeNode*> s;
	s.push(pRoot);
	while (!s.empty()) {
		TreeNode* node = s.top();
		s.pop();
		if (node) {
			s.push(node -> left);
			s.push(node -> right);
			swap(node -> left, node -> right);
		}
	}
}
