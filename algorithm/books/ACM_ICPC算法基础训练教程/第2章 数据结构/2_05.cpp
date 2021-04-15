// 2-5 Cube Stacking
// 2021-04-15
// ���鼯��	https://zhuanlan.zhihu.com/p/93647900/
// return һ����ֵ��䣺	 https://blog.csdn.net/q270274978/article/details/79455822

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 30004

int n, fa[N], r[N], mx[N];
// r[x]��ʾx�������ľ��룬mx[x]��ʾ����������ж��ٸ�����
void init()
{
	int i;
	for (i = 1; i < N; i++) fa[i] = i, r[i] = 0, mx[i] = 1;
} 

int find(int x)								// ���Ҳ��鼯������ 
{
	int fx = fa[x];
	if (fa[x] != x)
	{
		fx = find(fa[x]);
		r[x] += r[fa[x]];
	}
	return fa[x] = fx;
}

void U(int x, int y)						// ���������Ϻϲ� 
{
	int fx = find(x), fy = find(y);
	fa[fy] = fx;
	r[fy] += mx[fx];						// �ϲ�ʱ������Ӧ��ֵ 
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
				printf("%d\n", mx[f]-r[i]-1);	// �ü��Ϻ��Ӹ�����ȥ��i����֮�ϵĸ��� 
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
