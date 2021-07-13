// 2021-07-13
// 769. 最多能完成排序的块

int maxChunksToSorted(vector<int> &arr) {
	int chunks = 0, cur_max = 0;
	for (int i = 0; i < arr.size(); ++i) {
		cur_max = max(cur_max, arr[i]);
		if (cur_max == i) {
			++chunks;
		}
	}
	return chunks;
} 
