// 2021-06-22
// 构建乘积数组 （巧妙）

vector<int> multiply(vonst vector<int>& A) {
	int len = A.size();
	vector<int> B(len, 0);
	int temp = 1;
	for (int i = 0; i < len; temp *= A[i], ++i) {
		B[i] = temp;
	}
	temp = 1;
	for (int i = len - 1; i >= 0; temp *= A[i], --i) {
		B[i] = B[i] * temp;
	}
	return B;
} 
