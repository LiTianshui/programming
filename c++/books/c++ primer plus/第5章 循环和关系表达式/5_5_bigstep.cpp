// bigstep.cpp -- count as directed
// 2020-09-08

#include <iostream>
int main()
{
	using std::cout;	// a using declaration
	using std::cin;
	using std::endl;
	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;
}
