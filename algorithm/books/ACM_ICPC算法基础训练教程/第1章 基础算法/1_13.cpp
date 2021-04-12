// 1-13 Quoit Design
// 2021-04-12
// ���������⣺	 https://blog.csdn.net/lishuhuakai/article/details/9161843
// ������+����:		 https://www.cnblogs.com/shanyr/p/5206899.html

#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <stdio.h>

using namespace std;
double MAX = 1e10;
int a,b;				// a,b���ص�������ĵ�ı�ţ���0��ʼ
struct Node {
	double x, y;
	int key;
}
ar[100005], br[100005];
bool cmpx(Node a, Node b) {		// ��x����Ƚ� 
	return a.x < b.x;
}
bool cmpy(Node a, Node b) {		// ��y����Ƚ� 
	return a.y < b.y;
}
double min(double a, double b) {	// ������������Сֵ 
	return a < b ? a : b;
} 
double dis(Node a, Node b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); 
} 
double cal(int s, int e) {
	int mid, i, j, tail = 0;
	double d;
	if (s == e) return MAX;			// �ò���ֻ��һ����
	mid = (s + e) / 2;
	d = min(cal(s, mid), cal(mid+1, e));	// �ֱ����������ߵ���С����
	for (i = mid; i >= s && ar[mid].x - ar[i].x < d; i--)
	{
		br[tail++] = ar[i];
	} 
	for (i = mid+1; i < e && ar[mid].x - ar[i].x < d; i++)
	{
		br[tail++] = ar[i];
	}
	sort(br, br+tail, cmpy);		// �Ծ����ڵĵ㰴��y�������� 
	for (i = 0; i < tail; i++)		// ���Ǿ����ڵ�����������ľ��� 
	{
		for (j = i+1; j < tail && br[j].y - br[i].y < d; j++)
		{
			if (d > dis(br[i], br[j]))			// �ҵ���С�ľ��룬����½�� 
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
	while (cin >> n && n)						// �����ĸ��� 
	{
		for (int i = 0; i < n; i++)				// ����n���� 
		{
			ar[i].key = i + 1;
			scanf("%lf%lf", &ar[i].x, &ar[i].y);
		}
		sort(ar, ar+n, cmpx);					// ����x�������� 
		double d = cal(0, n);
		printf("%.2lf\n", d / 2.0);
	}
	return 0;
}
