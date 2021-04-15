// 2-4 Crazy Search
// 2021-04-15

#include <iostream>
#include <cstring>
#define N 16000003				// 最大总数 

bool hash[N];					// hash数组，只记录是否出现，因而用bool数组 
char w[N];						// 字符数组 
int id[500];					// 记录每一个字符的转化的数字 

int main()
{
	int n, nc, i, j;
	while (~ scanf("%d%d", &n, &nc))				// 输入 
	{
		memset(hash, false, sizeof(hash));			// 初始化 
		memset(id, -1, sizeof(id));
		int cnt = 0;
		scanf("%s", w);								// 输入字符串 
		int len = strlen(w);						// 字符串长度 
		for (i = 0; i < len && cnt < nc; i++)
		{
			if (id[w[i]] != -1) continue;
			id[w[i]] = cnt++;						// 记录没有出现过的字符所转化的数字 
		}
		int ans = 0;
		for (i = 0; i < len - n + 1; i++)
		{
			int s = 0;
			for (j = i; j < i + n; j++)
			{
				s = s * nc + id[w[j]];				// 将字符串转化为nc进制的数 
			}
			if (hash[s]) continue;
			ans++;									// 统计个数 
			hash[s] = true;
		}
		printf("%d\n", ans);
	}
} 
