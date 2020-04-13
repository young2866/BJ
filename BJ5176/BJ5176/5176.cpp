#include <bits/stdc++.h>

using namespace std;

int main()
{
	int K,N;
	int P, M;
	int cnt = 0;

	
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int J[501] = { 0, };
		cin >> P >> M;
		for (int j = 1; j <= P; j++)
		{
			cin >> N;
			if (J[N] != 0)
				cnt++;
			else
				J[N] = 1;
		}
		printf("%d\n", cnt);
		cnt = 0;
		
	}

	return 0;
}