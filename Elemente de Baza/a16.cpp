#include<iostream>
#include <cmath>
using namespace std;
long long a;
int main()
{
	cin >> a;
	cout << (long long)pow(a, 16);
}
// we use the <cmath> library to be able to use pow. pow is a function that multiply the number by itself the value introduced. in this case it multiplies a by itself 16 times. (long long) converts the result into a long long type, because the result of pow is a type double result.