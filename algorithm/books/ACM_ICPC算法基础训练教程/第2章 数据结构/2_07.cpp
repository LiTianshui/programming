// 2-7 Minimum Inversion Number 
// 2021-04-17

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 5002

int n, s[N], num[N];
int lb(int k) {return k & (-k);}

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
	int i, j, ans;
	while (scanf("%d", &n) != -1)
	{
		memset(s, 0, sizeof(s));
		for (i = 0; i < n; i++)
		{
			scanf("%d", &num[i]);
		}
		int tm = 0, tp;
		for (i = 0; i < n; i++)
		{
			tm += sum(n - num[i]);
			add(n-num[i], 1);
		}
		ans = tm;
		for (i = 0; i < n - 1; i++)
		{
			tp = tm;
			add(n - num[i], -1);
			tp = tp + sum(n-num[i]) - num[i];		// 计算新的逆序对数
			add(n-num[i], 1);
			if (ans > tp) ans = tp;
			tm = tp;
		}
		printf("%d\n", ans);
	}
	return 0;
}
