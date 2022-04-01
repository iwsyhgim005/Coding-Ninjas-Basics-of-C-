/*
All Prime Numbers

Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

Input Format :
	Integer N
Output Format :
	Prime numbers in different lines

Constraints :
	1 <= N <= 100

Sample Input 1:
	9
Sample Output 1:
		2
		3
		5
		7

Sample Input 2:
	20
Sample Output 2:
		2
		3
		5
		7
		11
		13
		17
		19
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
	bool flag;
	cin >> N;

	for ( int i = 2; i <= N; i++)
	{
		flag = false;
		for ( int j = 2; j <= (i / 2); j++)
		{
			if (i % j == 0)
			{
				flag = true;
				break;
			}
		}

		if (flag == false)
			cout << i << "\n";
	}

}

