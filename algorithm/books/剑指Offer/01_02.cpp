// 2021-06-09
// 二维数组中的查找 

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
	if (array.empty() || array[0].empty()) return false;
	for (int i = 0; i < array.size(); ++i) {
		if (hasFound(array[i], target)) return true;
	}
	return false;
}
    bool hasFound(vector<int>& array, int target) {
	int start = 0, end = array.size() - 1;
	while (start + 1 < end) {
		int mid = start + (end - start) / 2;
		if (array[mid] == target) return true;
		else if (array[mid] > target) end = mid;
		else start = mid;
	}
	if (array[start] == target || array[end] == target) return true;
	return false;
}
};
