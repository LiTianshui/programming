// 2021-07-12
// 190. 颠倒二进制位

uint32_t reverseBits(uint32_t n) {
	uint32_t ans = 0;
	for (int i = 0; i < 32; ++i) {
		ans <<= 1;
		ans += n & 1;
		n >>= 1;
	}
	return ans;
}
