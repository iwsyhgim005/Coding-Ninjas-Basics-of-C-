/*
Reverse Each Word

Aadil has been provided with a sentence in the form of a string as a function parameter.
The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.

Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
The input string represents the sentence given to Aadil.

Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN

Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc
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


void reverseEachWord(char input[])
{
	int len = strlen(input);
	int start = 0, end = 0;

	for (int i = 0; i <= len; i++)
	{
		if ((input[i] == ' ') or (input[i] == '\0'))
		{
			end = (i - 1);
			reverse(input, start, end);
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


	int size = 1e6;
	char str[size];
	cin.getline(str, size);
	reverseEachWord(str);
	cout << str;

	return 0;
}


