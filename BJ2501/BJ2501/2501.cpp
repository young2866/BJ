#include <iostream>

using namespace std;

int main()
{
	int N, K;
	int Y[1000];
	int count = 0;
	int temp = 0;

	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			Y[temp] = i;
			temp++;
		}
	}
	if (K > temp)
		printf("0\n");
	else
		printf("%d\n", Y[K-1]);

	return 0;
}