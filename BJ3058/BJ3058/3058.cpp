#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	int MIN = 999;
	int SUM = 0;
	int N;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cin >> N;
			if (N % 2 == 0)
			{
				SUM += N;
				MIN = min(MIN, N);
			}
		}
		printf("%d %d\n", SUM, MIN);

		SUM = 0; MIN = 999;
	}

	return 0;
}