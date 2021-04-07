// 1-9 -- Wooden Sticks
// 2020-11-26
// C++ memset()������	 https://blog.csdn.net/dan15188387481/article/details/49621447/

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
// ����ľ׮����
class Node
{
	public:
		int x, y;
		Node() {}
		bool operator<(const Node n) const	// ����С�ںţ��������� 
		{
			if (x == n.x) return y < n.y;
			return x < n.x; 
		}
};

Node node[5005];
int cases, n, flag[5005];
int main()
{
	scanf("%d", &cases);						// ����������
	while (cases--)
	{
		scanf("%d", &n);						// ����ľ׮��
		for (int i = 0; i < n; i++)
			scanf("%d%d", &node[i].x, &node[i].y);	// ÿ��ľ׮�ĳ���������
		sort(node, node+n);						// ��������
		memset(flag, 0, sizeof(flag));			// ��ʾĳ��ľ׮�Ƿ�����ĳ���飬0��ʾû��
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (flag[i] == 0)					// ��ľ׮��ʱ������ĳ���� 
			{
				int p = node[i].y;
				for (int j = i; j < n; j++)		// �����ҵ�����Ŀ��Թ�Ϊͬһ���ľ׮ 
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
		printf("%d\n", ans);					// ������ 
	}
	return 0; 
}
