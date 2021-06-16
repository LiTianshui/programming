// 2021-06-16
// 第一个只出现一次的字符 （unordered_map） 

int FirstNotRepeatingChar(string str) {
	unordered_map<char, int> mp;
	for (int i = 0; i < str.size(); ++i) {
		mp[str[i]] += 1;
	}
	for (int i = 0; i < str.size(); ++i) {
		if (mp[str[i]] == 1) return i;
	}
	return -1;
} 
