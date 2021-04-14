// 2-2 Rails
// 2021-04-14

#include <iostream>
using namespace std;
#define N 1002											// 定义最大火车数量的范围 
int a[N], b[N], sk[N];
int main()
{
	int n, i, j, top;
	for (i = 0; i < N; i++) a[i] = i + 1;				// 对a数组进行初始化 
	while (cin >> n && n)
	{
		while (cin >> b[0] && b[0])
		{
			for (i = 1; i < n; i++) cin >> b[i];		// 输入序列 
			top = 0, j = 1;
			for (i = 0; i < n && j <= n + 1;)			// 模拟栈的过程 
			{
				if (j == b[i])	// 若当前火车标号与当前i位置的标号相同，则进行下一位置的判断 
				{
					j++, i++;
				}
				else if (top && sk[top-1] == b[i])	// 否则，判断栈顶元素是否符合 
				{
					top--, i++;
				}
				else								// 都不符合就进栈 
				{
					sk[top++] = j++;
				}
			}
			if (i < n) cout << "No\n";				// 最后，判断是否全部满足 
			else cout << "Yes\n";
		}
		cout << endl;
	}
	return 0; 
} 
