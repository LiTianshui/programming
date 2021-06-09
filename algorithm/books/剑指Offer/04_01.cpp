// 2021-06-09
// 重建二叉树 （递归）
 
TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
	if (pre.size() == 0 || vin.size() == 0) {
		return NULL;
	}
	TreeNode* treeNode = new TreeNode(pre[0]);
	int mid = distance(begin(vin), find(vin.begin(), vin.end(), pre[0]));
	vector<int> left_pre(pre.begin() + 1, pre.begin() + mid + 1);
	vector<int> right_pre(pre.begin() + mid + 1, pre.end());
	vector<int> left_in(vin.begin(), vin.begin() + mid);
	vector<int> right_in(vin.begin() + mid + 1, vin.end());
	
	treeNode -> left = reConstructBinaryTree(left_pre, left_in);
	treeNode -> right = reConstructBinaryTree(right_pre, right_in);
	return treeNode;
}
