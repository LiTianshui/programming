// 2-2 Rails
// 2021-04-14

#include <iostream>
using namespace std;
#define N 1002											// �������������ķ�Χ 
int a[N], b[N], sk[N];
int main()
{
	int n, i, j, top;
	for (i = 0; i < N; i++) a[i] = i + 1;				// ��a������г�ʼ�� 
	while (cin >> n && n)
	{
		while (cin >> b[0] && b[0])
		{
			for (i = 1; i < n; i++) cin >> b[i];		// �������� 
			top = 0, j = 1;
			for (i = 0; i < n && j <= n + 1;)			// ģ��ջ�Ĺ��� 
			{
				if (j == b[i])	// ����ǰ�𳵱���뵱ǰiλ�õı����ͬ���������һλ�õ��ж� 
				{
					j++, i++;
				}
				else if (top && sk[top-1] == b[i])	// �����ж�ջ��Ԫ���Ƿ���� 
				{
					top--, i++;
				}
				else								// �������Ͼͽ�ջ 
				{
					sk[top++] = j++;
				}
			}
			if (i < n) cout << "No\n";				// ����ж��Ƿ�ȫ������ 
			else cout << "Yes\n";
		}
		cout << endl;
	}
	return 0; 
} 
