// 1-4 -- 猜数字
// 2020-11-25

#include <iostream>
#include <algorithm>
using namespace std;
// 第i次回答gameboy猜这个数为a[i]，猜对了b[i]个数，其中c[i]个在正确的位置上
int n, a[101], b[101], c[101];
int ans, num;
bool check(int x, int y)
{
	// 4位数x是否符合第y次问答的结果
	int s[4], t[4], pa = a[y], pb = b[y], pc = c[y];
	for (int i = 3; i >= 0; i--)
		s[i] = x % 10, x /= 10, t[i] = pa % 10, pa /= 10;
	// 检查猜对的数字个数和在正确位置上的个数是否符合
	int correct_num = 0, correct_pos = 0;
	for (int i = 0; i < 4; i++)
		if (s[i] == t[i]) correct_pos++;	// 在正确位置上的个数
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (t[j] == s[i]) 
			{
				correct_num++;					// 猜对的数字个数
				t[j] = -1;						// 防止同一个数字被使用多次
				break; 
			}
	return correct_num == pb && correct_pos == pc;
}
int main()
{
	while (cin >> n && n)					// 该组有n次回答 
	{
		for (int i = 0; i < n; i++)
			cin >> a[i] >> b[i] >> c[i];
		num = 0;							// 枚举范围内的每个值，判断是否符合条件
		for (int i = 1000; i < 10000 && num < 2; i++)
		{
			int j = 0;
			for (; j < n; j++) if (!check(i,j)) break;
			if (j == n) num++, ans = i;
		}
		if (num == 1) cout << ans << endl;	// 题目要求有且只有一组符合
		else cout << "Not sure" << endl; 
	}
	return 0;
}
