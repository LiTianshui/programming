// 2021-06-11
// 树的子结构

bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
	if (pRoot1 == nullptr || pRoot2 == nullptr) return false;
	return HasSubtree(pRoot1 -> left, pRoot2) || HasSubtree(pRoot1 -> right, pRoot2) || HasSubtreeCore(pRoot1, pRoot2);
}
bool HasSubtreeCore(TreeNode* pRoot1, TreeNode* pRoot2) {
	if (pRoot2 == nullptr) return true;
	if (pRoot1 == nullptr) return false;
	if (pRoot1 -> val == pRoot2 -> val)
		return HasSubtreeCore(pRoot1  -> left, pRoot2 -> left) && HasSubtreeCore(pRoot1 -> right, pRoot2 -> right);
	else
		return false;
} 
