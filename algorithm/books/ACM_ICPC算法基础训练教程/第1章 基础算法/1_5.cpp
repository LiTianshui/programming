// 1-5 -- Perfect Cubes
// 2020-11-26
// c++ Ƕ��forѭ����break������		https://blog.csdn.net/shanglianlm/article/details/87341879	 

#include <iostream>
using namespace std;
void print(int a, int b, int c, int d)
{
	// ���ո�ʽ���
	cout << "Cube = " << a << ", Type = ("
	<< b << ", " << c << ", " << d << ")" << endl; 
}

int main()
{
	for (int a = 6; a <= 200; a++)			// ö��a 
	{
		for (int b = 2; b < a; b++)			//ö��b
		{
			for (int c = b; c < a; c++)		//ö��c
			{
				for (int d = c; d < a; d++)	//ö��d 
				{
					if (b*b*b + c*c*c + d*d*d == a*a*a)	//��������
						print(a, b, c, d);
					if (b*b*b + c*c*c + d*d*d > a*a*a)
						break;
				}
			} 
		} 
	}
	return 0;
}
