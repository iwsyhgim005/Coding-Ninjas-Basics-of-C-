/*
Terms of AP

Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

Input format :
	Integer x
Output format :
	Terms of series (separated by space)

Constraints :
	1 <= x <= 1,000

Sample Input 1 :
	10
Sample Output 1 :
	5 11 14 17 23 26 29 35 38 41

Sample Input 2 :
	4
Sample Output 2 :
	5 11 14 17
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

	int N;
	int res = 0, cnt = 0;
	cin >> N;

	for (int i = 1; i <= 1500; i++)
	{
		res = ((3 * i) + 2);
		if ((res % 4 != 0) and (cnt < N))
		{
			cout << res << " ";
			cnt++;
		}
	}

}





