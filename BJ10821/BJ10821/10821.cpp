#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;

	int cnt = 1;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ',')
			cnt++;

	}

	cout << cnt << "\n";

	return 0;
}