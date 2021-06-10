// 2021-06-10
// 二进制中1的个数 (bitset)

int NumberOf1(int n) {
	return bitset<32>(n).count();
} 
