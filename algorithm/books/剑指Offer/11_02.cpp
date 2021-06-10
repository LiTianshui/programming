// 2021-06-10
// 二进制中1的个数 （&） 

int NumberOf1(int n) {
	int count = 0;
	while (n != 0) {
		count++;
		n = n & (n - 1);
	}
	return count;
} 
