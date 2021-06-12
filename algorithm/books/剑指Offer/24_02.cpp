// 2021-06-12
// 二叉树中和为某一值的路径 （重载()） 

struct compare {
	bool operator()(vector<int>& left, vector<int>& right) {
		return left.size() > right.size();
	}
}; 
void FindPathCore(vector<vector<int>>& result, vector<int> temp, TreeNode* root, int sum) {
	if (root == nullptr) return;
	temp.push_back(root -> val);
	if (root -> left == nullptr && root -> right == nullptr && sum == root -> val) {
		result.push_back(temp);
	} else {
		if (root -> left) {
			FindPathCore(result, temp, root -> left, sum - root -> val);
		}
		if (root -> right) {
			FindPathCore(result, temp, root -> right, sum - root -> val);
		}
	}
	temp.pop_back();
}
vector<vector<int>> FindPath(TreeNode* root, int expectNumber) {
	vector<vector<int>> result;
	vector<int> temp;
	FindPathCore(result, temp, root, expectNumber);
	sort(result.begin(), result.end(), compare());
	return result;
}
