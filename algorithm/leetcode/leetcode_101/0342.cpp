// 2021-07-12
// 342. 4����

bool isPowerOfFour(int n) {
	return n > 0 && !(n & (n - 1)) && (n & 1431655765);
} 
