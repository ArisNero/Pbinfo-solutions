#include <iostream>
#include <cmath>
using namespace std;
double a,s;
int main()
{
	cin >> a;
	s = pow(a, 2) + pow(a, 4);
	s = s * 3;
	s=s/(pow(a,2)+pow(a,4)+sqrt(pow(a,2)+pow(a,4)));
	s = s + sqrt(pow(a, 2) + pow(a, 4));
	cout << (int)s;
}
// we just calculate based on the formula