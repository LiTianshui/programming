// 1-7 -- Password
// 2020-11-26

#include <iostream>
#include <string>
using namespace std;
char ans[30];
int t;
void solve(string s1, string s2)
{
	if (s1.length() == 0) return;				// �ն�����
	if (s1.length() == 1)						// ֻ��һ����� 
	{
		ans[t++] = s1[0];
		return;
	}
	int tt = s2.find(s1[0]);					// ��¼����������������Ϣ
	solve(s1.substr(1, tt), s2.substr(0, tt));	// �������ĺ������
	solve(s1.substr(tt+1, s1.length()-tt-1),
		s2.substr(tt+1, s2.length()-tt-1));		// �������ĺ������
	ans[t++] = s1[0]; 
}
int main()
{
	string stra, strb;
	while (cin >> stra >> strb)					// ����ǰ��������������
	{
		int len = stra.length();
		t = 0;
		solve(stra, strb);						// �������ĺ��������������������浽ans����
		ans[len] = '\0';
		cout << ans << endl; 
	}
	return 0;
}

