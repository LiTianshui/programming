// 2021-06-11
// 栈的压入弹出序列 （vector） 

bool IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.size() == 0) return false;
	vector<int> v;
	for (int i = 0, j = 0; i < pushV.size();) {
		v.push_back(pushV[i++]);
		while (j < popV.size() && v.back() == popV[j]) {
			v.pop_back();
			j++;
		}
	}
	return v.empty();
} 
