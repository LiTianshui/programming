// 1-8 -- Tian Ji - The Horse Racing
// 2020-11-26

#include <iostream>
using namespace std;
int n;
int a[1000], b[1000];
int main()
{
	while (cin >> n && n)				// 输入每方有多少匹马
	{
		for (int i = 0; i < n; i++)		// 田忌每匹马的速度 
			cin >> a[i];
		for (int i = 0; i < n; i++)		// 齐王每匹马的速度
			cin >> b[i];
		int t, ans = 0;
		for (int i = 1; i < n; i++)		// 对两组速度进行降序排序（此处为冒泡排序）
			for (int j = 0; j < n-i; j++)	// 还有许多效率更高的排序算法
			{
				if (a[j] < a[j+1])
				{
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
				if (b[j] < b[j+1])
				{
					t = b[j];
					b[j] = b[j+1];
					b[j+1] = t;
				}
			}
		// 表示田忌（1）和齐王（2）最差的吗（r）与最好的马（l）的下标
		int l1 = 0, l2 = 0, r1 = n-1, r2 = n-1;
		while (l1 <= r1)
		{
			if (a[l1] > b[l2])
			{
				ans += 200;					// 当前田忌最好的马比齐王最好的马更好
				l1++;						// 用最好的马对齐王最好的马，赢
				l2++; 
			}
			else if (a[l1] < b[l2])
			{
				ans -= 200;					//* 当前田忌最好的马不如齐王最好的马
				r1--;						// 用最差的马对齐王最好的马，输 
				l2++; 
			}
			else if (a[l1] == b[l2] && a[r1] > b[r2])
			{
				ans += 200;					// 当前最好的马相同，但最差的马比齐王最差的马好
				r1--;						// 用最差的马对齐齐王最差的马， 赢
				r2--; 
			}
			else if (a[l1] == b[l2] && a[r1] <= b[r2])		//* 考虑到了最差的马与齐王最好的马相同的情况，此时只改变r1,l2，不改变ans 
			{
				if (a[r1]<b[l2]) ans -= 200;				// 当前田忌最差的马不比齐王最差的马好 
				r1--;										//* 用最差的马对齐王最好的马， 输或者不输不赢 
				l2++; 
			}
		}
		cout << ans << endl;				// 输出田忌最多可以赢得的具体金数 
	}
	return 0; 
}
