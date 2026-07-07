#include <iostream>
using namespace std;
int B, S,C,P;
int main()
{
	cin >> B >> S;
	C = S / B;
	P = B * (C + 1) - S;
	cout << C << " " << P;
}
// what we do here is pretty simple. we calculate the maximum of boxes that Gigel can buy by doing S/B. that value will be C. we calculate P this way: to be able to find how much more money Gigel need, we need to multiply the price per box by C+1(one more box) and then we substract the current money Gigel has. after we just print C and P.
