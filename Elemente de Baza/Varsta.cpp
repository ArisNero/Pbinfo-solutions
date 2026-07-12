#include <iostream>
#include <iomanip>
using namespace std;
float a, b, c, d,x;
int main()
{
	cin >> a >> b >> c >> d;
	x = (b * c - a * d) / (d - c);
	cout << fixed<<setprecision(2)<<x;
}
// so this code uses the library <iomanip> to be able to disply x accordingly. the formula is deducted from (x+a)/ (x+b)=c/d
// THE POINTS GIVEN FOR THIS SOLUTION ARE 80, NOT 100
