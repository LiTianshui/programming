// 2021-06-11
// 二叉树的镜像 （swap函数）

void Mirror(TreeNode* pRoot) {
	if (pRoot == nullptr) return;
	queue<TreeNode*> q;
	q.push(pRoot);
	while (!q.empty()) {
		TreeNode* node = q.front();
		q.pop();
		if (node) {
			q.push(node -> left);
			q.push(node -> right);
			swap(node -> left, node -> right);
		}
	}
} 
