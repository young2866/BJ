#include <iostream>

using namespace std;

int main()
{
	int N;
	int temp;

	scanf("%d", &N);

	temp = N;
	for (int i = 0; i < 2 * N - 1; i++)
	{
		if (i < N)
		{
			for (int x = 0; x < N + i; x++)
			{
				if (x >= N - i - 1)
					printf("*");
				else
					printf(" ");
			}
		}
		else
		{
			for (int x = 0; x < 3 * N -i-2; x++)
			{
				if (i - N < x)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}