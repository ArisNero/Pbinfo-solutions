#include <iostream>
using namespace std;
int r, g, b;
int main()
{
	cin >> r >> g >> b;
	cout << 255 - r << " " << 255 - g << " " << 255 - b;
}
// we just subtract r,g,b from 255 and we display the results