// 1-7 -- Password
// 2020-11-26

#include <iostream>
#include <string>
using namespace std;
char ans[30];
int t;
void solve(string s1, string s2)
{
	if (s1.length() == 0) return;				// 空二叉树
	if (s1.length() == 1)						// 只有一个结点 
	{
		ans[t++] = s1[0];
		return;
	}
	int tt = s2.find(s1[0]);					// 记录左子树结点个数的信息
	solve(s1.substr(1, tt), s2.substr(0, tt));	// 左子树的后序遍历
	solve(s1.substr(tt+1, s1.length()-tt-1),
		s2.substr(tt+1, s2.length()-tt-1));		// 右子树的后序遍历
	ans[t++] = s1[0]; 
}
int main()
{
	string stra, strb;
	while (cin >> stra >> strb)					// 输入前序遍历和中序遍历
	{
		int len = stra.length();
		t = 0;
		solve(stra, strb);						// 解决问题的函数，将后序遍历结果保存到ans数组
		ans[len] = '\0';
		cout << ans << endl; 
	}
	return 0;
}

