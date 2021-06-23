// 2021-06-23
// 按之字形顺序打印二叉树 （栈）

vector<vector<int>> Print(TreeNode* pRoot) {
	if (pRoot == nullptr) return vector<vector<int>>();
	vector<vector<int>> result;
	stack<TreeNode*> left_right, right_left;
	left_right.push(pRoot);
	TreeNode* node = nullptr;
	while (!left_right.empty() || !right_left.empty()) {
		if (!left_right.empty()) {
			vector<int> temp;
			while (!left_right.empty()) {
				node = left_right.pop();
				temp.push_back(node -> val);
				left_right.pop();
				if (node -> left) right_left.push(node -> left);
				if (node -> right) right_left.push(node -> right);
			}
			result.push_back(std::move(temp));
		}
		if (!right_left.empty()) {
			vector<int> temp;
			while (!right_left.empty()) {
				node = right_left.pop();
				temp.push_back(node -> val);
				right_left.pop();
				if (node -> right) left_right.push(node -> right);
				if (node -> left) left_right.push(node -> left);
			}
			result.push_back(std::move(temp));
		}
	}
	return std::move(result);
} 
