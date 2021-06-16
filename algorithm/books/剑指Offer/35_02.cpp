// 2021-06-16
// 数组中的逆排序 （归并排序）

int InversePairs(vector<int> data) {
	if (data.size() == 0)
		return 0;
	vector<int> copy(data);
	return InversePairsCore(data, copy, 0, data.size() - 1);
}

int InversePairsCore(vector<int>& data, vector<int>& copy, int begin, int end) {
	if (begin == end)
		return 0;
	int mid = begin + (end - begin) / 2;
	int left = InversePairsCore(copy, data, begin, mid);
	int right = InversePairsCore(copy, data, mid + 1, end);
	int end1 = mid;
	int end2 = end;
	int index_copy = end;
	long res = 0;
	while (begin <= end1 && mid + 1 <= end2) {
		if (data[end1] > data[end2]) {
			copy[index_copy--] = data[end1--];
			res += end2 - mid;
			res %= 1000000007;
		}
		else
			copy[index_copy--] = data[end2--];
	}
	while (begin <= end1)
		copy[index_copy--] = data[end1--];
	while (mid + 1 <= end2)
		copy[index_copy--] = data[end2--];
	return (left + right + res) % 1000000007;
}
