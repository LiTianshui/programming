// 2021-06-13
// 字符串的排列 （DFS + 回溯算法）

class Solution {
public:
	vector<string> result;
	void PermutationCore(string &s, int begin, int end) {
		if (begin == end) {
			result.push_back(s);
			return;
		}
		unordered_map<int, int> visited;
		for (int i = begin; i <= end; ++i) {
			if (visited[s[i]] == 1) continue;
			swap(s[i], s[begin]);
			PermutationCore(s, begin + 1, end);
			swap(s[i], s[begin]);
			visited[s[i]] = 1;
		}
	}
	vector<string> Permutation(string str) {
		if (str.size() == 0) return vector<string>();
		PermutationCore(str, 0, str.size() - 1);
		sort(result.begin(), result.end());
		return result;
	}
}; 
