// 2021-06-22
// �������ظ������� ����ռ���κοռ䣩

bool duplicate(int numbers[], int length, int* duplication) {
	for (int i = 0; i < length; ++i) {
		int index = numbers[i] % length;
		if (numbers[index] >= length) {
			duplication[0] = index;
			return true;
		}
		numbers[index] += length;
	}
	return false;
}
