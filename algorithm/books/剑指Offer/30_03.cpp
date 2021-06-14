// 2021-06-14
// ��������������� ��ʹ��һ�����ֱ����м�����

int FindGreatestSumOfSubArray(vector<int> array) {
	int maxNum = array[0];
	for (int i = 1; i < array.size(); ++i) {
		array[i] = max(0, array[i-1]) + array[i];
		maxNum = max(maxNum, array[i]);
	}
	return maxNum;
}
