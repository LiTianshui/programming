// 2021-06-10
// 调整数组顺序使奇数位于偶数前面 （空间O(1)，时间(O(n^2))）

void reOrderArray(vector<int>& array) {
	for (int i = 0; i < array.size(); i++) {
		for (int j = array.size() - 1; j > 1; j--) {
			if (array[j] % 2 == 1 && array[j - 1] % 2 == 0)
				swap(array[j], array[j - 1]);
		}
	}
}

