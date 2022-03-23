/*
Find power of a number

Write a program to find x to the power n (i.e. x^n). Take x and n from the user.
You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
	Two integers x and n (separated by space)
Output Format :
	x^n (i.e. x raise to the power n)

Constraints:
	0 <= x <= 8
	0 <= n <= 9

Sample Input 1 : 3 4
Sample Output 1 : 81

Sample Input 2 : 2 5
Sample Output 2 : 32
*/




#include<iostream>
using namespace std;
typedef long long int lli;

int main()
{

	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
	#endif*/

	lli x, n, ans = 1;
	cin >> x >> n;

	while (n--)
	{
		ans *= x;
	}

	cout << ans;
}

