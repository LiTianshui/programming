// 1-12 Rightmost Digit
// 2021-04-09
// 快速幂取模算法：		 https://www.cnblogs.com/wuyudong/p/3637479.html

#include <iostream>
using namespace std;
long long mod(long long a, long long b)
{
	if (b == 1) return a;
	long long s = mod(a, b/2) % 10;		// 把问题分成两部分，恰好这两部分工作是相同的
	if (b % 2 == 0) return (s * s) % 10;
	else return (s * s * a) % 10; 
}
int main()
{
	int t, N;
	cin >> t;
	while (t--)
	{
		cin >> N;
		cout << mod(N, N) << endl;
	}
	return 0;
}
