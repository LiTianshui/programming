// 2021-06-12
// 从上往下打印二叉树 （迭代、队列）

vector<int> PrintFromTopToBottom(TreeNode* root) {
	vector<int> result;
	if (root == nullptr) return result;
	queue<TreeNode*> q;
	q.push(root);
	TreeNode* node;
	while (!q.empty()) {
		node = q.front();
		result.push_back(node -> val);
		if (node -> left) q.push(node -> left);
		if (node -> right) q.push(node -> right);
		q.pop();
	}
	return result;
}
