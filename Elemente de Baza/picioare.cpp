#include <iostream>
using namespace std;
int G, O, C, P;
int main()
{
	cin >> G >> O;
	C = G + O;
	P = G * 2 + O * 4;
	cout << C << " " << P;
}
// C is G+O since both the sheep and the chickens have only 1 head. P is the number of chickens *2(they have 2 legs) + the number of sheep *4(they have four legs)