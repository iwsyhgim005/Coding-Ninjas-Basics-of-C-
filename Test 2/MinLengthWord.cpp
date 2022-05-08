/*
Minimum Length Word

Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.

Input Format :
String S

Output Format :
Minimum length word

Constraints :
1 <= Length of String S <= 10^5

Sample Input 1 :
this is test string
Sample Output 1 :
is

Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a
*/

#include<iostream>
#include <cstring>
#include<climits>
using namespace std;
typedef long long int lli;

void minLengthWord(char input[], char output[])
{

	int len = strlen(input);
	int lastWord = -1, currentWord = 0, min = INT_MAX;
	int startIdx = 0, minStartIdx = 0, minEndIdx = 0;

	for (int i = 0; i <= len; i++)
	{
		if ((input[i] == ' ') or (input[i] == '\0'))
		{
			currentWord = ((i - (lastWord)) - 1);
			startIdx = (lastWord + 1);
			lastWord = i;

			if (currentWord < min)
			{
				min = currentWord;
				minStartIdx = startIdx;
				minEndIdx = i;
			}
		}
	}

	int Idx = 0;
	for (int i = minStartIdx; i < minEndIdx ; i++)
		output[Idx++] = input[i];

	output[Idx] = '\0';
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


	char ch[10000], output[10000];
	cin.getline(ch, 10000);
	minLengthWord(ch, output);
	cout << output << endl;

	return 0;
}


