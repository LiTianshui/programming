// 1-14 Monthly Expense
// 2021-04-12

#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int n, m;
int a[100002];
bool find(int top)								// 检查这个解是否满足题意 
{
	int num = 1;
	int cur = 0;
	for (int i = 0; i < n; i++)
		if (cur + a[i] <= top) cur += a[i];		// 尽量将更多的天数分到一组内 
		else {
			num++;								// 不能分到一组，则组数加1 
			cur = a[i];							// 开始初始化该组的总花费 
		}
	return (num <= m);
}

int main()
{
	while (cin >> n >> m)						// 输入n和m 
	{
		int sum = 0;
		int ma = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);					// 输入每天的花费 
			sum += a[i];
			ma = max(ma, a[i]);
		}
		int low = ma, high = sum, mid;			// 初始化上界和下界 
		while (low != high)
		{
			mid = (low + high) >> 1;			// 每次将区间分为两部分 
			if (find(mid)) high = mid;			// 若mid符合题意，区间变为[low, mid] 
			else low = mid + 1;					// 否则，区间变为[mid+1, high] 
		}
		printf("%d\n", low);
	}
	return 0;
}
