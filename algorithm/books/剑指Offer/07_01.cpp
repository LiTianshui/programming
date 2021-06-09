// 2021-06-09
// 쳲��������� ����������Ԫ�ر������鼴�ɣ�

int Fibonacci(int n) {
	if (n == 1 || n == 2) return 1;
	if (n == 3) return 2;
	vector<int> F(3);
	F[0] = 1;
	F[1] = 1;
	F[2] = 2;
	for (int i = 3; i < n; ++i) {
		F[i % 3] = F[(i - 1) % 3] + F[(i - 2) % 3];
	}
	return F[(n - 1) % 3];
} 
