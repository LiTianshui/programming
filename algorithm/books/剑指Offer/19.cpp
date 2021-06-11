// 2021-06-11
// À≥ ±’Î¥Ú”°æÿ’Û

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int> res;
	if (matrix.empty()) return res;
	int rl = 0, rh = matrix.size() - 1;
	int cl = 0, ch = matrix[0].size() - 1;
	while (1) {
		for (int i = cl; i <= ch; i++) res.push_back(matrix[rl][i]);
		if (++rl > rh) break;
		for (int i = rl; i <= rh; i++) res.push_back(matrix[i][ch]);
		if (--ch < cl) break;
		for (int i = ch; i >= cl; i--) res.push_back(matrix[rh][i]);
		if (--rh < rl) break;
		for (int i = rh; i >= rl; i--) res.push_back(matrix[i][cl]);
		if (++cl > ch) break; 
	}
	return res;
}
