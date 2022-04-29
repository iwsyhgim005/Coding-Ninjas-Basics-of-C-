/*
Check Palindrome

Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards,
it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
All the characters in the string would be in lower case.

Output Format:
The only line of output prints either 'true' or 'false'.

Note:
You are not required to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1 :
abcdcba
Sample Output 1 :
true

Sample Input 2:
coding
Sample Output 2:
false
*/
#include<iostream>
#include <cstring>
using namespace std;
typedef long long int lli;


bool checkPalindrome(char str[])
{
	int Idx1 = 0;
	int Idx2 = ((strlen(str)) - 1);

	while (Idx1 < Idx2)
	{
		if (str[Idx1] != str[Idx2])
		{
			return false;
			break;
		}

		Idx1++;
		Idx2--;
	}

	return true;
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
	cout << (checkPalindrome(str) ? "true" : "false");

	return 0;
}





