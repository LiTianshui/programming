// 2021-06-27
// 69. x��ƽ���� ��ţ�ٵ�������

int mySqrt(int x) {
	long ans = x;
	while (ans * ans > x) {
		ans = (ans + x / ans) / 2;
	}
	return ans;
} 

