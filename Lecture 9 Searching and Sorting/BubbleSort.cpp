#include<iostream>
using namespace std;
typedef long long int lli;

void printArray(int input[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << input[i] << " " ;
	}
	cout << endl;
}

void bubbleSort(int arr[], int n)
{
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = 0; i < n - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
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


	int n;
	cin >> n;

	int input[100];

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	bubbleSort(input, n);

	printArray(input, n);
}





