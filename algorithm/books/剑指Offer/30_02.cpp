// 2021-06-14
// ��������������� ��ʹ���������ֱ����м�����

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
