#include <iostream>
using namespace std;
int x, y;
int main()
{
	cin >> x >> y;
	cout << y * 3 - x;
}
// x+?=y*3(we need to find ?)we first calculate y*3. then we substract x. cout << y * 3 - x; does exactly that. we could have used a variable to calculate y * 3 - x and then cout<<(variable name)