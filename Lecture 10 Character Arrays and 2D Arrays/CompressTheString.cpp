/*
Compress the String

Write a program to do basic string compression. For a character which is consecutively repeated more than once,
replace consecutive duplicate occurrences with the count of repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.

Note:
Consecutive count of every character in the input string is less than or equal to 9.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The output contains the string after compression printed in single line.

Note:
You are not required to print anything. It has already been taken care of. Just implement the given function.

Constraints:
0 <= N <= 10^6

Where 'N' is the length of the input string.

Time Limit: 1 sec

Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa

Explanation for Sample Output 1:
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a'
and occuring 1 time hence no compression for last 3 characters.

Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5

Explanation for Sample Output 2:
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is occuring single time, 'd' is repeating
2 times and 'e' is repeating 25times.
*/

#include<iostream>
#include <cstring>
#include<string>
using namespace std;
typedef long long int lli;

// Code for C style String
/*string getCompressedString(string &input)
{
	int Idx = -1, count = 0;
	char current;
	for (int i = 0; i != '\0'; i++)
	{
		if ((i == 0) or (input[i] != input[Idx]))
		{
			if (count > 1)
			{
				Idx++;
				input[Idx] = count;
			}

			Idx++;
			input[Idx] = input[i];
			count = 1;
		}

		else
			count++;
	}

	Idx++;
	input[Idx] = '\0';
}*/

//Code for C++ style String
string getCompressedString(string &input)
{
	string Res = "";
	int current = 0, i = 0;

	for (i = 0; i < input.length(); i++)
	{
		if (i == 0)
			current++;
		else
		{
			if (input[i] == input[i - 1])
				current++;
			else
			{
				Res.push_back(input[i - 1]);
				if (current > 1)
				{
					Res += to_string(current);
					current = 1;
				}
			}
		}
	}

	Res.push_back(input[i - 1]);

	if (current > 1)
		Res += to_string(current);
	return Res;
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
	string str;
	getline(cin, str);
	str = getCompressedString(str);
	cout << str << endl;

	return 0;
}


