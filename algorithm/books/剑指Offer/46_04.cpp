// 2021-06-21
// �����ǵ���Ϸ ���ݹ飩

int LastRemaining_Solution(int n, int m) {
	if (n == 0)
		return -1;
	if (n == 1)
		return 0;
	else
		return (LastRemaining_Solution(n - 1, m) + m) % n;
}
