// 1-15 Function Problem
// 2021-04-12
// C++ 标准输出如何控制小数点后位数：
// https://blog.csdn.net/xidian13071185/article/details/4672344?utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7EBlogCommendFromMachineLearnPai2%7Edefault-1.control&dist_request_id=1330147.34874.16182193870720453&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7EBlogCommendFromMachineLearnPai2%7Edefault-1.control

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>
using namespace std;
double a1, b1, c1, a2, b2, c2;
double f(double e)			// 计算F(x)的函数 
{
	return max(a1 * e * e + b1 * e + c1, a2 * e * e + b2 * e + c2);
}

int main()
{
	int t;					// 输入数据组数 
	cin >> t;
	while (t--)
	{
		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;		// 输入函数系数
		double left = 0, right = 1000;					// 初始化上下界 
		while (right - left >= 1e-8)
		{
			double mid1 = left + (right - left) / 3,	// 将区间分成三部分 
					mid2 = right - (right - left) / 3;
			if (f(mid1) < f(mid2) + 1e-8) right = mid2;	// 极值点在[left, mid2] 
			else left = mid1;							// 极值点在[mid1, right] 
		} 
		cout << fixed << setprecision(4) << f(left) << endl;
	} 
	return 0;
} 
