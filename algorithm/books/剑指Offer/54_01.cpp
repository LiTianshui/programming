// 2021-06-23
// 字符流中第一个不重复的字符

class Solution {
public:
	void Insert(char ch) {
		v.push_back(ch);
	}
	char FirstAppearingOnce() {
		if (v.empty()) return '#';
		for (auto &ch : v) {
			if (count(v.begin(), v.end(), ch) == 1) return ch;
		}
		return '#';
	}
	vector<char> v;
}; 
