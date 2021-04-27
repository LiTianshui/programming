// bondini.cpp -- using escape sequences
// 2020-03-18

#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHyper\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	return 0;
}
