// 2021-07-12
// 136. 只出现一次的数字

int singleNumber(vector<int> &nums) {
	int ans = 0;
	for (const int &num : nums) {
		ans ^= num;
	}
	return ans;
}
