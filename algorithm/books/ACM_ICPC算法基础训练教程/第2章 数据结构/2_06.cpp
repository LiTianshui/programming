// 2-6 敌兵布阵
// 2021-04-16
// 树状数组详细讲解，不会算法也能看懂哦~：	 https://zhuanlan.zhihu.com/p/25185969

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 50004
 
int s[N], n;
int lb(int k) {return k & -k;}
 
void add(int k, int v)
{
	while (k <= n)
	{
		s[k] += v;
		k += lb(k);
	}
}

int sum(int k)
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
			add(i, j);
		}
		printf("Case%d:\n", ca++);
		while (scanf("%s", op) && op[0] != 'E')
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
