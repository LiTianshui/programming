// 2021-06-23
// 把二叉树打印成多行

vector<vector<int>> Print(TreeNode* pRoot) {
	vector<vector<int>> result;
	if (pRoot == nullptr) return result;
	queue<TreeNode*> q;
	q.push(pRoot);
	while (!q.empty()) {
		int len = q.size();
		vector<int> temp;
		while (len--) {
			TreeNode* node = q.front();
			q.pop();
			temp.push_back(node -> val);
			if (node -> left) q.push(node -> left);
			if (node -> right) q.push(node -> right);
		}
		result.push_back(temp);
	}
	return result;
} 
