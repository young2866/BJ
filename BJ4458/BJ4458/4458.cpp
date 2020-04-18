#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	string str;

	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		getline(cin, str);

		for (int j = 0; j < 1; j++)
		{
			if (str[j] >= 97 && str[j] <= 122)
				str[j] -= 32;
		}

		cout << str << "\n";
	}

	return  0;
}