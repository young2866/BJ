#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	string str1, str2;
	int arr[20];

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> str1 >> str2;
		for (int j = 0; j < str1.length(); j++)
		{
			if (str1[j] <= str2[j])
				arr[j] = str2[j] - str1[j];
			else if (str2[j] < str1[j])
				arr[j] = (str2[j] + 26) - str1[j];
		}

		cout << "Distances: ";

		for (int j = 0; j < str1.length(); j++)
		{
			cout << arr[j];
			if (j != str1.length())
				cout << " ";
		}
		cout << "\n";
		cin.ignore();
	}
	
	return 0;
}