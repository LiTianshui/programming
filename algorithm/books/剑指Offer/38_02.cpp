// 2021-06-17
// 二叉树的深度 （递归）

int TreeDepth(TreeNode* pRoot) {
	if (pRoot == nullptr) return 0;
	int leftDept = TreeDepth(pRoot -> left) + 1, rightDept = TreeDepth(pRoot -> right) + 1;
	return max(leftDept, rightDept);
}
