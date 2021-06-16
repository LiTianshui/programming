// 2021-06-16
// 第一个只出现一次的字符

int FirstNotRepeatingChar(string str) {
	vector<int> result(58, 0);
	for (int i = 0; i < str.size(); ++i) {
		result[str[i] - 'A'] += 1;
	}
	for (int i = 0; i < str.size(); ++i) {
		if (result[str[i] - 'A'] == 1) return i;
	}
	return -1;
}
