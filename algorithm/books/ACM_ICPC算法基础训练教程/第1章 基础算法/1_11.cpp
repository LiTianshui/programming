// 1-11 -- Ultra-QuickSort	有错误 
// 2020-11-26
// memset()函数：	https://www.runoob.com/cprogramming/c-function-memcpy.html	 

#include <iostream>
#include <string.h>
#include <stdio.h>
#define MAX 2147483647 

using namespace std;

int arr[500002], lef[500002], righ[500002];
long long sum;
void mergesort(int begin, int end)
{
	if (begin == end) return;		// 一个元素无序排行
	int mid = (begin+end) / 2;		// 分成两个子问题
	// 分别解决每个子问题
	mergesort(begin, mid);
	mergesort(mid, end);
	// 合并子问题的解
	memcpy(lef+1, arr+begin, (mid-begin+1)*4);
	memcpy(righ+1, arr+mid+1, (end-mid)*4);
	lef[mid-begin+2] = righ[end-mid+1] = MAX;
	int left_num = mid - begin + 1;
	int left_i = 1, right_i = 1;
	for (int i = begin; i <= end; i++)		// 归并过程计算逆序数对个数
	{
		if (lef[left_i] > righ[right_i])	// 在左边发现一个比右边大的数
		{
			arr[i] = righ[right_i++];
			sum += left_num;				// 就要在总数上增加左边剩余的数的个数
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
	while (scanf("%d", &n) && n)			// 输入数据个数
	{
		sum = 0;
		for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
		mergesort(1, n);
		printf("%lld\n", sum);
	}
	return 0;
}
