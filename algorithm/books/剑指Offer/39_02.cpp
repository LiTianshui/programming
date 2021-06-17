// 2021-06-17
// 平衡二叉树 （改进版，自底向上）

int getDepth(TreeNode* node) {
	if (node == nullptr) return 0;
	int leftDept = getDepth(node -> left);
	if (leftDept == -1) return -1;
	int rightDept = getDepth(node -> right);
	if (rightDept == -1) return -1;
	if (abs(leftDept - rightDept) > 1)
		return -1;
	else
		return 1 + max(leftDept, rightDept);
}

bool IsBalanced_Solution(TreeNode* pRoot) {
	if (pRoot == nullptr) return true;
	return getDepth(pRoot) != -1;
}
