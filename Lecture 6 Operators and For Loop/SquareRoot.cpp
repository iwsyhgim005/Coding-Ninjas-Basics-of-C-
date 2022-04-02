/*
Square Root (Integral)

Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.

Input format :
	Integer N
Output Format :
	Square root of N (integer part only)

Constraints :
	0 <= N <= 10^8

Sample Input 1 :
	10
Sample Output 1 :
	3

Sample Input 2 :
	4
Sample Output 2 :
	2
*/

#include<iostream>
#include <cmath>
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

	cout << floor(sqrt(N));

}





