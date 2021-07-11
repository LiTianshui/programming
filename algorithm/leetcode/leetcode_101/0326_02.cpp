// 2021-07-11
// 326. 3的幂（int范围内3的最大次方） 

bool isPowerOfThree(int n) {
	return n > 0 && 1162261467 % n == 0;
} 
