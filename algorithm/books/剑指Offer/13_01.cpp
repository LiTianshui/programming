// 2021-06-10
// ��������˳��ʹ����λ��ż��ǰ�� �������ⷨ��

void reOrderArray(vector<int>& array) {
	vector<int> temp(array.size(), 0);
	int low = 0;
	for (int i = 0; i < array.size(); ++i) {
		if ((array[i] & 1) == 1)
			temp[low++] = array[i];
	}
	for (int i = 0; i < array.size(); ++i) {
		if ((arr[i] % 2) == 0)
			temp[low++] = array[i];
	}
	array.assign(temp.begin(), temp.end());
} 
