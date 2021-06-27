// 2021-06-27
// 69. x的平方根 （牛顿迭代法）

int mySqrt(int x) {
	long ans = x;
	while (ans * ans > x) {
		ans = (ans + x / ans) / 2;
	}
	return ans;
} 

