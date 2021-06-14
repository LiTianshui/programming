// 2021-06-13
// 最小的K个数 （优先队列 小顶堆） 

vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
	if (k > input.size()) return vector<int>();
	priority_queue<int, vector<int>, greater<int>> pq;
	for (auto a : input)
		pq.push(a);
	vector<int> result;
	while (k--) {
		result.push_back(pq.top());
		pq.pop();
	}
	return result;
} 
