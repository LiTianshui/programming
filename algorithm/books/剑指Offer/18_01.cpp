// 2021-06-11
// ¶þ²æÊ÷µÄ¾µÏñ £¨swapº¯Êý£©

void Mirror(TreeNode* pRoot) {
	if (pRoot == nullptr) return;
	queue<TreeNode*> q;
	q.push(pRoot);
	while (!q.empty()) {
		TreeNode* node = q.front();
		q.pop();
		if (node) {
			q.push(node -> left);
			q.push(node -> right);
			swap(node -> left, node -> right);
		}
	}
} 
