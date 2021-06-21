// 2021-06-21
// 和为S的连续整数序列 （滑动窗口） 

vector<vector<int>> FindContinuousSequence(int sum) {
	vector<vector<int>> result;
	int low = 1, high = 2;
	while (low < high) {
		int sumTemp = (low + high) * (high - low + 1) / 2;
		if (sumTemp == sum) {
			vector<int> resultTemp;
			for (int i = low; i <= high; ++i) {
				resultTemp.push_back(i);
			}
			result.push_back(resultTemp);
			low++;
		} else if (sumTemp < sum) {
			high++;
		} else {
			low++;
		}
	}
	return result;
}
