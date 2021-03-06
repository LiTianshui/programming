// 2021-07-12
// 318. 最大单词长度乘积

int maxProduct(vector<string> &words) {
	unordered_map<int, int> hash;
	int ans = 0;
	for (const string &word : words) {
		int mask = 0, size = word.size();
		for (const char &c : word) {
			mask |= 1 << (c - 'a');
		}
		hash[mask] = max(hash[mask], size);
		for (const auto &[h_mask, h_len] : hash) {
			if (!(mask & h_mask)) {
				ans = max(ans, size * h_len);
			}
		}
	}
	return ans;
}
