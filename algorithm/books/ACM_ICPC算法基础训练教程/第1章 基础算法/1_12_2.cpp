// 1-12 Rightmost Digit_2 
// 2021-04-09
// 快速幂取模算法：		 https://www.cnblogs.com/wuyudong/p/3637479.html

#include <iostream>
using namespace std;
long long mod(long long a, long long b)
{
	int ans = 1;
	a = a % 10;
	while (b > 0)
	{
		if (b % 2 == 1)
			ans = (ans * a) % 10;
		b = b / 2;
		a = (a * a) % 10;
	}
	return ans;
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
