#include <iostream>

using namespace std;

int main()
{
	int T;
	int N;
	int NN;
	int SUM = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N);
		for (int x = 0; x < N; x++)
		{
			scanf("%d", &NN);
			SUM += NN;
		}
		printf("%d\n", SUM);
		SUM = 0;
	}

	return 0;
}