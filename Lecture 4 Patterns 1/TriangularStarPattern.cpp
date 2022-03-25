/*
Code : Triangular Star Pattern

Print the following pattern for the given N number of rows.


Pattern for N = 4
		*
		**
		***
		****
Note : There are no spaces between the stars (*).

Input format :
	Integer N (Total no. of rows)
Output format :
	Pattern in N lines

Constraints
	0 <= N <= 50

Sample Input 1:
	5
Sample Output 1:
		*
		**
		***
		****
		*****

Sample Input 2:
	6
Sample Output 2:
		*
		**
		***
		****
		*****
		******
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
		int col = 1;
		while (col <= row)
		{
			cout << "*";
			col++;
		}
		cout << endl;
		row++;
	}
}

