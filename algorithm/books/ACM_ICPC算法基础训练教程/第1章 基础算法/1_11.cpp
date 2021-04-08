// 1-11 -- Ultra-QuickSort	�д��� 
// 2020-11-26
// memset()������	https://www.runoob.com/cprogramming/c-function-memcpy.html	 

#include <iostream>
#include <string.h>
#include <stdio.h>
#define MAX 2147483647 

using namespace std;

int arr[500002], lef[500002], righ[500002];
long long sum;
void mergesort(int begin, int end)
{
	if (begin == end) return;		// һ��Ԫ����������
	int mid = (begin+end) / 2;		// �ֳ�����������
	// �ֱ���ÿ��������
	mergesort(begin, mid);
	mergesort(mid, end);
	// �ϲ�������Ľ�
	memcpy(lef+1, arr+begin, (mid-begin+1)*4);
	memcpy(righ+1, arr+mid+1, (end-mid)*4);
	lef[mid-begin+2] = righ[end-mid+1] = MAX;
	int left_num = mid - begin + 1;
	int left_i = 1, right_i = 1;
	for (int i = begin; i <= end; i++)		// �鲢���̼����������Ը���
	{
		if (lef[left_i] > righ[right_i])	// ����߷���һ�����ұߴ����
		{
			arr[i] = righ[right_i++];
			sum += left_num;				// ��Ҫ���������������ʣ������ĸ���
		}
		else
		{
			arr[i] = lef[left_i++];
			left_num--;
		}
	}
}
int main()
{
	int n;
	while (scanf("%d", &n) && n)			// �������ݸ���
	{
		sum = 0;
		for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
		mergesort(1, n);
		printf("%lld\n", sum);
	}
	return 0;
}
