// 2021-07-12
// 528. 按权重随机选择

class Solution {
	vector<int> sums;
public:
	Solution(vector<int> &w): sums(std::move(w)) {
		partial_sum(sums.begin(), sums.end(), sums.begin());
	}
	int pickIndex() {
		int pos = (rand() % sums.back()) + 1;
		return lower_bound(sums.begin(), sums.end(), pos) - sums.begin();
	}
}; 
