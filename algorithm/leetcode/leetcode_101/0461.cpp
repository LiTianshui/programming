// 2021-07-12
// 461. ��������

int hammingDistance(int x, int y) {
	int diff = x ^ y, ans = 0;
	while (diff) {
		ans += diff & 1;
		diff >>= 1;
	}
	return ans;
} 
