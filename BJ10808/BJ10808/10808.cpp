#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int arr[27] = { 0, };
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		arr[str[i]-97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i];
		if (i != 26)
			cout << " ";
	}

	return 0;
}