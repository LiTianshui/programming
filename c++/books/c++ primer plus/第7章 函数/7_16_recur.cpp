// recur.cpp -- using recursion
// 2020-09-13

#include <iostream>
void countdown(int n);

int main()
{
	countdown(4);			// call the recursive function
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Counting down ... " << n << endl;
	if (n > 0)
		countdown(n-1);		// function calls itself
	cout << n << ": Kaboom!\n";
}
