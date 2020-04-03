#include <iostream>

using namespace std;

int main()
{
	int N;
	int temp1, temp2;
	scanf("%d", &N);

	temp1 = 2*N-1;
	temp2 = 2*N;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{
			for (int x = 0; x < temp1; x++)
			{
				if (x % 2 == 0)
					printf("*");
				else
					printf(" ");
			}
		}
		else
			for (int x = 0; x < temp2; x++)
			{
				if (x % 2 == 0)
					printf(" ");
				else
					printf("*");
			}
		printf("\n");
	}

	return 0;
}