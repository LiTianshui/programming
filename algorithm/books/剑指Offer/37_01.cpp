// 2021-06-17
// 统计一个数字在排序数组中出现的次数 （STL）

int GetNumberOfK(vector<int> data, int k) {
	auto pos = equal_range(data.begin(), data.end(), k);
	return pos.second - pos.first;
}
