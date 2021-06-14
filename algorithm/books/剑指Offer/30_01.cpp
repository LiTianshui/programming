// 2021-06-14
// 连续子数组的最大和 （直接修改元素组）

int FindGreatestSumOfSubArray(vector<int> array) {
	for (int i = 1; i < array.size(); ++i) {
		array[i] = max(0, array[i-1]) + array[i];
	}
	return *max_element(array.begin(), array.end());
} 
