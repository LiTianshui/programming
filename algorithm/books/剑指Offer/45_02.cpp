// 2021-06-21
// 扑克牌顺子

bool IsContinuous(vector<int> numbers) {
	int maxNum = 1, minNum = 14;
	if (numbers.size() < 5)
		return false;
	vector<int> result(14, 0);
	result[0] = -5;
	for (int i = 0; i < numbers.size(); ++i) {
		result[numbers[i]]++;
		if (numbers[i] == 0)
			continue;
		if (result[numbers[i]] > 1) return false;
		if (numbers[i] > maxNum)
			maxNum = numbers[i];
		if (numbers[i] < minNum)
			minNum = numbers[i];
	}
	if (maxNum - minNum < 5)
		return true;
	return false;
}
