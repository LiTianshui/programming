// textin4.cpp -- reading chars with cin.get()
// 2020-09-08

#include <iostream>
int main(void)
{
	using namespace std;
	int ch;							// should be int, not char
	int count = 0;
	
	while ((ch = cin.get()) != EOF)	// test for end-of-file
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";
	return 0;
}
