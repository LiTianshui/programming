// 2021-06-22
// �������ظ������� ��vector��

bool duplicate(int numbers[], int length, int* duplication) {
	vector<bool> result(length, false);
	for (int i = 0; i < length; ++i) {
		if (result[numbers[i]] == false) {
			result[numbers[i]] = true;
		} else {
			duplication[0] = numbers[i];
			return true;
		}
	}
	return false;
} 
