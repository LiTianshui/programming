// 2021-06-17
// 统计一个数字在排序数组中出现的次数 （二分法）

int GetNumberOfK(vector<int> data, int k) {
	int low = 0, high = data.size() - 1;
	if (high == -1) return 0;
	while (low <= high) {
		int mid = (high - low) / 2;
		if (data[mid] > k) high = mid - 1;
		else if (data[mid] < k) low = mid + 1;
		else {
			int count = 0;
			count++;
			int index = mid - 1;
			while (index >= 0 && data[index] == k) {
				count++;
				index--;
			}
			index= mid + 1;
			while (index <= data.size() - 1 && data[index] == k) {
				count++;
				index++;
			}
			return count;
		}
	}
	return 0;
}
