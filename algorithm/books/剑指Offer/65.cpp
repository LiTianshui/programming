// 2021-06-24
// 矩阵中的路径 （回溯法）

bool judge(char* matrix, int rows, int cols, int i, int j, char* str, int k, bool* flag) {
	int index = i * cols + j;
	if (i < 0 || i >= rows || j < 0 || j >= cols || matrix[index] != str[k] || flag[index] == true)
		return false;
	if (str[k + 1] == '\0') return true;
	flag[index] = true;
	if (judge(matrix, rows, cols, i - 1, j, str, k + 1, flag)
		|| judge(matrix, rows, cols, i + 1, j, str, k + 1, flag)
		|| judge(matrix, rows, cols, i, j - 1, str, k + 1, flag)
		|| judge(matrix, rows, cols, i, j + 1, str, k + 1, flag))
		return true;
	flag[index] = false;
	return false;
} 

bool hasPath(char* matrix, int rows, int cols, char* str) {
	if (matrix == NULL || rows < 1 || cols < 1 || str == NULL) return false;
	bool *flag = new bool[rows * cols];
	memset(flag, false, rows * cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (judge(matrix, rows, cols, i, j, str, 0, flag)) {
				return true;
			}
		}
	}
	delete[] flag;
	return false;
}
