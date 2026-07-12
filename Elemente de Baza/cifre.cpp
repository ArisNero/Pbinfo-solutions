#include <iostream>
using namespace std;
int n, s;
int main()
{
	cin >> n;
	s = s + n % 10;
	s = s + n / 10 % 10;
	cout << s;
}
// n%10 is the units digit and n/10%10 is the tens digit