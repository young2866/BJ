#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 13;
			if (str[i] > 90)
				str[i] -= 26;
		}

		else if (str[i] >= 97 && str[i] <= 114)
		{
			str[i] += 13;
			if (str[i] > 122)
				str[i] -= 26;
		}
		else if (str[i] >= 115 && str[i] <= 122)
		{
			str[i] -= 13;
		}
	}

	cout << str << "\n";

	return 0;
}