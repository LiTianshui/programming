// 2021-06-14
// 连续子数组的最大和 （使用两个数字保存中间结果）

int FindGreatestSumOfSubArray(vector<int> array) {
	int len = array.size();
	int maxNum = array[0], result = maxNum;
	for (int i = 1; i < len; ++i) {
		if (maxNum + array[i] > array[i])
			maxNum += array[i];
		else
			maxNum = array[i];
		result = max(maxNum, result);
	}
	return result;
}
