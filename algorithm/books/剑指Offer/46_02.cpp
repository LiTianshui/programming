// 2021-06-21
// 孩子们的游戏 （数组）

int LastRemaining_Solution(int n, int m) {
	if (n < 1 || m < 1) return -1;
	vector<int> numbers(n, 0);
	int index = -1, step = 0, count = n;
	while (count > 0) {
		index++;
		if (index >= n) index = 0;
		if (numbers[index] == -1) continue;
		step++;
		if (step == m) {
			numbers[index] = -1;
			step = 0;
			count--;
		}
	}
	return index;
}
