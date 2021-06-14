// 2021-06-14
// 连续子数组的最大和 （使用一个数字保存中间结果）

int FindGreatestSumOfSubArray(vector<int> array) {
	int maxNum = array[0];
	for (int i = 1; i < array.size(); ++i) {
		array[i] = max(0, array[i-1]) + array[i];
		maxNum = max(maxNum, array[i]);
	}
	return maxNum;
}
