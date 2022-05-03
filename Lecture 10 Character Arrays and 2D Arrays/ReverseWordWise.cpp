/*
Reverse Word Wise

Reverse the given string word wise. That is, the last word in given string should come at 1st place,
 last second word at 2nd place and so on. Individual words should remain as it is.

Input format :
String in a single line

Output format :
Word wise reversed string in a single line

Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.

Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/

#include<iostream>
#include <cstring>
using namespace std;
typedef long long int lli;

void reverse(char input[], int start, int end)
{


	int Idx1 = start, Idx2 = end;
	while (Idx1 < Idx2)
	{
		char temp = input[Idx1];
		input[Idx1] = input[Idx2];
		input[Idx2] = temp;

		Idx1++;
		Idx2--;
	}
}


void reverseStringWordWise(char input[])
{
	int len = strlen(input);
	reverse(input, 0, len - 1);				// Reversing the whole sentence

	int start = 0, end = 0;
	for (int i = 0; i <= len; i++)
	{
		if ((input[i] == ' ') or (input[i] == '\0'))
		{
			end = (i - 1);
			reverse(input, start, end);		// Reversing each word
			start = (i + 1);
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


	char input[1000];
	cin.getline(input, 1000);
	reverseStringWordWise(input);
	cout << input << endl;

	return 0;
}


