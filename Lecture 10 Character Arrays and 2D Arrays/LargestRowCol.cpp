/*
Largest Row or Column

For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the
largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first.
And if ith row and jth column has the same largest sum, consider the ith row as answer.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
Then the test cases follow.

First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space.
 They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'M' column values separated by a single space.

Output Format :
For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>
It will be printed in a single line separated by a single space between each piece of information.

Output for every test case will be printed in a seperate line.

Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value
for the range of Integer.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3

Time Limit: 1sec

Sample Input 1 :
1
2 2
1 1
1 1
Sample Output 1 :
row 0 2

Sample Input 2 :
2
3 3
3 6 9
1 4 7
2 8 9
4 2
1 2
90 100
3 40
-10 200
Sample Output 2 :
column 2 25
column 1 342
*/

#include<iostream>
#include<climits>
#include <cstring>
using namespace std;
typedef long long int lli;

/*
You can use minimum value of integer as -2147483647 and
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{
	// Largest Sum Row wise
	int rowSum = INT_MIN, rowIdx = 0;
	for (int row = 0; row < nRows; row++)
	{
		int currRowSum = 0;
		for (int col = 0; col < mCols; col++)
		{
			currRowSum += input[row][col];
		}

		if (currRowSum > rowSum)
		{
			rowSum = currRowSum;
			rowIdx = row;
		}
	}

	// Largest Sum Column wise
	int colSum = INT_MIN, colIdx = 0;
	for (int col = 0; col < mCols; col++)
	{
		int currColSum = 0;
		for (int row = 0; row < nRows; row++)
		{
			currColSum += input[row][col];
		}

		if (currColSum > colSum)
		{
			colSum = currColSum;
			colIdx = col;
		}
	}

	if (colSum > rowSum)
		cout << "column " << colIdx << " " << colSum;
	else if (rowSum > colSum)
		cout << "row " << rowIdx << " " << rowSum;
	else
	{
		if (rowSum == colSum)
		{
			if (colIdx > rowIdx)
				cout << "column " << colIdx << " " << colSum;
			else
				cout << "row " << rowIdx << " " << rowSum;
		}
		else
			cout << "row " << rowIdx << " " << rowSum;
	}

}




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


	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}

	return 0;
}


