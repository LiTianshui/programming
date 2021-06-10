// 2021-06-10
// 调整数组顺序使奇数位于偶数前面 （空间O(n)，时间(O(n))）

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
