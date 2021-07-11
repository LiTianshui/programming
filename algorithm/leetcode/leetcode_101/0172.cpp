// 2021-07-11
// 172. ½×³ËºóµÄÁã

int trailingZeroes(int n) {
	return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
} 
