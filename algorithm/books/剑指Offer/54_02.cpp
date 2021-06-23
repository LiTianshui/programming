// 2021-06-23
// 字符流中第一个不重复的字符 （unordered_map）

class Solution {
public:
	void Insert(char ch) {
		v.push_back(ch);
		unmp[ch]++;
	}
	char FirstAppearingOnce() {
		for (auto &ch : v) {
			if (unmp[ch] == 1) return ch;
		}
		return '#';
	}
	vector<char> v;
	unordered_map<char, int> unmp;
}; 
