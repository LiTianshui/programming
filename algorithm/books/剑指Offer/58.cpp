// 2021-06-23
// 对称的二叉树

bool isEqual(TreeNode* node1, TreeNode* node2) {
	if (node1 == nullptr && node2 == nullptr) return true;
	if (node1 == nullptr || node2 == nullptr) return false;
	if (node1 -> val != node2 -> val) return false;
	return isEqual(node1 -> left, node2 -> right) && isEqual(node1 -> right, node2 -> left);
} 
bool isSymmetrical(TreeNode* pRoot) {
	if (pRoot == nullptr) return true;
	return isEqual(pRoot -> left, pRoot -> right);
}
