// 2021-06-24
// 滑动窗口的最大值 （优先队列）

vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
	if (num.size() == 0 || size == 0 || size > num.size()) return vector<int>();
	int len = num.size(), count = 0;
	priority_queue<int> pq;
	vector<int> result;
	for (int i = 0; i <= len - size; ++i) {
		while (count < size) {
			pq.push(num[i + count]);
			count++;
		}
		count = 0;
		result.push_back(pq.top());
		while (!pq.empty()) {
			pq.pop();
		}
	}
	return result;
} 
