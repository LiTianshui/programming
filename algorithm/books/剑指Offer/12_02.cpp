// 2021-06-10
// 数值的整数次方 （快速幂算法）

double myPow(double x, int n) {
	if (exponent == 0) return 1;
	if (base == 0.0) return 0;
	long exp = exponent;
	if (exponent < 0) {
		exp = exponent * (-1.0);
	}
	
	double res = 1.0;
	while (exp != 0) {
		if ((exp & 1) == 1) {
			res *= base;
		}
		base *= base;
		exp >>= 1;
	}
	return exponent < 0 ? 1 / res : res;
} 
