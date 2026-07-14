#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long n, l;
double A;
int main()
{
	cin >> n >> l;
	A = (n *pow(l,2)) / (4 * tan( M_PI/ n));
	cout << fixed << setprecision(2) << A;
}
// this solution is only 50 points ; we use #define _USE_MATH_DEFINES and the library <cmath> in roder to use the value of  pi
 