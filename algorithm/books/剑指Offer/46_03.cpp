// 2021-06-21
// �����ǵ���Ϸ ����ѧ�ⷨ��

int LastRemaining_Solution(int n, int m) {
	if (n <= 0 || m < 0)
		return -1;
	int ans = 0;
	for (int i = 2; i <= n; ++i) {
		ans = (ans + m) % i;
	}
	return ans;
}
