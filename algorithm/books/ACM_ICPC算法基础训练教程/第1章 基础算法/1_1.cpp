// 1-1 -- Counting Sheep 
// 2020-10-12

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, c = 1, count;
	string str;
	cin >> n;
	while (n--)
	{
		if (c > 1) cout << endl;		//相邻的两组输出之间包含一个空行
		cin >> m;
		count = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> str;
			if (str == "sheep") count++;
		}
		cout << "Case " << c++ << ": This list contains "
			 << count << " sheep." << endl;
	}
	return 0;
}
