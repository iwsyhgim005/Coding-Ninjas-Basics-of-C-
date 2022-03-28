/*
Code : Star Pattern

Print the following pattern

Pattern for N = 4
		    *
		   ***
		  *****
		 *******

Input Format :
	N (Total no. of rows)
Output Format :
	Pattern in N lines

Constraints :
	0 <= N <= 50

Sample Input 1 :
	3
Sample Output 1 :
		   *
		  ***
		 *****

Sample Input 2 :
	4
Sample Output 2 :
		 *
		***
	   *****
	  *******
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
	cin >> N;
	int row = 1;
	while (row <= N)
	{
		int space = 1;
		while (space <= (N - row))
		{
			cout << " ";
			space++;
		}

		int col = 1;
		while (col <= ((2 * row) - 1))
		{
			cout << "*";
			col++;
		}
		cout << endl;
		row++;
	}
}

