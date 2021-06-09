// 2021-06-09
// 重建二叉树 -哈希加速 

TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
	unordered_map<int, int> unmp;
	for (int i = 0; i < pre.size(); ++i) {
		unmp.insert({vin[i], i});
	}
	return reConstructBinaryTreeCore(pre, unmp, 0, 0, pre.size() - 1);
} 

TreeNode* reConstructBinaryTreeCore(vector<int>& preorder, unordered_map<int, int>& unmp, int root, int start, int end) {
	if (start > end) return NULL;
	TreeNode* tree = new TreeNode(preorder[root]);
	int in_root_index = unmp[preorder[root]];
	
	tree -> left = reConstructBinaryTreeCore(preorder, unmp, root + 1, start, in_root_index - 1);
	tree -> right = reConstructBinaryTreeCore(preorder, unmp, (root + 1) + (in_root_index - 1 - start) + 1, in_root_index + 1, end);
	return tree;
}

