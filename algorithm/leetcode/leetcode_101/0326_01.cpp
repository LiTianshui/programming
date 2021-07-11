// 2021-07-11
// 326. 3的幂（log）

bool isPowerOfThree(int n) {
	return fmod(log10(n) / log10(3), 1) == 0;
} 
