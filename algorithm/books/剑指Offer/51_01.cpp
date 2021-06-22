// 2021-06-22
// 构建乘积数组 （暴力法）

vector<int> multiply(const vector<int>& A) {
	vector<int> B;
	for (int i = 0; i < A.size(); ++i) {
		int temp = 1;
		for (int j = 0; j < A.size(); ++j) {
			if (j != i) temp *= A[j];
		}
		B.push_back(temp);
	}
	return B;
} 
