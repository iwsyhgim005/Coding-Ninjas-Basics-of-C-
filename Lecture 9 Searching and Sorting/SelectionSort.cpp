#include<iostream>
using namespace std;
typedef long long int lli;

void selectionSort(int input[], int n)
{
	for (int i = 0; i < n - 1; i++ )
	{
		// Find min element in the array
		int min = input[i], minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (input[j] < min)
			{
				min = input[j];
				minIndex = j;
			}
		}

		// Swap
		int temp = input[i];
		input[i] = input[minIndex];
		input[minIndex] = temp;
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


	int input[] = {3, 1, 6, 9, 0, 4};
	selectionSort(input, 6);

	for (int i = 0; i < 6; i++)
	{
		cout << input[i] << " ";
	}

	cout << endl;
}





