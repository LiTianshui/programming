// 2021-06-15
// ������1���ֵĴ�������1��n��1���ֵĴ�����

int NumberOf1Between1AndN_Solution(int n) {
	if (n <= 0) return 0;
	if (n < 10) return 1;
	int high = n, pow = 1;
	while (high >= 10) {
		high /= 10;
		pow *= 10;
	}
	int last = n - high * pow;
	int cnt = high == 1 ? last + 1 : pow; // cnt�洢1�����ڵ�ǰ���λ�е����� 
	return cnt + high * NumberOf1Between1AndN_Solution(pow - 1) + NumberOf1Between1AndN_Solution(last);
} 
