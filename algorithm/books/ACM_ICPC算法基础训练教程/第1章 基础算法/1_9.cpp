// 1-9 -- Wooden Sticks
// 2020-11-26
// C++ memset()函数：	 https://blog.csdn.net/dan15188387481/article/details/49621447/

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
// 描述木桩的类
class Node
{
	public:
		int x, y;
		Node() {}
		bool operator<(const Node n) const	// 重载小于号，便于排序 
		{
			if (x == n.x) return y < n.y;
			return x < n.x; 
		}
};

Node node[5005];
int cases, n, flag[5005];
int main()
{
	scanf("%d", &cases);						// 输入样例数
	while (cases--)
	{
		scanf("%d", &n);						// 输入木桩数
		for (int i = 0; i < n; i++)
			scanf("%d%d", &node[i].x, &node[i].y);	// 每个木桩的长度与重量
		sort(node, node+n);						// 升序排序
		memset(flag, 0, sizeof(flag));			// 表示某个木桩是否属于某个组，0表示没有
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (flag[i] == 0)					// 该木桩暂时不属于某个组 
			{
				int p = node[i].y;
				for (int j = i; j < n; j++)		// 尽量找到更多的可以归为同一组的木桩 
				{
					if (flag[j] == 0 && node[j].y >= p)
					{
						p = node[j].y;
						flag[j] = 1;
					} 
				}
				ans++;
			}
		}
		printf("%d\n", ans);					// 输出结果 
	}
	return 0; 
}
