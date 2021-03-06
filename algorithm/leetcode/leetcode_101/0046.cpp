// 2021-06-29
// 46. 全排列

vector<vector<int>> permute(vector<int> &nums) {
	vector<vector<int>> ans;
	backtracking(nums, 0, ans);
	return ans;
} 
void backtracking(vector<int> &nums, int level, vector<vector<int>> &ans) {
	if (level == nums.size() - 1) {
		ans.push_back(nums);
		return;
	}
	for (int i = level; i < nums.size(); ++i) {
		swap(nums[i], nums[level]);
		backtracking(nums, level + 1, ans);
		swap(nums[i], nums[level]);
	}
}
