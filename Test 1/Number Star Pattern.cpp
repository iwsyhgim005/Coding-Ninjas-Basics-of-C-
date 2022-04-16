/*
Number Star Pattern

Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
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

		int col1 = 1;
		while (col1 <= (N - (row - 1)))
		{

			cout << col1;
			col1++;
		}

		int space1 = (row - 1);
		int val1 = 1;
		while (val1 <= space1)
		{
			cout << "*";
			val1++;
		}

		int space2 = (row - 1);
		int val2 = 1;
		while (val2 <= space2)
		{
			cout << "*";
			val2++;
		}

		int col2 = (N - (row - 1));
		while (col2 >= 1)
		{
			cout << col2;
			col2--;
		}

		cout << endl;
		row++;
	}
}

