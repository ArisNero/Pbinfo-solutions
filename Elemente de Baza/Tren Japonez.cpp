#include <iostream>
using namespace std;
int n, m,I;
int main()
{
	cin >> n >> m; 
	I = m / n;
	cout << I;
}
// because each carriage holds the same amount of load, the number of carriages is simply m/n. the mass load divided by the max load of a carriage.