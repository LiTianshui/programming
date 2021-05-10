// dowhile.cpp -- exit-condition loop
// 2020-09-08

#include <iostream>
int main()
{
	using namespace std;
	int n;
	
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;		// excute body
	} while (n != 7);	// then test
	cout << "Yes, 7 is my favorite.\n";
	return 0;
}
