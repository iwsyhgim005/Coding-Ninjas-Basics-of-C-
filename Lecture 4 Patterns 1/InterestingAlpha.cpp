/*
Code : Interesting Alphabets

Print the following pattern for the given number of rows.
Pattern for N = 5
		E
		DE
		CDE
		BCDE
		ABCDE

Input format :
	N (Total no. of rows)
Output format :
	Pattern in N lines

Constraints
	0 <= N <= 26

Sample Input 1:
	8
Sample Output 1:
		H
		GH
		FGH
		EFGH
		DEFGH
		CDEFGH
		BCDEFGH
		ABCDEFGH

Sample Input 2:
	7
Sample Output 2:
		G
		FG
		EFG
		DEFG
		CDEFG
		BCDEFG
		ABCDEFG
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
			char ch = (('A' + (N - row)) + (col - 1));
			cout << ch;
			col++;
		}
		cout << endl;
		row++;
	}
}

