// num_test.cpp -- use numeric test in for loop
// 2020-09-08

#include <iostream>
int main()
{
	using namespace std;
	cout << "Enter the starting coutdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)		// quits when i is 0
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";
	return 0;
}
