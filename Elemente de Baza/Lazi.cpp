#include <iostream>
using namespace std;
int l, h;
int main()
{
	cin >> l >> h;
	cout << h / l;
}
// we simply divide h with l. the logic si simple: when we stack cubes, the height of the cubes must be lower or egual to h. if h si exactly divisible by l, then the number of cubes is h/l; else the number of cubes is the whole part of the divison
