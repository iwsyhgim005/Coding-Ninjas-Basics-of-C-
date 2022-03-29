/*
Code : Diamond of stars

Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5
		  *
		 ***
		*****
		 ***
		  *

Input format :
	N (Total no. of rows and can only be odd)
Output format :
	Pattern in N lines

Constraints :
	1 <= N <= 49

Sample Input 1:
	5
Sample Output 1:
		  *
		 ***
		*****
		 ***
		  *

Sample Input 2:
	3
Sample Output 2:
		  *
		 ***
		  *
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


	while (row <= ((N + 1) / 2))
	{

		int space1 = (((N - 1) / 2) - (row - 1));
		while (space1 >= 1)
		{
			cout << " ";
			space1--;
		}

		int col1 = ((row * 2) - 1);
		while (col1 >= 1)
		{
			cout << "*";
			col1--;
		}

		cout << endl;
		row++;

	}

	row = 1; //important
	while (row <= ((N - 1) / 2))
	{
		int space = 1;
		while (space <= row)
		{
			cout << " ";
			space++;
		}

		int col1 = (N - (row * 2));
		while (col1 >= 1)
		{

			cout << "*";
			col1--;
		}

		cout << endl;
		row++;
	}

}
