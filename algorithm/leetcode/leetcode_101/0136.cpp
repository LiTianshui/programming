// 2021-07-12
// 136. ֻ����һ�ε�����

int singleNumber(vector<int> &nums) {
	int ans = 0;
	for (const int &num : nums) {
		ans ^= num;
	}
	return ans;
}
