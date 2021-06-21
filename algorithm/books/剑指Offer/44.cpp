// 2021-06-21
// 反转单词序列

string ReverseSentence(string str) {
	string res = "", tmp = "";
	for (unsigned int i = 0; i < str.size(); ++i) {
		if (str[i] == ' ') {
			res = ' ' + tmp + res;
			tmp = "";
		} else {
			tmp += str[i];
		}
	}
	if (tmp.size())
		res = tmp + res;
	return res;
} 
