/*
Trim Spaces

Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.

Input Format :
 String S

Output Format :
Updated string

Constraints :
1 <= Length of string S <= 10^6

Sample Input :
abc def g hi
Sample Output :
abcdefghi
*/

#include<iostream>
#include <cstring>
using namespace std;
typedef long long int lli;


void trimSpaces(char input[])
{
	int len = strlen(input);
	int k = 0;

	for (int i = 0; i < len; i++)
	{
		if (input[i] != ' ')
		{
			input[k] = input[i];
			k++;
		}
	}

	input[k] = '\0';
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


	char input[1000000];
	cin.getline(input, 1000000);
	trimSpaces(input);
	cout << input << endl;

	return 0;
}





