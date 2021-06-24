// 2021-06-24
// 滑动窗口的最大值 （双端队列）

vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
	if (size > num.size() || size == 0 || num.size() == 0) return vector<int>();
	int len = num.size();
	vector<int> result;
	deque<int> dq;
	for (int i = 0; i < len; ++i) {
		while (!dq.empty() && num[i] > num[dq.back()])
			dq.pop_back();
		while (!dq.empty() && i - dq.front() >= size)
			dq.pop_front();
		dq.push_back(i);
		if (i + 1 >= size)
			result.push_back(num[dq.front()]);
	}
	return result;
}
