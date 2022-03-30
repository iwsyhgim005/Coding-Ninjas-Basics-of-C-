/*
Nth Fibonacci Number

Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2),
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Input Format :
	The first line of each test case contains a real number ‘N’.
Output Format :
	For each test case, return its equivalent Fibonacci number.

Constraints:
	1 <= N <= 10000
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second

Sample Input 1:
	6
Sample Output 1:
	8

Explanation of Sample Input 1:
Now the number is ‘6’ so we have to find the “6th” Fibonacci number
So by using the property of the Fibonacci series i.e

[ 1, 1, 2, 3, 5, 8]
So the “6th” element is “8” hence we get the output.
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

	lli N;
	cin >> N;
	lli Num1 = 0, Num2 = 1, temp = 0;

	for (lli i = 2; i <= N; i++)
	{
		temp = Num2;
		Num2 = (Num1 + Num2);
		Num1 = temp;
	}

	cout << Num2;
}

