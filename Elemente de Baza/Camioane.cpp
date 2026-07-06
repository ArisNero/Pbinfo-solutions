#include <iostream>
using namespace std;
int t1, t2, n, m, z;
int main()
{
	cin >> t1 >> t2 >> n >> m >> z;
	cout << t1 * n * z + t2 * m * z;
}
//type 1 trucks can carry  n tons. so in z days they can carry t1*n*z. type 2 trucks can carry m tons, so in z days they can carry t2*m*z. then we sum them.