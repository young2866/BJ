#include <bits/stdc++.h>

using namespace std;

int main()
{
	int K;
	int N;
	int G[50];
	int MAX = 0;
	int MIN = 999;
	int GAP =0;

	cin >> K;

	for (int i = 1; i <= K; i++)
	{
		cin >> N;
		for(int j = 0; j < N; j++)
		{
			cin >> G[j];
			MAX = max(MAX, G[j]);
			MIN = min(MIN, G[j]);

		}
		sort(G, G + N, greater<int>());
		for (int j = 0; j < N - 1; j++)
		{
			GAP = max(GAP,  G[j]- G[j+1]);
		}
		printf("Class %d\n", i);
		printf("Max %d, Min %d, Largest gap %d\n", MAX, MIN, GAP);
		MAX = 0;
		MIN = 999;
		GAP = 0;
	}


	return 0;
}