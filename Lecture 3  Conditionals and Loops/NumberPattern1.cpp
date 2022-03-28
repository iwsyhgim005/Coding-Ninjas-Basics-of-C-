/*
Number Pattern 1

Print the following pattern
	Pattern for N = 4
		1
		23
		345
		4567

Input Format :
	N (Total no. of rows)
Output Format :
	Pattern in N lines

Sample Input 1 :
	3
Sample Output 1 :
		1
		23
		345
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

	int row = 1, val = 0;
	while (row <= N)
	{
		int col = 1;
		val = row;
		while (col <= row)
		{
			cout << val;
			col++;
			val++;
		}
		cout << endl;
		row++;
	}
}

