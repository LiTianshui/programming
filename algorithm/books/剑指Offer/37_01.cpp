// 2021-06-17
// ͳ��һ�����������������г��ֵĴ��� ��STL��

int GetNumberOfK(vector<int> data, int k) {
	auto pos = equal_range(data.begin(), data.end(), k);
	return pos.second - pos.first;
}
