// 1-6 -- ��С������
// 2020-11-26
// ŷ������㷨(������Լ�������ʷ���)�Լ�ԭ����չ��  https://blog.csdn.net/qq_25847123/article/details/95753295
// ���Լ��������С�������������������ĳ˻���		 https://zhidao.baidu.com/question/622079861068583172.html

#include <iostream>
using namespace std;
// ����ŷ������㷨�������Լ��
int gcd(int a, int b)
{
	if (a < b) swap(a, b);			// ��֤�㷨����
	if (a % b == 0) return b;
	return gcd(b, a%b); 
}
int main()
{
	int a, b;
	while(cin >> a >> b)			// �����������������ļ�βʱ����ѭ�� 
	{
		cout << a * b / gcd(a, b) << endl;
	}
	return 0;
}
