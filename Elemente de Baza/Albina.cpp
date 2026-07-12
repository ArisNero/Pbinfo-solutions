#include <iostream>
using namespace std;
long n, C;
int main()
{
	cin >> n;
	C = 1;
	for (int i = 2;i <= n;i++)C = C + 6*(i-1);
	cout << C;
}
//on day 1, the bee lays honey in only 1 room. so C=1; then from day 2(i=2), the bee lays honey in 6*(i-1) rooms(that is how the hexagon is built).