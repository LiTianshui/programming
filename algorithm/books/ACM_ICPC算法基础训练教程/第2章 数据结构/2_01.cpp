// 2-1 ʿ��ѵ������
// 2021-04-13
// i&1��			https://zhidao.baidu.com/question/145997145.html 

#include <iostream>
#include <cstring>
#include <algorithm>
#define N 5002
using namespace std;

struct Q						// ����ṹ����� 
{
	int f, r, da[N];
	void init()
	{
		f = r = 0;
	}
	void Push(int a)			// ��� 
	{
		da[r++] = a;
	}
	int Gettop()				// ȡ��ͷԪ�� 
	{
		return da[f++];
	}
	bool ch()					// ������Ԫ�ظ����Ƿ�С��4 
	{
		return r - f < 4;
	}
	bool empty()				// �ж϶����Ƿ�Ϊ�� 
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
		for (i = 1; i <= n; i++)							// ���г�ʼ������n�������μ������ 
		{
			q[0].Push(i);
		}
		int now = 0, pre = 1;								// nowΪ��ǰ��ʿ���Ķ��У�preΪ��һ���������� 
		i = 0;
		while (!q[now].ch())								// ����������ģ�ⱨ������ 
		{
			q[pre].init();									// һ�����г�ʼ�� 
			if (i & 1)										// ����i����ż������ʶ��ǰ�ı�����ʽ 
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
			swap(now, pre);									// ������������ 
		}
		printf("%d", q[now].Gettop());
		while (!q[now].empty())
		{
			printf(" %d", q[now].Gettop());
		}
		puts("");											//* ���� 
	}
} 
