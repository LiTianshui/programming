// 2021-06-14
// ��������������� ��ֱ���޸�Ԫ���飩

int FindGreatestSumOfSubArray(vector<int> array) {
	for (int i = 1; i < array.size(); ++i) {
		array[i] = max(0, array[i-1]) + array[i];
	}
	return *max_element(array.begin(), array.end());
} 
