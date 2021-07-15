// condit.cpp -- using the conditional operator
// 2020-09-09

#include <iostream>
int main()
{
	using namespace std;
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;	// c = a if a > b, else c = b
	cout << " is " << c << endl;
	return 0;
}
