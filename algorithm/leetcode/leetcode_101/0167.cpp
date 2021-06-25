// 2021-06-25
// 167. 两数之和II-输入有序数组

vector<int> twoSum(vector<int>& numbers, int target) {
	int l = 0, r = numbers.size() - 1, sum;
	while (l < r) {
		sum = numbers[l] + numbers[r];
		if (sum == target) break;
		if (sum < target) ++l;
		else --r;
	}
	return vector<int>{l + 1, r + 1};
} 
