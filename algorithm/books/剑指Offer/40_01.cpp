// 2021-06-19
// 数组中只出现一次的数字 （哈希表）

void FindNumsAppearOnce(vector<int> data, int* num1, int* num2) {
	unordered_map<int, int> unmp;
	for (int i = 0; i < data.size(); ++i) {
		unmp[data[i]] += 1;
	}
	auto it = unmp.begin();
	while (it != unmp.end()) {
		if (it -> second == 1) {
			*num1 = it -> first;
			++it;
			break;
		}
		++it;
	}
	while (it != unmp.end()) {
		if (it -> second == 1) {
			*num2 = it -> first;
			break;
		}
		++it;
	}
} 
