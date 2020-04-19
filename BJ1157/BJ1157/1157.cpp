#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	char c = 0;
	int arr[26] = { 0, };
	int Max = 0;
	int temp;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			arr[str[i] - 65]++;
			if (arr[str[i] - 65] > Max)
			{
				temp = str[i] - 65;
				Max = max(Max, arr[str[i] - 65]);
			}
		}
	
		else
		{
			arr[str[i] - 97]++;
			if (arr[str[i] - 97] > Max)
			{
				temp = str[i] - 97;
				Max = max(Max, arr[str[i] - 97]);
			}
		}
		
		
	}

	for (int i = 0; i < 26; i++)
	{
		if (i != temp && Max == arr[i])
		{
			cout << "?" << endl;
			break;
		}
		else if (i == 25)
		{
			c = temp + 65;
			cout << c << endl;
		}
	}




	return 0;
}