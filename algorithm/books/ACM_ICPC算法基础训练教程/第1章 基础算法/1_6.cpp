// 1-6 -- 最小公倍数
// 2020-11-26
// 欧几里得算法(求解最大公约数的优质方法)以及原理拓展：  https://blog.csdn.net/qq_25847123/article/details/95753295
// 最大公约数乘以最小公倍数就是这两个数的乘积：		 https://zhidao.baidu.com/question/622079861068583172.html

#include <iostream>
using namespace std;
// 利用欧几里得算法计算最大公约数
int gcd(int a, int b)
{
	if (a < b) swap(a, b);			// 保证算法条件
	if (a % b == 0) return b;
	return gcd(b, a%b); 
}
int main()
{
	int a, b;
	while(cin >> a >> b)			// 输入两个数，到达文件尾时跳出循环 
	{
		cout << a * b / gcd(a, b) << endl;
	}
	return 0;
}
