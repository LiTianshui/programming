// 2-3 Middle Number
// 2021-04-14

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 110004

struct Heap								// 建立堆的结构体 
{
	int da[N], size;
	void clear()						// 堆的初始化 
	{
		size = 0;
	}
	void insert(int v, int id)			// 堆的插入 
	{
		da[++size] = v;					// 将元素加到堆的最后一个位置 
		int tm = size;
		while (tm > 1)					// 进行堆的调整 
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
	void update(int id, int cur)		// 堆的调整 
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
	int gettop(int id)					// 取出堆顶元素 
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
}h[2];	// h[0]表示小顶堆，h[1]表示大顶堆，小顶堆存原序列中较大元素，大顶堆存原序列中较小元素 
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
	if (h[1].size > h[0].size)				// 大顶堆size大于小顶堆时，就要往小顶堆加入元素 
	{
		if (v < tm)							// 根据v与大顶堆的堆顶元素的大小关系来做处理 
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
	else									// 当小顶堆size大于等于大顶堆时，就要往大顶堆中加入元素 
	{
		if (v > tp)							// 根据v与小顶堆堆顶元素的大小关系来做对应处理 
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
	return h[1].da[1];						// 输出大顶堆的根，就是序列的中位数 
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
