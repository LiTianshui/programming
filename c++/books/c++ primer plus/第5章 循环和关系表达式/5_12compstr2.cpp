// compstr2.cpp -- comparing strings using arrays
// 2020-09-08

#include <iostream>
#include <cstring>		// string class
int main()
{
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
