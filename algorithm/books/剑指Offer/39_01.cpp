// 2021-06-17
// 平衡二叉树 （暴力法）

int maxDepth(TreeNode* node) {
	if (node == nullptr) return 0;
	return 1 + max(maxDepth(node -> left), maxDepth(node -> right));
} 

bool IsBalanced_Solution(TreeNode* pRoot) {
	if (pRoot == nullptr) return true;
	return abs(maxDepth(pRoot -> left) - maxDepth(pRoot -> right)) <= 1 &&
		IsBalanced_Solution(pRoot -> left) && IsBalanced_Solution(pRoot -> right);
}
