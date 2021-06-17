// 2021-06-17
// 二叉树的深度 （BFS，迭代）

int TreeDepth(TreeNode* pRoot) {
	if (pRoot == nullptr) return 0;
	queue<pair<TreeNode*, int>> q;
	q.push(make_pair(pRoot, 1));
	int maxDept = 1;
	while (!q.empty()) {
		TreeNode* curNode = q.front().first;
		int curDepth = q.front().second;
		q.pop();
		if (curNode) {
			maxDept = max(maxDept, curDepth);
			q.push({curNode -> left, curDepth + 1});
			q.push({curNode -> right, curDepth + 1});
		}
	}
	return maxDept;
} 
