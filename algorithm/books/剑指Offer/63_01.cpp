// 2021-06-24
// 数据流中的中位数 （sort）

class Solution {
public:
	void Insert(int num) {
		result.push_back(num);
	}
	double GetMedian() {
		sort(result.begin(), result.end());
		int len = result.size();
		if (len % 2 == 0)
			return (result[len / 2] + result[-1 + len / 2]) / 2.0;
		else
			return result[len / 2];
	}
	vector<int> result;
}; 
