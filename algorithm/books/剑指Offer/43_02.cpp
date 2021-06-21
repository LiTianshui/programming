// 2021-06-21
// ×óÐý×ª×Ö·û´®

string LeftRotateString(string str, int n) {
	int len = str.size();
	if (len <= 1) return str;
	n = n % len;
	vector<char> temp(str.begin(), str.end());
	for (int i = 0; i < n; ++i)
		temp.push_back(str[i]);
	str.assign(n + temp.begin(), temp.end());
	return std::move(str);
}
