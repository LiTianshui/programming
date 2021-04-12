// 1-14 Monthly Expense
// 2021-04-12

#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int n, m;
int a[100002];
bool find(int top)								// ���������Ƿ��������� 
{
	int num = 1;
	int cur = 0;
	for (int i = 0; i < n; i++)
		if (cur + a[i] <= top) cur += a[i];		// ����������������ֵ�һ���� 
		else {
			num++;								// ���ֵܷ�һ�飬��������1 
			cur = a[i];							// ��ʼ��ʼ��������ܻ��� 
		}
	return (num <= m);
}

int main()
{
	while (cin >> n >> m)						// ����n��m 
	{
		int sum = 0;
		int ma = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);					// ����ÿ��Ļ��� 
			sum += a[i];
			ma = max(ma, a[i]);
		}
		int low = ma, high = sum, mid;			// ��ʼ���Ͻ���½� 
		while (low != high)
		{
			mid = (low + high) >> 1;			// ÿ�ν������Ϊ������ 
			if (find(mid)) high = mid;			// ��mid�������⣬�����Ϊ[low, mid] 
			else low = mid + 1;					// ���������Ϊ[mid+1, high] 
		}
		printf("%d\n", low);
	}
	return 0;
}
