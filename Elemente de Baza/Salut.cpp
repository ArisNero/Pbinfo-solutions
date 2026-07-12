#include <iostream>
using namespace std;
long n,stangeri;
int main()
{
	cin >> n;
	for (int i = 1;i < n;i++)
	{
		for (int j = i + 1;j <= n;j++)
			stangeri++;
	}
	cout << stangeri;
}
// the first shakes hands with the second,the third....and so on. the second shakes hands wth the third,the fourth.... and so on. that is why we use two for loops. i is the current friend, j is the handshakes. stangeri++ adds 1 to the current value of the variable "strangeri"