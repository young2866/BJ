#include <iostream>

using namespace std;

int main()
{
	int N;
	int G[100];
	int ANS = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &G[i]);

		if (G[i] == 1 && G[i - 1] != 0 && i != 0)
			G[i] = G[i] + G[i - 1];
	}
	for (int i = 0; i < N; i++)
	{
		ANS += G[i];
	}

	printf("%d\n", ANS);
	return 0;
}