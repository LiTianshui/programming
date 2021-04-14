// 2-3 Middle Number
// 2021-04-14

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 110004

struct Heap								// �����ѵĽṹ�� 
{
	int da[N], size;
	void clear()						// �ѵĳ�ʼ�� 
	{
		size = 0;
	}
	void insert(int v, int id)			// �ѵĲ��� 
	{
		da[++size] = v;					// ��Ԫ�ؼӵ��ѵ����һ��λ�� 
		int tm = size;
		while (tm > 1)					// ���жѵĵ��� 
		{
			if (id)
			{
				if (da[tm] > da[tm/2]) swap(da[tm], da[tm/2]);
				else break;
			}
			else
			{
				if (da[tm] < da[tm/2]) swap(da[tm], da[tm/2]);
				else break;
			}
			tm /= 2;
		}
	}
	void update(int id, int cur)		// �ѵĵ��� 
	{
		int mx = cur;
		if (id)
		{
			if (2 * cur <= size && da[2*cur] > da[mx]) mx = cur * 2;
			if (2 * cur + 1 <= size && da[2*cur+1] > da[mx]) mx = cur * 2 + 1;
		}
		else
		{
			if (2 * cur <= size && da[2*cur] < da[mx]) mx = cur * 2;
			if (2 * cur + 1 <= size && da[2*cur+1] < da[mx]) mx = cur * 2 + 1;
		} 
		if (mx != cur)
		{
			swap(da[cur], da[mx]);
			update(id, mx);
		}
	}
	int gettop(int id)					// ȡ���Ѷ�Ԫ�� 
	{
		int tm = da[1];
		if (size == 1)
		{
			size = 0;
			return tm;
		}
		da[1] = da[size--];
		update(id, 1);
		return tm;
	}
}h[2];	// h[0]��ʾС���ѣ�h[1]��ʾ�󶥶ѣ�С���Ѵ�ԭ�����нϴ�Ԫ�أ��󶥶Ѵ�ԭ�����н�СԪ�� 
void add(int v)
{
	if (h[1].size == 0)
	{
		h[1].insert(v, 1);
		return;
	}
	else if (h[0].size == 0)
	{
		if (v < h[1].da[1])
		{
			int tm = h[1].gettop(1);
			h[1].insert(v, 1);
			v = tm;
		}
		h[0].insert(v, 0);
		return;
	}
	int tm = h[1].da[1], tp = h[0].da[1];
	if (h[1].size > h[0].size)				// �󶥶�size����С����ʱ����Ҫ��С���Ѽ���Ԫ�� 
	{
		if (v < tm)							// ����v��󶥶ѵĶѶ�Ԫ�صĴ�С��ϵ�������� 
		{
			h[1].gettop(1);
			h[1].insert(v, 1);
			h[0].insert(tm, 0);
		}
		else
		{
			h[0].insert(v, 0);
		}
	}
	else									// ��С����size���ڵ��ڴ󶥶�ʱ����Ҫ���󶥶��м���Ԫ�� 
	{
		if (v > tp)							// ����v��С���ѶѶ�Ԫ�صĴ�С��ϵ������Ӧ���� 
		{
			h[0].gettop(0);
			h[0].insert(v, 0);
			h[1].insert(tp, 1);
		}
		else
		{
			h[1].insert(v, 1);
		}
	}
}
int mid()
{
	return h[1].da[1];						// ����󶥶ѵĸ����������е���λ�� 
}
int main()
{
	char p[5];
	int T, n, m, i, j;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		h[0].clear(), h[1].clear();
		for (i = 0; i < n; i++)
		{
			scanf("%d", &j);
			add(j);
		}
		scanf("%d", &m);
		while (m--)
		{
			scanf("%s", p);
			if (p[0] == 'a')
			{
				scanf("%d", &j);
				add(j);
			}
			else printf("%d\n", mid());
		}
	}
}
