#include <iostream>
using namespace std;
long N, M,taieturi;
int main()
{
	cin >> N >> M;
	taieturi = N - 1;
	taieturi = taieturi + (N * (M - 1));
	cout << taieturi;
}
// first we will cut the paper horizontally. we need to make N-1 cuts. then we take take each piece of  paper and we cut it vertically. We need to make M-1 cuts. but there are N such pieces of paper so we nned to multiply N with M-1. 
//Tip : Draw an example 