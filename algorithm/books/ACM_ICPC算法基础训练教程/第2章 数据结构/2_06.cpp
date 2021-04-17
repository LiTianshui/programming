// 2-6 敌兵布阵
// 2021-04-16
// 树状数组详细讲解，不会算法也能看懂哦~：	 https://zhuanlan.zhihu.com/p/25185969

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 50004						// 定义最大人数N 
 
int s[N], n;
int lb(int k) {return k & -k;}		// lowbit函数 
 
void add(int k, int v)				// 在第k个营地增加v个人 
{
	while (k <= n)
	{
		s[k] += v;
		k += lb(k);
	}
}

int sum(int k)						// 求前k个营地的总人数 
{
	int re = 0;
	while (k > 0)
	{
		re += s[k];
		k -= lb(k);
	}
	return re;
}

int main()
{
	char op[5];
	int T, ca = 1, i, j;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		memset(s, 0, sizeof(s));
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &j);
			add(i, j);				// 加入树状数组 
		}
		printf("Case%d:\n", ca++);
		while (scanf("%s", op) && op[0] != 'E')		// 对于询问做出相应回答 
		{
			scanf("%d%d", &i, &j);
			if (op[0] == 'Q')
			{
				printf("%d\n", sum(j) - sum(i-1));
			}
			else if (op[0] == 'A')
			{
				add(i, j);
			}
			else add(i, -j);
		}
	}
	return 0;
}
