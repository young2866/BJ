#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	int cnt = 0;
	int N, M;
	int N1;
	int temp = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N >> M;
		
		for (int i = N; i <= M; i++)
		{
			N1 = i;
			if (i == 0)
				cnt++;
			else
			while (N1)
			{
				if (N1 == 0)
					break;
				else if (N1 % 10 == 0)
				{
					cnt++;
				}
				N1 /= 10;
			}
		}
		cout << cnt << "\n";
		cnt = 0;
	}

	return 0;
}