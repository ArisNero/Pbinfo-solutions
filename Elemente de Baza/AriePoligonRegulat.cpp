#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>
using namespace std;
long n, l;
double A;
int main()
{
	cin >> n >> l;
	A = (n * l*l*1) / (4 * tan( M_PI/ n));
	cout << fixed << setprecision(2) << A;
}