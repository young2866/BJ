#include <iostream>

using namespace std;

int main()
{
	int N;
	int temp;

	scanf("%d", &N);

	temp = N;

	for (int i = 0; i < N; i++)
	{
		for (int x = 0; x < (temp * 2)-(i+1); x++)
		{
			if (i >= 1 && i > x)
					printf(" ");
			else
				printf("*");
			
		}
		printf("\n");
	}
}