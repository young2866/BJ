#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N[9];

	int SUM = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> N[i];

		SUM += N[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (SUM != 100)
			for (int j = i + 1; j < 9; j++)
			{
				if (SUM - N[i] - N[j] == 100)
				{
					N[i] = 0;
					N[j] = 0;
					SUM = 100;
					break;
				}
			}
		else
			break;
	}
	
	for (int i = 0; i < 9; i++)
	{
		if (N[i] != 0)
			printf("%d\n", N[i]);
	}


	return 0;
}