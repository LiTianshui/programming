// 2021-07-13
// 448. 找到所有数组中消失的数字

vector<int> findDisappearedNumbers(vector<int> &nums) {
	vector<int> ans;
	for (const int &num : nums) {
		int pos = abs(num) - 1;
		if (nums[pos] > 0) {
			nums[pos] = -nums[pos];
		}
	}
	for (int i = 0; i < nums.size(); ++i) {
		if (nums[i] > 0) {
			ans.push_back(i + 1);
		}
	}
	return ans;
} 
