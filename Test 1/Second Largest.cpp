/*
Second Largest

Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given,
the second largest should be INT_MIN ( - 2^31 ).

Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
	 4
	 3 9 0 9
Sample Output 1:
 	3

Sample Input 2 :
	 2
	 4 4
Sample Output 2:
	 -2147483648
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
*/

#include<iostream>
#include <climits>
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

	int Num, Cnt = 1;
	int max1 = INT_MIN, max2 = INT_MIN;

	while (Cnt <= N)
	{
		cin >> Num;
		if (Num > max1)
		{
			max2 = max1;
			max1 = Num;
		}

		else if ((Num > max2) and (Num != max1))
			max2 = Num;

		Cnt++;
	}

	cout << max2 << "\n";

}

