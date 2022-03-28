/*
Number Pattern 2

Print the following pattern
Pattern for N = 4
		   1
		  23
		 345
		4567
The dots represent spaces.

Input Format :
	N (Total no. of rows)
Output Format :
	Pattern in N lines

Sample Input :
	5
Sample Output :
		   1
		  23
		 345
		4567
	   56789

The dots represent spaces.
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

		int col = 1, val = 0;
		val = row;
		while (col <= row)
		{
			cout << val;
			val++;
			col++;
		}
		cout << endl;
		row++;
	}
}

