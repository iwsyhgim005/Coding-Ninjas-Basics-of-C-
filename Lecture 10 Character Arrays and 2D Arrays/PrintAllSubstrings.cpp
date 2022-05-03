/*
Print All Substrings

For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string.

Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
All the characters in the string would be in lower case.

Output Format:
Print the total number of substrings possible, where every substring is printed on a single line
and hence the total number of output lines will be equal to the total number of substrings.

Note:
The order in which the substrings are printed, does not matter.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abc
Sample Output 1:
a
ab
abc
b
bc
c

 Sample Input 2:
co
Sample Output 2:
c
co
o
*/

#include<iostream>
#include <cstring>
using namespace std;
typedef long long int lli;


// Converting the problem into a pattern problem.
void printSubstrings(char input[])
{
	int len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			for (int k = i; k <= j; k++)
			{
				cout << input[k];
			}

			cout << "\n";
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


	int size = 1e6;
	char str[size];
	cin >> str;
	printSubstrings(str);

	return 0;
}


