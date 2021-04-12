// 1-13 Quoit Design
// 2021-04-12
// 最近点对问题：	 https://blog.csdn.net/lishuhuakai/article/details/9161843
// 最近点对+分治:		 https://www.cnblogs.com/shanyr/p/5206899.html

#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <stdio.h>

using namespace std;
double MAX = 1e10;
int a,b;				// a,b返回的是最近的点的编号，从0开始
struct Node {
	double x, y;
	int key;
}
ar[100005], br[100005];
bool cmpx(Node a, Node b) {		// 按x坐标比较 
	return a.x < b.x;
}
bool cmpy(Node a, Node b) {		// 按y坐标比较 
	return a.y < b.y;
}
double min(double a, double b) {	// 求两个数的最小值 
	return a < b ? a : b;
} 
double dis(Node a, Node b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); 
} 
double cal(int s, int e) {
	int mid, i, j, tail = 0;
	double d;
	if (s == e) return MAX;			// 该部分只有一个点
	mid = (s + e) / 2;
	d = min(cal(s, mid), cal(mid+1, e));	// 分别求左右两边的最小距离
	for (i = mid; i >= s && ar[mid].x - ar[i].x < d; i--)
	{
		br[tail++] = ar[i];
	} 
	for (i = mid+1; i < e && ar[mid].x - ar[i].x < d; i++)
	{
		br[tail++] = ar[i];
	}
	sort(br, br+tail, cmpy);		// 对矩阵内的点按照y坐标排序 
	for (i = 0; i < tail; i++)		// 考虑矩形内的任意两个点的距离 
	{
		for (j = i+1; j < tail && br[j].y - br[i].y < d; j++)
		{
			if (d > dis(br[i], br[j]))			// 找到更小的距离，则更新结果 
			{
				a = min(br[i].key, br[j].key);
				b = br[i].key + br[j].key - a;
				d = min(d, dis(br[i], br[j]));
			} 
		}
	} 
	return d;
}

int main()
{
	int n;
	while (cin >> n && n)						// 输入点的个数 
	{
		for (int i = 0; i < n; i++)				// 输入n个点 
		{
			ar[i].key = i + 1;
			scanf("%lf%lf", &ar[i].x, &ar[i].y);
		}
		sort(ar, ar+n, cmpx);					// 按照x坐标排序 
		double d = cal(0, n);
		printf("%.2lf\n", d / 2.0);
	}
	return 0;
}
