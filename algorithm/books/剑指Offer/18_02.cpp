// 2021-06-11
// ¶þ²æÊ÷µÄ¾µÏñ £¨µÝ¹é£©

void Mirror(TreeNode* pRoot) {
	if (pRoot == nullptr) return;
	TreeNode* temp = pRoot -> left;
	pRoot -> left = pRoot -> right;
	pRoot -> right = temp;
	Mirror(pRoot -> right);
	Mirror(pRoot -> left);
}
