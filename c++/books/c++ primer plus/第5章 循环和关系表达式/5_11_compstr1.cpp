// compstr1.cpp -- comparing strings using arrays
// 2020-09-08

#include <iostream>
#include <cstring>		// prototype for strcmp()
int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop end, word is " << word << endl;
	return 0;
}
