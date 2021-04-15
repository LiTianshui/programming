// 2-5 Cube Stacking
// 2021-04-15
// 并查集：	https://zhuanlan.zhihu.com/p/93647900/
// return 一个赋值语句：	 https://blog.csdn.net/q270274978/article/details/79455822

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 30004

int n, fa[N], r[N], mx[N];
// r[x]表示x到根结点的距离，mx[x]表示这个集合中有多少个盒子
void init()
{
	int i;
	for (i = 1; i < N; i++) fa[i] = i, r[i] = 0, mx[i] = 1;
} 

int find(int x)								// 查找并查集的祖先 
{
	int fx = fa[x];
	if (fa[x] != x)
	{
		fx = find(fa[x]);
		r[x] += r[fa[x]];
	}
	return fa[x] = fx;
}

void U(int x, int y)						// 将两个集合合并 
{
	int fx = find(x), fy = find(y);
	fa[fy] = fx;
	r[fy] += mx[fx];						// 合并时更改相应的值 
	mx[fx] += mx[fy];
}

int main()
{
	char op[3];
	int i, j;
	while (scanf("%d", &n) != -1)
	{
		init();
		while (n--)
		{
			scanf("%s", op);
			if (op[0] == 'C')
			{
				scanf("%d", &i);
				int f = find(i);
				printf("%d\n", mx[f]-r[i]-1);	// 该集合盒子个数减去在i盒子之上的个数 
			}
			else
			{
				scanf("%d%d", &i, &j);
				U(i, j);
			}
		}
	}
	return 0;
}
