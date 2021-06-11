// 2021-06-11
// 二叉树的镜像 （递归）

void Mirror(TreeNode* pRoot) {
	if (pRoot == nullptr) return;
	TreeNode* temp = pRoot -> left;
	pRoot -> left = pRoot -> right;
	pRoot -> right = temp;
	Mirror(pRoot -> right);
	Mirror(pRoot -> left);
}
