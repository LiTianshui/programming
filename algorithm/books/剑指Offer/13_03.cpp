// 2021-06-10
// ��������˳��ʹ����λ��ż��ǰ�� ���ռ�O(n)��ʱ��(O(n))��

void reOrderArray(vector<int>& array) {
	int len = array.size(), evenIndex = 0, oddIndex = 0;
	if (len <= 1) return;
	vector<int> temp(len, 0);
	for (int i = 0; i < len; ++i) {
		if ((array[i] & 1) == 1) array[oddIndex++] = array[i];
		else
			temp[evenIndedx++] = array[i];
	}
	for (int j = 0; j < evenIndex; ++j)
		array[j + oddIndex] = temp[j];
}
