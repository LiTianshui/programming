// 2021-06-23
// 按之字形顺序打印二叉树 （队列）

vector<vector<int>> Print(TreeNode* pRoot) {
	vector<vector<int>> result;
	if (pRoot == nullptr) return result;
	queue<TreeNode*> q;
	q.push(pRoot);
	bool isLeft = false;
	while (!q.empty()) {
		int rowLen = q.size();
		vector<int> temp;
		while (rowLen--) {
			TreeNode* curNode = q.front();
			q.pop();
			if (curNode != nullptr) {
				temp.push_back(curNode -> val);
				if (curNode -> left) q.push(curNode -> left);
				if (curNode -> right) q.push(curNode -> right);
			}
		}
		isLeft = !isLeft;
		if (!isLeft) {
			result.push_back(vector<int>(temp.rbegin(), temp.rend()));
		} else {
			result.push_back(temp);
		}
	}
	return result;
} 
