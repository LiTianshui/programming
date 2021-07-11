// 2021-07-11
// 172. 阶乘后的零

int trailingZeroes(int n) {
	return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
} 
