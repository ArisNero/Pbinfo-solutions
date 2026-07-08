#include <iostream>
using namespace std;
int a, b, c, s;
int main()
{
	cin >> a >> b >> c;
	for (int i = a;i <= b;i++)s = s + i;
	cout << s << " ";
	s = 0;
	for (int i = b;i <= c;i++)s = s + i;
	cout << s << " ";
	s = 0;
	for (int i = a;i <= c;i++)s = s + i;
	cout << s;
}
// we use a variable s to store the sums. we use three basic for loops. i goes from a to b. so if a is 1 and b is 6, i will be 1,2,3,4,5,6; s=s+i means that s will get the sum of the previos s and the current i. then we display s and we initialize s with 0. we repet this process.