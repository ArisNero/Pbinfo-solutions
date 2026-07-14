#include <iostream>
using namespace std;
double a,a2;
int main()
{
	cin >> a;
	a2 = a - (int)a;
	a2 = a2 * 10;
	cout << (int)a2;
}//what we do is we eliminate the whole part of a, then we multipy what remains by 10, and we got something like x.abcde... then we convert it to int and we display the result