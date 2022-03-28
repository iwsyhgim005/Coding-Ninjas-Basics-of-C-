/*
Code : Triangle of Numbers

Print the following pattern for the given number of rows.

Pattern for N = 4
           1
          232
         34543
        4567654

Input format :
	Integer N (Total no. of rows)
Output format :
	Pattern in N lines

Constraints :
	0 <= N <= 50

Sample Input 1:
	5
Sample Output 1:
           1
          232
         34543
        4567654
       567898765

Sample Input 2:
	4
Sample Output 2:
           1
          232
         34543
        4567654
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

		int col1 = 1, val1 = row;
		while (col1 <= row)
		{

			cout << val1;
			col1++;
			val1++;
		}

		int col2 = (row - 1);
		int val2 = ((row * 2) - 2);
		while (col2 >= 1)
		{
			cout << val2;
			col2--;
			val2--;
		}
		cout << endl;
		row++;
	}
}

