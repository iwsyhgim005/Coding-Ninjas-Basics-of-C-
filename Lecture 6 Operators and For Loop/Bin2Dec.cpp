/*
Binary to decimal

Given a binary number as an integer N, convert it into decimal and print.

Input format :
	An integer N in the Binary Format
Output format :
	Corresponding Decimal number (as integer)

Constraints :
	0 <= N <= 10^9

Sample Input 1 :
	1100
Sample Output 1 :
	12

Sample Input 2 :
	111
Sample Output 2 :
	7
*/

#include<iostream>
#include <cmath>
using namespace std;
typedef long long int lli;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	lli N;
	cin >> N;
	lli dec = 0, rem = 0, i = 0;

	while (N > 0)
	{
		rem = (N % 10);
		dec += (rem * pow(2, i));
		N /= 10;
		i++;
	}

	cout << dec;

}





