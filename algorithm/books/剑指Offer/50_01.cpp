// 2021-06-22
// �������ظ������� ��unordered_map��

bool duplicate(int numbers[], int length, int* duplication) {
	unordered_map<int, int> unmp;
	unmp.reserve(length);
	for (int i = 0; i < length; ++i) {
		if (unmp.find(numbers[i]) == unmp.end()) {
			unmp.insert({numbers[i], 1});
		} else {
			*duplication = numbers[i];
			return true;
		}
	}
	return false;
} 
