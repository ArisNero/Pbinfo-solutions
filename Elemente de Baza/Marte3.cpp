#include <iostream>
using namespace std;
int x, y, n,a,z,h,nr_ore_zile,rest;
int main()
{
	cin >> x >> y >> n; 
	nr_ore_zile = x * y;
	a = n / nr_ore_zile; cout << a << "\n";
	rest = n % nr_ore_zile; 
	z = rest / y;cout << z << "\n";
	h = rest%y;cout << h;
	
}
//we use the variable nr_ore_zile to see how many hours are in a day. then a represents the years needed to build n antennas.the variable rest is used to store the remaning hours that cannot be full years. then we use z to store how many days are in "rest" and y how many hours cannot make full days. 
