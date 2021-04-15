// 2-4 Crazy Search
// 2021-04-15

#include <iostream>
#include <cstring>
#define N 16000003				// ������� 

bool hash[N];					// hash���飬ֻ��¼�Ƿ���֣������bool���� 
char w[N];						// �ַ����� 
int id[500];					// ��¼ÿһ���ַ���ת�������� 

int main()
{
	int n, nc, i, j;
	while (~ scanf("%d%d", &n, &nc))				// ���� 
	{
		memset(hash, false, sizeof(hash));			// ��ʼ�� 
		memset(id, -1, sizeof(id));
		int cnt = 0;
		scanf("%s", w);								// �����ַ��� 
		int len = strlen(w);						// �ַ������� 
		for (i = 0; i < len && cnt < nc; i++)
		{
			if (id[w[i]] != -1) continue;
			id[w[i]] = cnt++;						// ��¼û�г��ֹ����ַ���ת�������� 
		}
		int ans = 0;
		for (i = 0; i < len - n + 1; i++)
		{
			int s = 0;
			for (j = i; j < i + n; j++)
			{
				s = s * nc + id[w[j]];				// ���ַ���ת��Ϊnc���Ƶ��� 
			}
			if (hash[s]) continue;
			ans++;									// ͳ�Ƹ��� 
			hash[s] = true;
		}
		printf("%d\n", ans);
	}
} 
