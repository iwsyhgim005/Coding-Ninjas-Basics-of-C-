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

		int col1 = 1;
		while (col1 <= row)
		{
			cout << col1;
			col1++;
		}

		int col2 = (row - 1);
		while (col2 >= 1)
		{
			cout << col2;
			col2--;
		}

		cout << endl;
		row++;
	}
}

