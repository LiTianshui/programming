// 2-1 士兵训练问题
// 2021-04-13
// i&1：			https://zhidao.baidu.com/question/145997145.html 

#include <iostream>
#include <cstring>
#include <algorithm>
#define N 5002
using namespace std;

struct Q						// 定义结构体队列 
{
	int f, r, da[N];
	void init()
	{
		f = r = 0;
	}
	void Push(int a)			// 入队 
	{
		da[r++] = a;
	}
	int Gettop()				// 取队头元素 
	{
		return da[f++];
	}
	bool ch()					// 检查队内元素个数是否小于4 
	{
		return r - f < 4;
	}
	bool empty()				// 判断队列是否为空 
	{
		return f == r;
	}
}q[2];

int main()
{
	int T, n, i;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		q[0].init(), q[1].init();
		for (i = 1; i <= n; i++)							// 进行初始化，将n个人依次加入队列 
		{
			q[0].Push(i);
		}
		int now = 0, pre = 1;								// now为当前存士兵的队列，pre为另一个工作队列 
		i = 0;
		while (!q[now].ch())								// 用两个队列模拟报数过程 
		{
			q[pre].init();									// 一个队列初始化 
			if (i & 1)										// 根据i的奇偶性来标识当前的报数方式 
			{
				while (!q[now].empty())
				{
					q[pre].Push(q[now].Gettop());
					if (q[now].empty()) break;
					q[pre].Push(q[now].Gettop());
					if (q[now].empty()) break;
					q[now].Gettop();
				}
			}
			else
			{
				while (!q[now].empty())
				{
					q[pre].Push(q[now].Gettop());
					if (q[now].empty()) break;
					q[now].Gettop();
				}
			}
			i ^= -1;
			swap(now, pre);									// 交换工作队列 
		}
		printf("%d", q[now].Gettop());
		while (!q[now].empty())
		{
			printf(" %d", q[now].Gettop());
		}
		puts("");											//* 换行 
	}
} 
