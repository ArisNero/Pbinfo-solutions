#include <iostream>
using namespace std;
int C;
int main()
{
	cin >> C;
	cout << C + (C * 2) + (C * 2 * 2);
}
// we take the number of dogs, multiply it by 2, and that is the number of cats. then we take the number of cats ( which is C*2) and we multply it by 2 again. then we sum those numbers.