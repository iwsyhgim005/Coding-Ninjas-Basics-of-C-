/*
Pyramid Number Pattern

Print the following pattern for the given number of rows.

Pattern for N = 4
		   1
		  212
		 32123
		4321234

Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
	5
Sample Output :
		       1
		      212
		     32123
		    4321234
		   543212345
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

		int col1 = row;
		while (col1 >= 1)
		{

			cout << col1;
			col1--;
		}

		int col2 = (row - 1);
		int val2 = 2;
		while (col2 >= 1)
		{
			cout << val2;
			col2--;
			val2++;
		}
		cout << endl;
		row++;
	}
}

