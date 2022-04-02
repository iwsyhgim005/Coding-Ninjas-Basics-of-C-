/*
Reverse of a number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them.
For e.g., reverse of 10400 will be 401 instead of 00401.

Input format :
	Integer N
Output format :
	Corresponding reverse number

Constraints:
	0 <= N < 10^8

Sample Input 1 :
	1234
Sample Output 1 :
	4321

Sample Input 2 :
	1980
Sample Output 2 :
	891
*/

#include<iostream>
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
	lli rev = 0, rem = 0;

	while (N > 0)
	{
		rem = (N % 10);
		rev = ((rev * 10) + rem);
		N /= 10;
	}

	cout << rev;

}





