#include <iostream>
using namespace std;
int x, y,s;
int main()
{
	cin >> x >> y;
	s = x + y;
	cout << s % 10;
	  
}
//we use a variable s to store the sum of x+y; then we use %10 to get the last figure of the sum. what %10 does is basically divide the sum to 10 and takes the remainder. so 19%10 is 9, 123%10 is 3 123456%10 is 6 and so on
/*
another way to write this part of the code
	s = x + y;
		cout << s % 10;
is cout<<(x+y)%10; 
without the (), the code would first make y%10 and the result would be summed with x. so () is used to first tell the compiler to first make the sum of x+y

*/