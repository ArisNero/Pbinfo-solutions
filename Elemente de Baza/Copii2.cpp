#include <iostream>
using namespace std;
int  F, B, n;
int main()
{
	cin >> F >> B >> n;
	cout << F *3*n + B*2*n;
}
// since the boys(B) read 2 pages per day and the girls(F) read 2 pages per day, we multiply the number of boys by 2 and again by n(the number of days), the number of girls by 3 and by again by n, and then me sum them. Multiplication has priority over sum, so first the compiler does the multiplication and the sum after. 