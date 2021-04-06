// 1-5 -- Perfect Cubes
// 2020-11-26
// c++ 嵌套for循环中break跳出：		https://blog.csdn.net/shanglianlm/article/details/87341879	 

#include <iostream>
using namespace std;
void print(int a, int b, int c, int d)
{
	// 按照格式输出
	cout << "Cube = " << a << ", Type = ("
	<< b << ", " << c << ", " << d << ")" << endl; 
}

int main()
{
	for (int a = 6; a <= 200; a++)			// 枚举a 
	{
		for (int b = 2; b < a; b++)			//枚举b
		{
			for (int c = b; c < a; c++)		//枚举c
			{
				for (int d = c; d < a; d++)	//枚举d 
				{
					if (b*b*b + c*c*c + d*d*d == a*a*a)	//符合条件
						print(a, b, c, d);
					if (b*b*b + c*c*c + d*d*d > a*a*a)
						break;
				}
			} 
		} 
	}
	return 0;
}
