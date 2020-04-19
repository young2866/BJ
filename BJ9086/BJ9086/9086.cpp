#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	string str;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str.length() == 1)
				cout << str[j];
			
			if (j == 0 || j == str.length() - 1)
				cout << str[j];
		}
		cout << "\n";
		cin.ignore();
	}

	return 0;
}