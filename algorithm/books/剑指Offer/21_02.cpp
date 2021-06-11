// 2021-06-11
// 栈的压入弹出序列 （借助栈）

bool IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.empty() || popV.empty() || pushV.size() != popV.size())
		return false;
	stack<int> s;
	int j = 0;
	for (int i = 0; i < pushV.size(); ++i) {
		s.push(pushV[i]);
		while (!s.empty() && s.top() == popV[j]) {
			s.pop();
			++j;
		}
	}
	if (s.empty())
		return true;
	return false;
}
