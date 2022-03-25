/*
Code : Square Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
	4444
	4444
	4444
	4444

Input format :
	Integer N (Total no. of rows)
Output format :
	Pattern in N lines

Constraints
	0 <= N <= 50

Sample Input 1:
	7
Sample Output 1:
	7777777
	7777777
	7777777
	7777777
	7777777
	7777777
	7777777

Sample Input 1:
	6
Sample Output 1:
	666666
	666666
	666666
	666666
	666666
	666666
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
		while (col <= N)
		{
			cout << N;
			col++;
		}
		cout << endl;
		row++;
	}
}

