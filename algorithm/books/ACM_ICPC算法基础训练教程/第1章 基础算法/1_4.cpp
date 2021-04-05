// 1-4 -- ������
// 2020-11-25

#include <iostream>
#include <algorithm>
using namespace std;
// ��i�λش�gameboy�������Ϊa[i]���¶���b[i]����������c[i]������ȷ��λ����
int n, a[101], b[101], c[101];
int ans, num;
bool check(int x, int y)
{
	// 4λ��x�Ƿ���ϵ�y���ʴ�Ľ��
	int s[4], t[4], pa = a[y], pb = b[y], pc = c[y];
	for (int i = 3; i >= 0; i--)
		s[i] = x % 10, x /= 10, t[i] = pa % 10, pa /= 10;
	// ���¶Ե����ָ���������ȷλ���ϵĸ����Ƿ����
	int correct_num = 0, correct_pos = 0;
	for (int i = 0; i < 4; i++)
		if (s[i] == t[i]) correct_pos++;	// ����ȷλ���ϵĸ���
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (t[j] == s[i]) 
			{
				correct_num++;					// �¶Ե����ָ���
				t[j] = -1;						// ��ֹͬһ�����ֱ�ʹ�ö��
				break; 
			}
	return correct_num == pb && correct_pos == pc;
}
int main()
{
	while (cin >> n && n)					// ������n�λش� 
	{
		for (int i = 0; i < n; i++)
			cin >> a[i] >> b[i] >> c[i];
		num = 0;							// ö�ٷ�Χ�ڵ�ÿ��ֵ���ж��Ƿ��������
		for (int i = 1000; i < 10000 && num < 2; i++)
		{
			int j = 0;
			for (; j < n; j++) if (!check(i,j)) break;
			if (j == n) num++, ans = i;
		}
		if (num == 1) cout << ans << endl;	// ��ĿҪ������ֻ��һ�����
		else cout << "Not sure" << endl; 
	}
	return 0;
}
